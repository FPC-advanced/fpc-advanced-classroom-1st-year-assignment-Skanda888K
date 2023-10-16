#include<stdio.h>
void input(char *string1[100],char *string2[100])
{
    printf("ENTER TWO STRINGS");
    scanf("%s%s",string1[100],string2[100]);

}
int string_cmp(char string1[100],char string2[100],int *result)
{
    int i;
    for( i=0;(string1!='\0',string2!='\0');i++)
    {
     if(string1[i]<string2[i])
     {
    
   result[100]<0;
     }
     else{

     
         result[100]>0;
     
    }
    return result;
}
}
void output(char string1[100],char string2[100],int result)
{
    if(result<0)
    {
      printf("%S>%s",string2,string1);
    }
    else{
        printf("%s>%s",string1,string2);
    }
}
int main()
{
    char str1,str2;int result;
    input(&str1,&str2);
    string_cmp( str1, str2, &result);
    output(str1, str2, result);
    return 0;
}