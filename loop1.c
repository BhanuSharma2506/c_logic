Q1)->

armstrong number
 
dry run :
A)->152 

B)->154 

ANS)A->

#include<stdio.h>
int main(){
    int num=152;
    int sum=0;
    int rem;
    int temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum){
        printf("armstrong");
    }
    else{
        printf("not");
    }
    return 0;
}

OUTPUT->
NOT

ANS)B->

#include<stdio.h>
int main(){
int num=154;
int sum=0;
int rem;
int temp=num;
while(num>0){
    rem=num%10;
    sum=sum+rem*rem*rem;
    num=num/10;
}
if(temp==sum){
    printf("armstrong");
}
else{
    printf("not");
}
return 0;
}

OUTPUT->NOT
--------------------------------------------------------------------------------------------
Q2)->

A)->count digit :
67437

B)->12573
dry run

ANS)->

#include<stdio.h>
int main(){
    int num=67437;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
output->5

ANS)B->


#include<stdio.h>
int main(){
    int num=12573;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
output->5
---------------------------------------------------------------------------------------------------
Q3)->

table print 2 
dry run 

ANS->

#include<stdio.h>
int main(){
    int a=2;
    while(a<=10){
        printf("%d\n",a*2);
        a++;
    }
    return 0;
}
--------------------------------------------------------------------------------------
Q4)->

user input table 

#include<stdio.h>
int main(){
    int a;
    int n;
    printf("enter the value n");
    scanf("%d",&n);
    while(a<=10){
        printf("%d\n",a*n);
        a++;
    }
    return 0;
}
---------------------------------------------------------------------------------------
5)->

sum of digit : dry run 

ANS)->

#include<stdio.h>
int main(){
    int num=2345;
    int sum=0;
    int rem;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
-------------------------------------------------------------------------------------------
Q6)
e :54--->90 even number print 

o :45--->96 odd number print 

s :1--->10 number sum 

w :swap values

p :pallindrome 

r :reverse 

a :armstrong 

c :count of digit 

t :table of number 

ANS)->

#include<stdio.h>
int main(){
    char e;
    printf("enter the charater");
    scanf(" %c",&e);
    if(e=='e'){
    int a=54;
    while(a<=90){
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }
    }
    if(e=='o'){
        int a=45;
        while(a<=96){
            if(a%2!=0){
                printf("%d\n",a);
            }
            a++;
        }
    }
    if(e=='s'){
        int a=1;
        int sum=0;
        while(a<=10){
            sum=sum+a;
            a++;
        }
        printf("%d",sum);
    }
    if(e=='w'){
        int a=10;
        int b=20;
        printf("enter the value a %d \n",a);
        printf("enter the value b %d \n",b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("swap the number of a %d \n",a);
        printf("swap the number of b %d \n",b);
    }
    if(e=='p'){
        int num;
        int sum;
        int rem;
        printf("enter the value num\n");
        printf("enter the value sum\n");
        scanf("%d%d",&num,&sum);
         int temp=num;
        while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
        printf("%d\n",sum);
        if(temp==sum){
            printf("pallindrome");
        }
        else{
            printf("not");
        }
    }
    if(e=='r'){
  int num;
  int sum;
  int rem;
  printf("enter the value num\n");
  printf("enter the value sum\n");
  scanf("%d%d",&num,&sum);
  while(num>0){
      rem=num%10;
      sum=sum*10+rem;
      num=num/10;
  }
 printf("%d\n",sum);
}
if(e=='a'){
    int num;
    int sum;
    int rem;
    printf("enter the value num\n");
    printf("enter the value sum\n");
    scanf("%d%d",&num,&sum);
    int temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum){
        printf("armstrong");
    }
    else{
        printf("not");
    }
}
   if(e=='c'){
    int num;
    int count;
     printf("enter the value num\n");
    printf("enter the value count\n");
    scanf("%d%d",&num,&count);
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
  if(e=='t'){
    int a;
    int n;
    printf("enter the value n");
    scanf("%d",&n);
    while(a<=10){
        printf("%d\n",a*n);
        a++;
    }
}
return 0;
}
--------------------------------------------------------------------------------




 

