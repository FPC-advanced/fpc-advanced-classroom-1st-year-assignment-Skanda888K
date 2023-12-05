#include<stdio.h>
 void input_string(char* str, char* substr)
 {
    printf("Enter the string");
    scanf("%s",str);
    printf("Enter the substring");
    scanf("%s",substr);

 }
 int sub_str_index(char* string, char* substr)
 {
   int i=0,index=-1,X;
   for( i=0;substr[i]!='\0';i++);
   
    X=i-1;  
    i=0;
    int j=0;
    for(j=0;string[j]!='\0';j++)
    {
        if(string[j]==substr[i])
        {
            index++;
            i++;
            if(index==X)
            {
              index=j-X;
              return index;
            }
        }

    }
 

    

 }
 void output(char *string, char *substr, int index)
 {
printf("The index of %s in %s is %d",substr,string,index);
 }
int main()
{
    char str[100],substr[100];
    int index;
    input_string(str,substr);
    index=sub_str_index(str,substr);
    output( str, substr,  index);
    return 0;

}