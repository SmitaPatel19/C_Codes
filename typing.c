#include <stdio.h>
#include <stdbool.h>
#include <conio.h>         //It stand for console input output i.e it takes input from keyboard and displays it on screen.
#include <dos.h>           //this Library has functions that are used for handling interrupts,producing sound,date and time functions.
#include <windows.h>       //this is a base header file for win32 programming it contains declaration of almost all basic windows macros and different typedef.
#include <time.h>          //the time.h header file contains deinitions of functions to get and manipulate date and time information.

#define SCREEN_W 160
#define SCREEN_H 40
#define WIN_WIDTH 140                     // HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD C;                                  // a COORD structure that specifies the new cursor position in characters.

char keys[10];
int keyPos[10][2];
int score = 0;
int speed = 0;
void gotoxy(int x, int y)
{                                                          // places cursor at a desired location on screen.
    C.X = x;
    C.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);          //1.handle   2.COORD
}

void setcursor(bool visible, DWORD size)
{
    if (size == 0) size = 20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}

void drawBorder()
{
    for (int i = 0; i < SCREEN_W; i++)
    {
        gotoxy(i, 0);
        printf("\033[1;34m-\033[0m\n");
    }
    for (int i = 0; i < SCREEN_W; i++)
    {
        gotoxy(i, SCREEN_H);
        printf("\033[1;34m-\033[0m\n");
    }
    for (int i = 0; i < SCREEN_H; i++)
    {
        gotoxy(0, i);
        printf("\033[1;34m|\033[0m\n");
        gotoxy(SCREEN_W, i);
        printf("\033[1;34m|\033[0m\n");
    }

    for (int i = 0; i < SCREEN_H; i++)
    {
        gotoxy(WIN_WIDTH, i);
        printf("\033[1;34m|\033[0m\n");
    }
}

void genAlphabet(int ind)
{
    keys[ind] = 65 + rand() % 26;                                //rand()= takes random numbers input
    keyPos[ind][0] = 2 + rand() % (WIN_WIDTH - 2);
    keyPos[ind][1] = 1;
}

void drawAlphabet(int ind)
{
    if (keyPos[ind][0] != 0)
    {
        gotoxy(keyPos[ind][0], keyPos[ind][1]);
        printf("\033[1;35m%c\033[0m", keys[ind]);                // change d to c
    }
}

void eraseAlphabet(int ind)
{
    if (keyPos[ind][0] != 0)
    {
        gotoxy(keyPos[ind][0], keyPos[ind][1]);
        printf(" ");
    }
}

void resetAlphabet(int ind)
{
    eraseAlphabet(ind);
    genAlphabet(ind);
}

void gameover()
{
    system("cls");
    gotoxy(55, 17);
    printf("\t\t\033[1;31m------------------------\033[0m\n");
    gotoxy(55, 18);
    printf("\t\t\033[1;31m-------GAME OVER--------\033[0m\n");
    gotoxy(55, 19);
    printf("\t\t\033[1;31m------------------------\033[0m\n");
    gotoxy(55, 21);
    printf("\t\t\033[1;32mYour final score is : %d\033[0m\n", score);
    gotoxy(52, 23);
    printf("\t    \033[1;36mPress any key to go back to menu.\033[0m\n");
    getch();
}

void updateScore()
{
    gotoxy(WIN_WIDTH + 7, 5);
    printf("\033[1;31mScore:\033[0m %d", score);
}

void instructions()
{
    system("cls");
    gotoxy(60, 15);
    printf("\033[1;32m------------\033[0m");
    gotoxy(60, 16);
    printf("\033[1;32mINSTRUCTIONS\033[0m");
    gotoxy(60, 17);
    printf("\033[1;32m------------\033[0m");
    gotoxy(60, 19);
    printf("\033[1;36m1. On Left side you will see falling characters.\033[0m ");
    gotoxy(60, 21);
    printf("\033[1;36m2. You have to keep them away from touching floor.\033[0m");
    gotoxy(60, 23);
    printf("\033[1;36m3. Press respective Key from keyboard to keep playing.\033[0m");
    gotoxy(60, 26);
    printf("\033[1;31mPress 'escape' to exit.\033[0m");
    gotoxy(60, 29);
    printf("\033[1;33mPress any Key to go back to menu.\033[0m");
    getch();
}

