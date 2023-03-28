#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL)); /* seed the random number generator with the current time */

    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % sizeof(charset); /* generate a random index into the charset */
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0'; /* null-terminate the string */

    printf("Random password: %s\n", password);

    return (0);
}
