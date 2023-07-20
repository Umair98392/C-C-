#include<stdio.h>
void main()
{
    FILE *fp;
    char str[1000],str1[1000];
    //create a file
    fp = fopen("text1.txt","w");

    //write into a file
    printf("Enter text to be insert in file : ");
    gets(str);

    fputs(str,fp);
    printf("\n Data is stored in file\n");

    //Read from a file
    printf("read by the file\n");
    fclose(fp);

    fp = fopen("text1.txt","r");
    fgets(str1,100,fp);
    printf("%s",str1);


    //close fiie
    fclose(fp);
    printf("\nFile closed");
}