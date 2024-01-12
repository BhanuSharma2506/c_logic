Q1)

1 :one 
2 :two 
3 :three 
4 :four 
5 :five 
6: six 

ANS->
  
#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    if(a==1){
        printf("one");
    }
    else if(a==2){
        printf("two");
    }
    else if(a==3){
        printf("three");
    }
    else if(a==4){
    printf("four");
    }
    else if(a==5){
        printf("five");
    }
    else if(a==6){
        printf("six");
    }
    else{
        printf("not match");
    }
    return 0;
}

output->

enter the value3
three

enter the value7
not match
-----------------------------------------------------------------------------------------------------
Q2)

1 :today is sunday 

2: today is mon 

3: today is tue

4: today is wed

5: today is thu

6: today is fr

7: today is sat

this is not week 

 ANS-> 

#include<stdio.h>
int main(){
    int a;
    printf("enter the week");
    scanf("%d",&a);
    if(a==1){
        printf("sunday");
    }
       else if(a==2){
        printf("moday");
       }
       else if(a==3){
       printf("thuesday");
       }
       else if(a==4){
           printf("wednesday");
       }
       else if(a==5){
           printf("thursday");
       }
       else if(a==6){
           printf("friday");
       }
       else if(a==7){
           printf("saturday");
       }
       else{
           printf("not week");
       }
    return 0;
}

OUTPUT->

enter the week7
saturday
-----------------------------------------------------------------------------------
Q3)->

month :
1:jan
2:feb 
total 12 

ANS->

#include<stdio.h>
int main(){
    int a;
    printf("enter the months");
    scanf("%d",&a);
    if(a==1){
        printf("january");
    }
       else if(a==2){
        printf("february");
       }
       else if(a==3){
       printf("march");
       }
       else if(a==4){
           printf("april");
       }
       else if(a==5){
           printf("may");
       }
       else if(a==6){
           printf("june");
       }
       else if(a==7){
           printf("july");
       }
       else if(a==8){
           printf("august");
       }
       else if(a==9){
           printf("september");
       }
       else if(a==10){
           printf("october");
       }
       else if(a==11){
           printf("november");
       }
       else if(a==12){
           printf("december");
       }
       esle{
          printf("not month")
       }
    return 0;
}

out put->

enter the months12
december
-------------------------------------------------------------------------------------------
Q4)->

check alphabet vowel | consoant 

#include<stdio.h>
int main(){
    char a;
    printf("enter the vowel");
    scanf("%c",&a);
    if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'){
        printf("vowel");
    }
       else{
           printf("consonat");
       }
       
    return 0;
}

output->

enter the vowelo
vowel
------------------------------------------------------------------------------------------------
Q5) 

a :apple 
b :ball 
c:cat 
d :dog 

#include<stdio.h>
int main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    if(a=='a'){
        printf("apple");
    }
       else if(a=='b'){
        printf("bole");
       }
       else if(a=='c'){
       printf("cat");
       }
       else if(a=='d'){
           printf("dog");
       }
       else{
           printf("not mach");
       }
    return 0;
}
 output->

enter the charactera
apple
-----------------------------------------------------------------------------------------------
Q6)

two number :if else 

ANS->

#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
    if(a>b){
        printf("max");
    }
        else{
            printf("b is max");
        } 
      
    return 0;
}
out put->

enter the value2
enter the value4
b is max
---------------------------------------------------------------------------------------
Q7)

five number maximum 

ANS->

#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
    int c;
    printf("enter the value");
    scanf("%d",&c);
    int d;
    printf("enter the value");
    scanf("%d",&d);
    int e;
    printf("enter the value");
    scanf("%d",&e);
    if(a>b && a>c && a>d && a>e){
        printf("a is max");
    }
        else if(b>a && b>c && b>d && b>e){
            printf("b is max");
        } 
        else if(c>a && c>b && c>d && c>e){
            printf("b is max");
        }
        else if(d>a && d>b && d>c && d>e){
            printf("d is max");
        }
        else if(e>a && e>b && e>c && e>d){
            printf("e is max");
        }
        else{
            printf("a and b and c and d and e are equal ");
        }
      
    return 0;
}

output->

enter the value2
enter the value3
enter the value4
enter the value5
enter the value6
e is max
---------------------------------------------------------------------------------------------
Q8)

10 number maximum 
  
ANS->

#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
    int c;
    printf("enter the value");
    scanf("%d",&c);
    int d;
    printf("enter the value");
    scanf("%d",&d);
    int e;
    printf("enter the value");
    scanf("%d",&e);
    int f;
    printf("enter the value");
    scanf("%d",&f);
    int g;
    printf("enter the value");
    scanf("%d",&g);
    int h;
    printf("enter the value");
    scanf("%d",&h);
    int i;
    printf("enter the value");
    scanf("%d",&i);
    int j;
    printf("enter the value");
    scanf("%d",&j);
    if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j){
        printf("a is max");
    }
     else if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j){
            printf("b is max");
        } 
        else if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j){
            printf("c is max");
        }
        else if(d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j){
            printf("d is max");
        }
        else if(e>a && e>b && e>c && e>d && e>f && e>g && e>h && e>i && e>j){
            printf("e is max");
        }
        else if(f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j){
            printf("f is max");
        }
            else if(g>a && g>b && g>c && g>d &&  g>e  && g>f && g>h && g>i && g>j){
            printf("g is max");
        }
        else if(h>a && h>b && h>c && h>d && h>e && h>f && g>h && h>i && h>j){
            printf("h is max");
        }
        else if(i>a && i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>j){
            printf("i is max");
        }
        else if(j>a && j>b && j>c && j>d && j>e && j>f && j>h && j>i){
            printf("j is max");
        }
        else{
            printf("a and b and c and d and e and f and g and h and i and j are equal ");
        }
    return 0;
}
 output->

