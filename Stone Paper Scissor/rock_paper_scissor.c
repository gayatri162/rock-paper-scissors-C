#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char user, char computer)
{
    if (user == computer)
        return -1;

    if (user == 'r' && computer == 'p')
        return 0;

            else if (user == 'p' && computer == 'r') return 1;

    if (user == 'r' && computer == 's')
        return 1;

    else if (user == 's' && computer == 'r')
        return 0;

    if (user == 'p' && computer == 's')
        return 0;

    else if (user == 's' && computer == 'p')
        return 1;
}

int main()
{
    int n;
    char user, computer, result;

    srand(time(NULL));

    n = rand() % 100;
    
    if (n < 33)
        computer = 'r';

    else if (n > 33 && n < 66)

        computer = 'p';

    else
        computer = 's';

    printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");
    scanf("%c", &user);

    result = game(user, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
        printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",user, computer);

    return 0;
}