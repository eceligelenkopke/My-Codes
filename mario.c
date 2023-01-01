#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=0;
do
{
    n = get_int("Number: ");
}
while (n>=9 || n<=0);
int i;
for(i=0;i<n;i++)
{
 int a;
  for(a=n-1;a>i;a--)
  {
    printf(" ");
  }
  int y;
  for(y=0;y<=i;y++)
  {
    printf("#");
  }
    printf("\n");
}

}
