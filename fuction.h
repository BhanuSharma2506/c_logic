Q1)->

functions :
show1() :hello 
show2() :how are you 
show3() :welcome to jaipur 
show4() :my name is _

ANS->

#include<stdio.h>
void show();
void show2();
void show3();
void show4();
int main(){
    show();
    show2();
    show3();
    show4();
    return 0;
}
void show(){
    printf("hello world \n");
}
void show2(){
    printf("ho are you\n");
}
void show3(){
    printf("welcome to jaipur \n");
}
void show4(){
    printf("my name is bhanu");
}
------------------------------------------------------------------------------------------------------------
Q2)->

user input 
add() :four variable addition 
sub() :two variable addition 
multi() :four variable addition 
div() :two variable addition 

ANS

#include <stdio.h>
void add();
void sub();
void multi();
void divd();
int main()
{
    add();
    sub();
    multi();
    divd();
    return 0;
}
void add(){
    int a,b,c,d;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b  \n");
    scanf("%d",&b);
    printf("Enter the value of c  \n");
    scanf("%d",&c);
    printf("Enter the value of d  \n");
    scanf("%d",&d);
    int e=a+b+c+d;
    printf("The answer is : %d\n",e);
}
void sub(){
    int a,b;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    int c=a-b;
    printf("The answer is : %d\n",c);
}
void multi(){
    int a,b,c,d;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    printf("Enter the value of c : \n");
    scanf("%d",&c);
    printf("Enter the value of d : \n");
    scanf("%d",&d);
    int e=a*b*c*d;
    printf("The answer is : %d\n",e);
}
void divd(){
    int a,b;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    int c=a/b;
    printf("The answer is : %d",c);
}

--------------------------------------------------
user input
swap() :number swap 
voter() :to check a user is valid or not 
vowel() :to check a vowel and consonant 
gender() :to check a gender male |female 
maximum() :three number maximum 
area() :area and volume 

Ans)
#include <stdio.h>
void swap();
void voter();
void vowel();
void gender();
void max();
void area();
int main()
{
    swap();
    voter();
    vowel();
    gender();
    max();
    return 0;
}
void swap(){
    int a,b;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a after swap : %d\n",a);
    printf("The value of b after swap : %d\n",b);
}
void voter(){
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("valid\n");
    }
    else{
        printf("Not valid\n");
    }
}
void vowel(){
    char alph;
    printf("Enter the charactar : ");
    scanf("%c",&alph);
    if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'){
        printf("vowel\n");
    }
    else{
        printf("consonent\n");
    }
}
void gender(){
    char a;
    printf("Enter the charactar : ");
    scanf("%c",&a);
    if(a=='f'){
        printf("female\n");
    }
    else if(a=='m'){
        printf("male\n");
    }
    else{
        printf("others\n");
    }
}
void max(){
    int a,b,c;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    printf("Enter the value of b : \n");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("A is max\n");
    }
    else if(b>a&&b>c){
        printf("B is max\n");
    }
    else if(c>a&&c>b){
        printf("C is max\n");
    }
    else{
        printf("All are equal\n");
    }
}

--------------------------------------------------------



