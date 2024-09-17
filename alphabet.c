#include<stdio.h>
void main()
{
char ch;
printf("enter the character: ");
scanf("%c", &ch);
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
printf("character is an alphabet");
}
else
{

printf("character is not an alphabet");
}
}