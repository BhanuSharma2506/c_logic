Q1)


s :number swap without third variable 
not match 


#include<stdio.h>
int main(){
    char s;
    printf("enter the charater value");
    scanf("%c",&s);
    if(s=='s'){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
    a=a+b;
    b=a-b; 
    a=a-b;
    printf("enter the swap value of a:%d\n",a);
    printf("enter the swap value of a:%d\n",b);
          printf("swap");
      }
      else{
          printf("not sawp");
      }
    return 0;  
}
0UT PUT->

enter the charater values
enter the value10
enter the value20
enter the swap value of a:20
enter the swap value of a:10
swap
---------------------------------------------------------------------------------------------
Q2)


s :number swap  third variable 
not match 


#include<stdio.h>
int main(){
    char s;
    printf("enter the charater value");
    scanf("%c",&s);
    if(s=='s'){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
     int c;
    c=a;
    a=b; 
    b=c;
    printf("enter the swap value of a:%d\n",a);
    printf("enter the swap value of a:%d\n",b);
          printf("swap");
      }
      else{
          printf("not sawp");
      }
    return 0;  
}
0UT PUT-
enter the charater values
enter the value2
enter the value3
enter the swap value of a:3
enter the swap value of a:2
swap
---------------------------------------------------------------------------------------------







