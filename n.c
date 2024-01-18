Q1)->

user :
e :even number check 
	even 
	not even 

o :odd number 
	odd
	not odd 

not match
 
ANS->

#include<stdio.h>
int main(){
char a;
    printf("enter the character");
    scanf("%c",&a);
    if(a=='e'){
        int number;
        printf("enter the number");
        scanf("%d",&number);
        if(number%2==0){
            printf("even");
        }
        else{
            printf("not even");
        }
    }
    else if(a=='o'){
        int number;
        printf("enter the number");
        scanf("%d",&number);
        if(number%2!=0){
            printf("odd");
        }
        else{
            printf("not odd");
        }
    }
    else {
        printf("not match");
    }
    return 0;
}
 output->

enter the charactere
enter the number4
even
---------------------------------------------------------------------------------------------
Q2)->

v :check valid voter id 
g :check gender 
t :two number max 
h :three number max 
c :check vowel and consoant 

ANS->#include<stdio.h>
int main(){
    char v;
    printf("enter the charater value v :check valid voter id g :check gender t :two number max h :three number max c :check vowel and consoant ");
    scanf("%c",&v);
    if(v=='v'){
    int age;
    printf("enter the value");
    scanf("%d",&age);
    if( age>=18 ){
    printf("valid\n");
    }
    else{
        printf("not valid\n");
    }
    }
   
    if(v=='g'){
    char f;
    printf("enter the gender");
    scanf(" %c",&f);
    if(f=='f'){
    printf("femal\n");
}
   else if(f=='m'){
   printf("male\n");
}
else{
    printf("other");
}
    }
    if(v=='t'){
     int a;
    printf("enter the value");
    scanf(" %d",&a);
    int b;
    printf("enter the value");
    scanf(" %d",&b);
    if(a>b){
        printf("a is max");
    }
        else{
            printf("b is max\n");
        } 
    }
    if( v=='h'){
    int a;
    printf("enter the vlaue a");
    scanf("%d",&a);
     int b;
    printf("enter the value b");
    scanf("%d",&b);
     int c;
    printf("enter the value c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is max \n");
    }
    else if(b>a && b>c){
        printf("b is max\n");
    }
    else if(c>a && c>b){
        printf("c is max\n");
    }
    else{
        printf("a and b and c is equal");
    }
    }
    if(v=='r'){
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
return 0;
}
0utput->

enter the charater value v :check valid voter id g :check gender t :two number max h :three number max c :check vowel and consoant v
enter the value19
valid
enter the genderg
enter the genderf
femal
enter the charactert
enter the value12
enter the value23
b is max
enter the characterh
enter the vlaue a5
enter the value b7
enter the value c6
b is max
enter the characterc
enter the charactera
vowel
-----------------------------------------------------------------------------------------------------
Q3)->

c : alphabet 
	a :apple 
	b :ball 
	C :cat 
	not match 

d :digit check 
	1 :one 
	2 :two 
	3 :three
	not match 
ANS->

#include<stdio.h>
int main(){
    char b;
    printf("enter the character b :digit check a");
    scanf("%c",&b);
    if(b=='b'){
    char a;
    printf("enter the character");
    scanf(" %c",&a);
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
    }
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
     else{
        printf("not match");
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------
Q4)->

s : 
	w:with varaible swap 
	n:without varaible swap 

ANS->

#include<stdio.h>
int main(){
     char w;
    printf("enter the charater value w:with varaible swap n:without varaible swap ");
    scanf("%c",&w);
    if(w=='w'){
    char s;
    printf("enter the charater value");
    scanf(" %c",&s);
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
}
char n;
    printf("enter the charater value");
    scanf("%c",&n);
    if(n=='n'){
char s1;
    printf("enter the charater value");
    scanf(" %c",&s1);
    if(s1=='s1'){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    int b;
    printf("enter the value");
    scanf("%d",&b);
     int c;
    c=a;
    b=a; 
    b=c;
    printf("enter the swap value of a:%d\n",a);
    printf("enter the swap value of a:%d\n",b);
          printf("swap");
      }
      else{
          printf("not sawp");
      }
    }
return 0;
}
---------------------------------------------------------------------------------------------------
Q5)
C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
cesius 
f 
c---f 
c 
f---->c 

Ans)
#include <stdio.h>

int main()
{
    char alph;
    printf("Enter the char : ");
    scanf("%c",&alph);
    if(alph=='f'){
        float temp;
        printf("Enter the temprature in celsius : ");
        scanf("%f",&temp);
        printf("The temprature in Fahrenheit is : %f",(temp*1.8)+32);
    }
    else if(alph=='c'){
        float temp;
        printf("Enter the temprature in Fahrenheit : ");
        scanf("%f",&temp);
        printf("The temprature in celsius is : %f",(temp-32)*.5556);
    }
    return 0;
}

------------------------------------------------------

Q6)
Check whether the trainge , square , reactanlge (area & volume)
->input area /volume 
area 
traingle square rectangle 
square 

Ans)
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the char : ");
    scanf("%c",&alph);
    if(a=='a'){
        char al;
        printf("Enter the shap from t,s,r : ");
        scanf(" %c",&al);
        if(al=='t'){
            printf("The area of Trainge is : A=1/2*b*h");
        }
        else if(al=='s'){
            printf("The area of square is : A=a*a");
        }
        else if(al=='r'){
            printf("The area of a rectangle = length × width");
        }
    }
    else if(a=='v'){
        char al;
        printf("Enter the shap from t,s,r : ");
        scanf("%c",&al);
        if(al=='t'){
            printf("The volume of Trainge is : B*H");
        }
        else if(al=='s'){
            printf("The volume of square is : s*s*s");
        }
        else if(al=='r'){
            printf("The volume of a rectangle = length × width × height");
        }
    }
    else{
        printf("Not Match");
    }
    return 0;
}

-------------------------------------------------------------------------------

Q7)
salalry :
holidays (1) =full salary 
2-5 =5% 
5-14 =10% 
15 =50% 
else =not salary 

output : 
name:
address: 
bank details: 
salary : 
alot :
 holidays 

Ans)
#include <stdio.h>

int main()
{
    int sal;
    int holi;
    printf("Enter the salary : ");
    scanf("%d",&sal);
    printf("Enter the Holiday : ");
    scanf("%d",&holi);
    if(holi==1){
        printf("Name : Gajendra Singh\n");
        printf("Address : Jaipur\n");
        printf("Bank Details : SBI Bank\n");
        printf("The Salary of this month will be : %d\n",sal);
        printf("Holidays Aloted : %d\n",holi);
    }
    else if(holi>=2 && holi<5){
        printf("Name : Gajendra Singh\n");
        printf("Address : Jaipur\n");
        printf("Bank Details : SBI Bank\n");
        printf("The Salary of this month will be : %d\n",sal-(sal/100)*5);
        printf("Holidays Aloted : %d\n",holi);
    }
    else if(holi>=5 && holi<14){
        printf("Name : Gajendra Singh\n");
        printf("Address : Jaipur\n");
        printf("Bank Details : SBI Bank\n");
        printf("The Salary of this month will be : %d\n",sal-(sal/100)*10);
        printf("Holidays Aloted : %d\n",holi);
    }
    else if(holi==15){
        printf("Name : Gajendra Singh\n");
        printf("Address : Jaipur\n");
        printf("Bank Details : SBI Bank\n");
        printf("The Salary of this month will be : %d\n",sal-(sal/100)*50);
        printf("Holidays Aloted : %d\n",holi);
    }
    else{
        printf("No salary for this Month");
    }
    return 0;
}
----------------------------------------------------------------------------------------------------



