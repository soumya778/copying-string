//copying one string into another
#include<stdio.h>
void main()
{
    char string1[30],string2[30];
    int i;
    printf("Enter a string:");
    printf("?");
    scanf("%s",&string1);
    for(i=1;string1[i]!='\0';i++);
    string2[i]=string1[i];
    string2[i]='\0';
    printf("\n");
    printf("\n%s\n",string2);

}