enter the value0
enter the value9
enter the value8
enter the value7
enter the value6
enter the value5
enter the value4
enter the value3
enter the value2
enter the value1
b is max
---------------------------------------------------------------------------------------------------

Q9)

m | M :male 
f | F :female 
other 
 
ANS->

#include<stdio.h>
int main(){
    char f;
    printf("enter the charater");
    scanf("%c",&f);
    if(f=='f'){
    printf("femal");
}
   else if(f=='m'){
   printf("male");
}
else{
    printf("other");
}
return 0;
}
 output->

enter the charaterf
femal

----------------------------------------------------------------------------------------------------
Q10)

a :addition 
m :multiplication
d :division 
s :swap 
w :swap with variable 
o :modular 
u :substraction

ANS->

#include<stdio.h>
int main(){
    char a;
    printf("enter the charater");
    scanf("%c",&a);
    if(a=='a'){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
    int c;
    c=a+b;
    printf("%d",c);
}
    else if(a=='s'){
    int e;
    printf("enter the value");
    scanf("%d",&e);
    int f;
    printf("enter the value");
    scanf("%d",&f);
    int g;
    g=e-f;
    printf("%d",g);
    }
    else if(a=='w'){
      int a=10;
      int b=20;
      a=a+b;
      b=a-b;
      a=a-b;
      printf("%d\n",a);
       printf("%d",b);
    }
    else if (a=='q'){
    int a;
    printf("ener the value");
    scanf("%d",&a);
    int b;
    printf("ener the value");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
       printf("%d\n",b);
    }
    lse if(a=='b'){
    int e;
    printf("enter the value");
    scanf("%d",&e);
    int f;
    printf("enter the value");
    scanf("%d",&f);
    int g;
    g=e*f;
    printf("%d",g);
    }
    else if(a=='m'){
    int e;
    printf("enter the value");
    scanf("%d",&e);
    int f;
    printf("enter the value");
    scanf("%d",&f);
    int g;
    g=e%f;
    printf("%d",g);
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------------
Q11)


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
Q12)


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
Q13)  

5 and 15 
check number both are divisble

ANS->

 #include<stdio.h>
int main()  {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%5==0 && num%15==0){
        printf("both are div");
    }
    else{
        printf("not div");
    }
    return 0;
}

output->

enter the number30
both are div

-----------------------------------------------------------------------------------------------------
14)->

5 and 15 
check number any one are divisble 

ANS->

#include<stdio.h>
int main()  {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%5==0 || num%15==0){
        printf(" div");
    }
    else{
        printf("not div");
    }
    return 0;
}

output->

enter the number10
div

----------------------------------------------------------------------------------------------------------------------

15)->

1--->5 this is between one to five 

10--->25 this is between 10 to 25

26--->100 this is between 26 to 100

not match  

ANS->

#include<stdio.h>
int main()  {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num>1 && num<=5){
        printf(" this is between one to five");
    }
    else if(num>=10 && num<=25){
        printf(" this is between 10 to 25");
    }
    else if(num>=26 && num<=100){
        printf(" this is between 26 to 100");
    }
    return 0;
}

output->

enter the number3
this is between one to five
------------------------------------------------------------------------------------------------------------
16)->

marks :input 5 number 
per caclulate :
grades :
per enter : grade

90 above :A 
60-90 :B 

50-60 :C

fail 

ANS->

#include<stdio.h>
int main()  {
    int per;
    printf("enter the number");
    scanf("%d",&per);
    if(per>90){
        printf(" A");
    }
    else if(per>60 && per<=90){
        printf(" B");
    }
    else if(per>=50 && per<=60){
        printf(" c");
    }
    else {
        printf("fail ");
    }
    return 0;
}

output->

enter the number90
B

------------------------------------------------------------------------------------------------

17)->

5 marks enter : 
40 se badey 
	average

fail 

ANS->

#include<stdio.h>
int main()  {
    int a;
    printf("enter the vlaue");
    scanf("%d",&a);
    int b;
    printf("enter the vlaue");
    scanf("%d",&b);
    int c;
    printf("enter the vlaue");
    scanf("%d",&c);
    int d;
    printf("enter the vlaue");
    scanf("%d",&d);
    int e;
    e=a+b+c+d/400*100;
    if(a>40 && b>40 && c>40 && d>40){
        printf("average");
        }
        else{
            printf("fail");
        }
    return 0;
}

OUT PUT->

enter the vlaue60
enter the vlaue60
enter the vlaue90
enter the vlaue90
average
--------------------------------------------------------------------------------------------------------










 




