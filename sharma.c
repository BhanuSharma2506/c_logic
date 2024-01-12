Q1 user input :->

34, -6.7, 12 ,8.09, o,W

#include<stdio.h>
int main(){
    // 34, -6.7, 12 ,8.09, o, 
  int a;
  printf("enter the value a ");
  scanf("%d",&a);
  printf("the value of a %d\n",a);
  float b;
  printf("enter the decimal value b ");
  scanf("%f",&b);
  printf("the  decimal value of b %f\n",b);
  int c;
  printf("enter the value c ");
  scanf("%d",&c);
  printf("the value of c %d\n",c);
  float d;
  printf("enter the decimal value d ");
  scanf("%f",&d);
  printf("the  decimal value of d %f\n",d);
   char f;
  printf("enter the character  ");
  scanf("%c\n",&f);
  char e;
  printf("enter the character  ");
  scanf("%c\n",&e);
  return 0;
}

output->

enter the value a 34
the value of a 34
enter the decimal value b -6.7
the  decimal value of b -6.700000
enter the value c 12
the value of c 12
enter the decimal value d 8.09
the  decimal value of d 8.090000
enter the character  'o'
enter the character  'w'
----------------------------------------------------------------------------------------------

2)
r
12
-78
y
8.9
16
-9.8

Ans)
#include <stdio.h>

int main()
{
    // r
    // 12
    // -78
    // y
    // 8.9
    // 16
    // -9.8
    char a;
    int b;
    int c;
    char d;
    float e;
    int f;
    float g;
    printf("enter the value of a,b,c,d,e,f \n");
    scanf("%c ",&a);
    scanf("%d",&b);
    scanf("%d ",&c);
    scanf("%c",&d);
    scanf("%f ",&e);
    scanf("%d",&f);
    scanf("%f",&g);
    return 0;
}

----------------------------------------------

3)
23 +9

Ans)
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int c=a+b;
    printf("Ans %d",c);
    return 0;
}


----------------------------------------------

4)23 -9 

Ans)
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int c=a-b;
    printf("Ans is  %d",c);
    return 0;
}

----------------------------------------------

5)
12*3

Ans)
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    int c=a*b;
    printf("Ans is  %d",c);
    return 0;
}


----------------------------------------------

6)
66/3

Ans)
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the value of a  ");
    scanf("%d",&a);
    printf("Enter the value of b  ");
    scanf("%d",&b);
    int c=a/b;
    printf("Ans is : %d",a/b);
    return 0;
}


----------------------------------------------

7)
56+78+34+12

Ans)
#include <stdio.h>

int main()
{
    // 56+78+34+12
    int a;
    int b;
    int c;
    int d;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    printf("Enter the value of c ");
    scanf("%d",&c);
    printf("Enter the value of d ");
    scanf("%d",&d);
    int e=a+b+c+d;
    printf("Ans is : %d",e);
    return 0;
}

----------------------------------------------

8)
12*4-6/2

Ans)
#include <stdio.h>

int main()
{
    // 12*4-6/2
    int a;
    int b;
    int c;
    int d;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b  ");
    scanf("%d",&b);
    printf("Enter the value of c ");
    scanf("%d",&c);
    printf("Enter the value of d ");
    scanf("%d",&d);
    int c=a*b-c/d;
    printf("Ans is : %d",c);
    return 0;
}

----------------------------------------------

9)1.2*2-(8/2)

Ans)
#include <stdio.h>

int main()
{
    // 1.2*2-(8/2)
    float a;
    int b;
    int c;
    int d;
    printf("Enter the decimal value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
    printf("The value of a*b-(c/d) is : %f",a*b-(c/d));
    return 0;
}


----------------------------------------------

10)12*7+45-(34-3)+3.4 -8.9 

Ans)
#include <stdio.h>

int main()
{
    // 12*7+45-(34-3)+3.4 -8.9
    int a;
    int b;
    int c;
    int d;
    int e;
    float f;
    float g;
    printf("Enter the value of a  ");
    scanf("%d",&a);
    printf("Enter the value of b  ");
    scanf("%d",&b);
    printf("Enter the value of c  ");
    scanf("%d",&c);
    printf("Enter the value of d  ");
    scanf("%d",&d);
    printf("Enter the value of e  ");
    scanf("%d",&e);
    printf("Enter the decimal value of f  ");
    scanf("%f",&f);
    printf("Enter the decimal value of g  ");
    scanf("%f",&g);
    printf("The value of a*b+c-(d-e)+f-g is : %f",a*b+c-(d-e)+f-g);
    return 0;
}