void play()
{
    setcursor(0, 0);
    score = 0;
    for (int i = 0; i < 10; i++)
    {
        keyPos[i][0] = keyPos[i][1] = 1;                  // as a precaution to prevent dataoverflow
    }
    system("cls");
    drawBorder();
    updateScore();

    for (int i = 0; i < 10; i++)
        genAlphabet(i);

    gotoxy(WIN_WIDTH + 5, 2);
    printf("\033[1;32mTyping Tutor\033[0m");
    gotoxy(WIN_WIDTH + 1, 4);
    printf("\033[1;35m-------------------\033[0m");
    gotoxy(WIN_WIDTH + 1, 6);
    printf("\033[1;35m-------------------\033[0m");
    gotoxy(WIN_WIDTH + 5, 8);
    printf("\033[1;33mPress 'Esc'\033[0m");
    gotoxy(WIN_WIDTH + 5, 9);
    printf("\033[1;33mto exit.\033[0m");

    gotoxy(55, 20);
    printf("\033[1;31m*Press any key to start...*\033[0m\n");
    getch();
    gotoxy(55, 20);
    printf("                                          ");

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            for (int i = 0; i < 10; i++)               // 10 to 20
            {
                if (ch - 32 == keys[i])       // for convert small letter to capital letter ex. a=97 (97-32=65) A=65 // ch ==keys[i]
                {
                    resetAlphabet(i);
                    score++;
                    updateScore();
                }
            }
            if (ch == 27)
            {
                break;
            }
        }
        for (int i = 0; i < 10; i++)
            drawAlphabet(i);

        Sleep(speed);

        for (int i = 0; i < 10; i++)
        {
            eraseAlphabet(i);
            keyPos[i][1] += 1;
            if (keyPos[i][1] > SCREEN_H)
            {
                gameover();
                return;
            }
        }
    }
}

