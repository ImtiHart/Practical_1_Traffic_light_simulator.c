#include <stdio.h>
#include <stdlib.h>

/*Initialize variables*/
char colour;

/*Ask user the first letter of traffic light colour, then the code should identify which case the colour is with*/
int main()
{
    printf("What colour is the traffic light\n");
    printf("Use the first letter of the word to indicate the colour for example R for red.");
    scanf("%c", &colour);

    switch(colour)
    {
    case 'R':
    case 'r':
        printf("STOP!!!");
        break;
    case 'Y':
    case 'y':
        printf("READY!!!");
        break;
    case 'G':
    case 'g':
        printf("GO!!!");
        break;
    default:
        printf("INVALID INPUT");
        break;
    }
}
