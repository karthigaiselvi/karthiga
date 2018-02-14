# include<>stdio.h>
#include<conio.h>
void main()
{
char x;
scanf("%c",&x);
if((x>='a' && x<='z')||(x>='A' && x<='Z'))
printf("alphabet");
else
printf("no");
getch();
}