void paragraph(int k)
{
    system("cls");
    setcursor(17, 17);
    int n;
    printf("\033[1;34mEnter the level number(1 To 10)\033[0m\n");
    printf("\033[1;31mNote: Do not use backspace else the pratice will exit.\033[0m\n\n");
    printf("\033[1;31mPress Esc to exit\033[0m\n");
    char ty = getch();
    if (ty == 27)
    {
        goto start;
    }
    scanf("%d", &n);
    if (n == 1)
    {
        char str[] = "Books are the quietest and most constant of friends; they are the most accessible and wisest of counselors, and the most patient of teachers.";
        check(str);
    }
    else if (n == 2)
    {
        char str1[] = "Brawny gods just flocked up to quiz and vex him. Jackdaws love my sphinx of black quartz? Poky Jean acquired six amazing velvet hats with fine braid? Jack Baxter followed the gypsy queens to my dozen beehives.";
        check(str1);
    }
    else if (n == 3)
    {
        char str2[] = "How many cares one loses when one decides not to be something, but to be someone. (Gabrielle 'Coco' Chanel)";
        check(str2);
    }
    else if (n == 4)
    {
        char str3[] = "Halitosis is the clinical term for bad breath. Halitosis can result from a variety of causes, but most commonly improper oral hygiene.";
        check(str3);
    }
    else if (n == 5)
    {
        char str4[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA ABCDE FGHIJ KLMNO PQRST UVWXYZ zyx wvu tsr qpo nml kji hgf edc ba ZY XW VU TS RQ PO NM LK JI HG FE DC BA abcdef ghijkl mnopqr stuvwx yz";
        check(str4);
    }
    else if (n == 6)
    {
        char str5[] = "The 51 settlers and the 71 animals arrived here about 1688. They gave 4888 persons 453 promissory notes in 359 days. Send 79 people to do 17 sets of 777 shows.";
        check(str5);
    }
    else if (n == 7)
    {
        char str6[] = "J&J fixed our roof at 19 Plum St. Total cost was $410.81. I know that 2 * 2 = 4. I know that 5 - 4 = 1. On 6/2/16 he got 29# of bricks @ $7.66, an increase of 01.";
        check(str6);
    }
    else if (n == 8)
    {
        char str7[] = "Cage, thoracic Apollo Perichondroma Dol Human reproductive cloning EGF Spastic paraplegia, autosomal dominant Tympanostomy tube Stickler syndrome Corneal dystrophy.";
        check(str7);
    }
    else if (n == 9)
    {
        char str8[] = "cras pulvinar ridiculus consectetur etiam conubia aptent tristique in imperdiet molestie elit arcu maecenas sem dignissim donec.";
        check(str8);
    }
    else
    {
        char str9[] = "spricht beweis behalten denkst gleiche firma willst starb nachste entfernt wollen bleib besuch seele unglaublich halt weg mut befehl.";
        check(str9);
    }
start:;
}

void check(char s[])
{
    printf("\n\n\033[1;36m%s\033[0m\n", s);
    int errors = 0;
    int spaces = 0;

    time_t start_time = time(NULL);
    for (int i = 0; i < strlen(s); i++)
    {
        char op = getch();
        if (op == s[i])
        {
            printf("\033[1;32m%c\033[0m", op);
        }
        else if (op == 27 || op == 8)
        {
            break;
        }
        else
        {
            printf("\033[1;31m%c\033[0m", op);
            errors++;
            Beep(500,600);                                // Beep(x,y) x=frequency, y=timing
        }
        if (s[i] == ' ')
        {
            spaces++;
        }
    }
    time_t end_time = time(NULL);
    double elapsed_time = difftime(end_time, start_time);
    double accuracy = (double)(strlen(s) - errors) / strlen(s) * 100;
    double wpm = (double)((spaces + 1) * 60) / elapsed_time;

    gotoxy(0, 10);
    printf("\033[1;32mYour typing accuracy is %.2f percent.\033[0m\n", accuracy);
    gotoxy(0, 12);
    printf("\033[1;33mYou typed the sentence in %.2f seconds.\033[0m\n", elapsed_time);
    gotoxy(0, 14);
    printf("\033[1;34mYour typing speed is %.2f words per minute.\033[0m\n", wpm);
    gotoxy(0, 18);
    printf("\033[1;31mPress Esc to exit\033[0m\n");
    char ty = getch();
    if (ty == 27)
    {
        goto start;
    }
start:;
}

void aboutus()
{
    system("cls");
    printf("\033[1;31m||Our Goal:||\033[0m\n\n\n");
    printf("Welcome to our touch typing tutor terminal!\n\n");
    printf("We are dedicated to helping you improve your typing skills and become a faster and more accurate typist.\n\n");
    printf("Our team  has designed a comprehensive typing course that includes lessons, exercises, and tests to help you develop your typing proficiency.\nWe use the latest teaching methods to make our courses engaging, interactive, and effective.\n\n");
    printf("Thank you for choosing our typing tutor.\nWe are confident that you will find our courses helpful, informative, and fun!\n\n\n\n");
    printf("\033[1;33m||Our team:||\033[0m\n\n");
    printf("\033[1;34m1.Heet Shah\033[0m\n");
    printf("\033[1;32m Student_Id: 202251121\033[0m\n\n");
    printf("\033[1;34m2.Rudra Patel\033[0m\n");
    printf("\033[1;32m Student_Id: 202251094\033[0m\n\n");
    printf("\033[1;34m3.Rajan Patel\033[0m\n");
    printf("\033[1;32m Student_Id: 202251093\033[0m\n\n");
    printf("\033[1;34m4.Smita Patel\033[0m\n");
    printf("\033[1;32m Student_Id: 202251129\033[0m\n");
    printf("\n\n\033[1;31m Press any Key to go back to menu.\033[0m\n\n\n");
    getch();
}

int main()
{
    system("cls");
    setcursor(0, 0);
    srand((unsigned)time(NULL));      // Initialize random number generator srand()=time ke against random number generate krega.

    do
    {
        system("cls");
        gotoxy(65, 15);
        printf("\033[1;31m--------------------------\033[0m");
        gotoxy(65, 16);
        printf("\033[1;32m|     TYPING TUTOR       |\033[0m");
        gotoxy(65, 17);
        printf("\033[1;31m--------------------------\033[0m");
        gotoxy(65, 19);
        printf("\033[1;34m1. Typing Practice\033[0m");
        gotoxy(65, 20);
        printf("\033[1;35m2. Start Game\033[0m");
        gotoxy(65, 21);
        printf("\033[1;34m3. Instructions.\033[0m");
        gotoxy(65, 22);
        printf("\033[1;35m4. About us.\033[0m");
        gotoxy(65, 23);
        printf("\033[1;34m5. Quit.\033[0m");
        gotoxy(65, 25);
        printf(" \033[1;33mSelect Option:\033[0m");
        char op = getche();

        int x;
        if (op == '1')
        {
            paragraph(x);
        }
        else if (op == '2')
        {
            gotoxy(65, 27);
            printf("\033[1;32mchoose your level\033[0m\n");
            gotoxy(65, 28);
            printf("\033[1;34m1.Easy\033[0m\n");
            gotoxy(65, 29);
            printf("\033[1;35m2.Medium\033[0m\n");
            gotoxy(65, 30);
            printf("\033[1;34m3.Hard\033[0m\n");
            gotoxy(65, 31);
            printf("\033[1;35m4.Pro\033[0m\n");
            gotoxy(65, 32);
        firse:;
            int bp = getch();
            if (bp == '1')
            {
                speed = 350;
            }
            else if (bp == '2')
            {
                speed = 300;
            }
            else if (bp == '3')
            {
                speed = 250;
            }
            else if (bp == '4')
            {
                speed = 200;
            }
            else
            {
                gotoxy(65, 33);
                printf("\033[1;31mwrong input\033[0m\n");
                goto firse;
            }

            play();
        }

        else if (op == '3')
            instructions();
        else if (op == '4')
            aboutus();
        else if (op == '5')
            exit(0);
    } while (1);

    return 0;
}