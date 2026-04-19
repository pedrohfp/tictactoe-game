#include <stdio.h>
#include <string.h>

void choiceOfXOrCircle();

char firstPlayerChoice[10];
char secondPlayerChoice[10];

int main() {
    choiceOfXOrCircle();
    return 0;
}

void choiceOfXOrCircle() 
{
    printf("First player: X or O?\n");

    if(fgets(firstPlayerChoice, sizeof firstPlayerChoice, stdin) != NULL) 
    {
        size_t len = strlen(firstPlayerChoice);
        if (len > 0 && firstPlayerChoice[len-1] == '\n') firstPlayerChoice[len-1] = '\0'; // remove '\n'

        if(firstPlayerChoice[0] == 'X' || firstPlayerChoice[0] == 'O')
        {
            printf("You typed: %s\n", firstPlayerChoice);
        } else {
            printf("Invalid option. Type X or 0\n");
            choiceOfXOrCircle();
        }  
    }
}