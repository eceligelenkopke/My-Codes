#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char rotate(char c, int n);
bool only_digits(const string s);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        if (only_digits(argv[1]))
        {
            int key = atoi(argv[1]);
            string s = get_string("plaintext: ");

            printf("ciphertext: ");
            for (int i = 0; i < strlen(s); i++)
            {
                printf("%c", rotate(s[i], key));
            }
            printf("\n");

            return 0;
        }

        printf("Usage: caesar /key\n");
        return 1;
    }

    printf("Usage: caesar /key\n");
    return 1;
}

bool only_digits(const string s)
{
    for (size_t x = 0; x < strlen(s); x++)
    {
        if (!isdigit(s[x]))
        {
            return false;
        }
    }

    return true;
}

char rotate(char c, int n)
{
    if(isalpha(c)&& islower(c))
    {
        return(((c-97+n)%26+97));
    }
    else if(isalpha(c)&& isupper(c))
    {

        return(((c-65+n)%26+65));
    }
        return c;
}