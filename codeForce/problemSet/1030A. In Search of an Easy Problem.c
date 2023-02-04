#include <stdio.h>

int main()
{
    int participantNumber, participantFeedback;

    scanf("%d", &participantNumber);

    for (int i = 0; i < participantNumber; i++)
    {
        scanf("%d", &participantFeedback);

        if (participantFeedback == 1)
        {
            printf("HARD");
            return 0;
        }
        else
        {
            continue;
        }
    }
    printf("EASY");
}