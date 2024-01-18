Q)1->
1----10)NUMBER

#include<stdio.h>
int main(){
    for(int i=1; i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------------
Q)2->
10-------1)NUMBER

#include<stdio.h>
int main(){
    for(int i=10;i>=1;i--){
        printf("%d\n",i);
    }
}
--------------------------------------------------------------------------
Q)3->

50-------100)NUMBER

#include<stdio.h>
int main(){
    for(int i=50;i<=100;i++){
        printf("%d\n",i);
    }
    return 0;
}
-----------------------------------------------------------
Q)4->

100-------50)NUMBER

#include<stdio.h>
int main(){
    for(int i=100;i>=50;i--){
        printf("%d\n",i);
    }
    return 0;
}
---------------------------------
Q)5->

89-------67)NUMBER

#include<stdio.h>
int main(){
    for(int i=89;i>=67;i--){
        printf("%d\n",i);
    }
    return 0;
}
------------------------------------------------------
Q)6->

67-------89)NUMBER

#include<stdio.h>
int main(){
    for(int i=67;i<=89;i++){
        printf("%d\n",i);
    }
    return 0;
}
--------------------------------------------------------
Q7)->

1--->10 even number for loop 

#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------
Q8)->

10---->1 even number for loop

#include<stdio.h>
int main(){
    for(int i=10;i>=1;i--){
        if(i%2==0){
            printf("%d",i);
        }
    }
    return 0;
}
-----------------------------------------------------------------------
Q9)

1--->100 even number for loop 

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------
Q10)->

100--->1 even number for loop 

#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------

Q11)->

67--->89 even number for loop 

#include<stdio.h>
int main(){
    for(int i=67;i<=89;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------
Q12)->

239--->12 even number for loop 

#include<stdio.h>
int main(){
    for(int i=239;i<=12;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
----------------------------------------------------------
Q13)->

1---->10 odd number for loop

#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
------------------------------------------------------
Q14)->

10---->1 odd number for loop

#include<stdio.h>
int main(){
    for(int i=10;i>=1;i--){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
------------------------------------------------------------
Q15)->

1---->100 odd number for loop

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
-----------------------------------------------------------
Q16)->

10o---->1 odd number for loop

#include<stdio.h>
int main(){
    for(int i=100;i>=1;i--){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
------------------------------------------------------------
Q17)->

23---->78 odd number for loop

#include<stdio.h>
int main(){
    for(int i=23;i<=78;i++){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
-----------------------------------------------------------

Q18)->

78---->19 odd number for loop

#include<stdio.h>
int main(){
    for(int i=78;i>=19;i--){
        if(i%2!=0){
            printf("%d",i);
        }
    }
    return 0;
}
-----------------------------------------------------------
Q19)->

2 table print for loop 

#include<stdio.h>
int main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
            printf("%d\n",i*n);
        }
    return 0;
}
-----------------------------------------------------
Q20)->

w 
	1 =>1-->10 value print 
	2 =>100-->1 even number 
	3 =>34--->89 even number 
	4 =>89--->12 even number 

f
	1 =>1-->10 value print 
	2 =>100-->1 odd number 
	3 =>34--->89 odd number 
	4 =>89--->12 odd number


s 	
	sum 1-->10 number for loop 

ANS->#include<stdio.h>
int main(){
    char w;
    printf("enter the charater");
    scanf("%c",&w);
    if(w=='w'){
        int num;
        printf("enter the value");
        scanf("%d",&num);
        if(num==1){
            int i=1;
            while(i<=100){
                printf("%d",i);
                i++;
            }
        }
    else if( num==2 ){
            int i=100;
            while(i>=1){
                printf(" %d ",i);
                i--;
            }
    }
    else if(num==3){
        int i=34;
            while(i<=89){
                if(i%2==0){
                printf("%d",i);
                }
                i++;
       }
    }
    else if(num==4){
        int i=89;
            while(i>=12){
                if(i%2==0){
                printf("%d",i);
                }
                i--;
            }
       }
    }
else if(w=='f'){
          int num;
           printf("enter the value");
           scanf("%d",&num);
             if(num==1){
         for(int i=1; i<=10;i++){
           printf("%d\n",i);
        }
    }
else if(num==2)
for(int i=100;i>=1;i--){
        if(i%2!=0){
        printf("%d\n",i);
    }
}
else if(num==3)
for(int i=34;i<=89;i++){
        if(i%2!=0){
        printf("%d\n",i);
}
}else if(num==4)
for(int i=89;i>=12;i--){
        if(i%2!=0){
        printf("%d\n",i);
    }
   }
}
else if(w=='s'){
            int a=1;
            int sum=0;
            while(a<=10){
                sum=sum+a;
                a++;
            }
            printf("%d",sum);
}
 return 0;
}
-------------------------------------------------------------




