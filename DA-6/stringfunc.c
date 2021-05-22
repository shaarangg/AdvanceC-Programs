#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    char ch;
    char str1[20], str2[20];
    char *retstr;
    int ret;


    //Checking if the character input is printable or not
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isgraph(ch)!=0)
        printf("Entered character %c is a printable character\n",ch);
    else
        printf("Entered character %c is not a printable character\n",ch);


    printf("\n");    
    //Checking if the character input is present in string 1 or not
    printf("Enter string: ");
    scanf("%s",str1);
    fflush(stdin);
    printf("Enter a character: ");
    scanf("%c",&ch);
    retstr = memchr(str1,ch,strlen(str1));
    if(ret)
        printf("Character present in the str\n");
    else
        printf("Character not present\n");


    printf("\n");
    //Comparing two strings
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    ret = memcmp(str1,str2,strlen(str1));
    if(ret<0)
        printf("%s < %s\n",str1,str2);
    else if(ret==0)
        printf("%s = %s\n",str1,str2);
    else
        printf("%s > %s\n",str1,str2);

    
    printf("\n");
    //Copying one string to another
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    printf("Before memmove str1 = %s, str2 = %s\n",str1,str2);
    memmove(str1,str2,strlen(str1));
    printf("After memmove str1 = %s, str2 = %s\n",str1,str2);


    printf("\n");
    //Calculating the length of initial segment in str1 characters which are not in str2
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    ret = strcspn(str1,str2);
    printf("Length of str1 which are not in str2 = %d\n",ret);


    printf("\n");
    //Concatenating two strings
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    printf("Before strncat str1 = %s, str2 = %s\n",str1,str2);
    strncat(str1, str2, strlen(str2));
    printf("After strncat str1 = %s, str2 = %s\n",str1,str2);


    printf("\n");
    //Finding first matching character in str1 that is present in str2
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    retstr = strpbrk(str1,str2);
    if(retstr)
        printf("First matching character is %c\n",*retstr);
    else
        printf("Character not present\n");



    printf("\n");
    //Calculating the length of initial segment in str1 characters which are entirely made of str2
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    ret = strspn(str1,str2);
    printf("Length of initial segment matching  = %d\n",ret);


    printf("\n");
    //Checking if str2 is present in str1
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    retstr = strstr(str1,str2);
    if(retstr)
        printf("str2 present in str1\n");
    else
        printf("str2 not present in str1\n");


    printf("\n");
    //Breaking string into seperate tokens
    printf("Enter string: ");
    fflush(stdin);
    gets(str1);
    printf("Enter delimeter: ");
    scanf("%s",str2);
    retstr = strtok(str1,str2);
    while(retstr!=NULL)
    {
        printf("%s\n",retstr);
        retstr = strtok(NULL,str2);
    }
}   