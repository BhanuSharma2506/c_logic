1)

Q)number :
1 -->10
1+2+3+4+5+6+7+8+9+10 

ANS->

#include<stdio.h>
int main(){
    int a=1;
    int sum=0;
    while(a<=10){
        sum=sum+a;
        a++;
    }
    printf("%d",sum);
    return 0;
}

0UT PUT->

55
-----------------------------------------------------------------------------------
Q2)->

1---->10 even 

ANS->

#include<stdio.h>
int main(){
    int a=1;
    while(a<=10){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
---------------------------------------------------------------------------
Q3)->

1---->100 even 

ANS->

#include<stdio.h>
int main(){
    int a=1;
    while(a<=100){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
-----------------------------------------------------------------------------
Q4)->

50---->100 even

ANS->
#include<stdio.h>
int main(){
    int a=50;
    while(a<=100){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
---------------------------------------------------------------------------------
5)

45--->90 Even

ANS->

#include<stdio.h>
int main(){
    int a=45;
    while(a<=90){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
-----------------------------------------------------------------------------
Q6)

10--->1 even number
  
#include<stdio.h>
int main(){
    int a=10;
    while(a>=1){
        if(a%2==0){
            printf("%d",a);
        }
        a--;
    }
    return 0;
}
---------------------------------------------------------------------------------
Q7)->

100----1 Even

ANS->

#include<stdio.h>
int main(){
    int a=100;
    while(a>=1){
        if(a%2==0){
            printf("%d",a);
        }
        a--;
    }
    return 0;
}
 ------------------------------------------------------------------------

8)->

100---->50 

Ans->

#include<stdio.h>
int main(){
    int a=100;
    while(a>=50){
        if(a%2==0){
            printf("%d",a);
        }
        a--;
    }
    return 0;
}
--------------------------------------------------------------------------------------------

9)->

1--->10 odd number 
 
ANS->

#include<stdio.h>
int main(){
    int a=1;
    while(a<=10){
        if(a%2!=0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}

-----------------------------------------------------------------------------------
10)->

1--->100 odd number 

ANS->


#include<stdio.h>
int main(){
    int a=1;
    while(a<=100){
        if(a%2!=0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
-------------------------------------------------------------------------

Q11)->

50--->100 odd number 

 ANS->

#include<stdio.h>
int main(){
    int a=50;
    while(a<=100){
        if(a%2!=0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
----------------------------------------------------------------------------------

Q12)->

67---->90 odd number

ANS->

#include<stdio.h>
int main(){
    int a=67;
    while(a<=90){
        if(a%2!=0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
} 
------------------------------------------------------------------------------------

Q13)->
10--->1 odd number 

ANS->


#include<stdio.h>
int main(){
    int a=10;
    while(a>=1){
        if(a%2!=0){
            printf("%d",a);
        }
        a--;
    }
    return 0;
}
---------------------------------------------------------------------------------

Q14)

98--->34 odd number

ANS->

#include<stdio.h>
int main(){
    int a=98;
    while(a>=34){
        if(a%2!=0){
            printf("%d",a);
        }
        a--;
    }
    return 0;
} 
--------------------------------------------------------------------------------
Q15)->


6312 ===>2136 

ANS->

#include<stdio.h>
int main(){
  int a=6312;
  int sum=0;
  int rem;
  while(a>0){
      rem=a%10;
      sum=sum*10+rem;
      a=a/10;
      printf("%d\n",sum);
  }
  return 0;
}
--------------------------------------------------------------------------------------------
Q16)->

v :check eligible for vote or not 
a :check vowel ya consoant 
e :even number check 
o :odd number check 
g :gender check 
b :1---->10 number print 
t :1---->100 number 
r :number reverse 
p :pallindrome

ANS->
#include<stdio.h>
int main(){
    char v;
    printf("enter the charater");
    scanf("%c",&v);
    if(v=='v'){
        int a;
        printf("enter the value");
        scanf("%d",&a);
        if(a>=18){
            printf("eligible for vote");
        }
        else{
            printf("eligible for not vote");
        }
    }
    if(v=='g'){
    char f;
    printf("enter the gender");
    scanf(" %c",&f);
    if(f=='f'){
        printf("femal");
    }
    else if(f=='m'){
        printf("male");
    }
    else{
        printf("other");
    }
    }
    if(v=='e'){
       int b;
       printf("enter the value");
       scanf("%d",&b);
       if(b%2==0){
           printf("even");
       }
       else{
           printf("not even");
       }
      if(v=='o'){
        int number;
        printf("enter the number");
        scanf("%d",&number);
        if(number%2!=0){
            printf("odd");
    }
    else{
           printf("not old");
       }
}
}
if(v=='a'){
    char a;
    printf("enter the character");
    scanf(" %c",&a);
    if(a=='a' || a=='e'|| a=='o' || a=='u' ||a=='i'){
        printf("vowel");
    }
    else{
        printf("consoant");
    }
    }
    if(v=='1'){
    int a=1;
    while(a<=100){
        printf("%d",a);
        a++;
    }
}
 if(v=='2'){
    int a=1;
    while(a<=10){
        printf("%d",a);
        a++;
    }
}
if(v=='r'){
  int a;
  int sum;
  int rem;
  printf("enter the value a\n");
  printf("enter the value sum\n");
  scanf("%d%d",&a,&sum);
  while(a>0){
      rem=a%10;
      sum=sum*10+rem;
      a=a/10;
  }
 printf("%d\n",sum);
}
if(v=='p'){
  int a;
  int sum;
  int rem;
 
  printf("enter the value a\n");
  printf("enter the value sum\n");
  scanf("%d%d",&a,&sum);
   int temp=a;
  while(a>0){
      rem=a%10;
      sum=sum*10+rem;
  
      a=a/10;
      }
           printf("%d\n",sum);
           if(temp==sum){
           printf("pallindrome");
      }
      else{
          printf("not");
      }
      
}

return 0;
}
----------------------------------------------------------------------------------------------------








 

 







