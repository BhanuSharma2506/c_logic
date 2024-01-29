1)

*
**
***

ANS)->

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
------------------------------------------------------------------------------------
2)

***
**
*

ANS)->

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=3;j>=i;j--){
        printf("*");
    }
    printf("\n");
} 
  return 0;
}
--------------------------------------------------------
4)->

*
**
***
***
**
*
ANS)->

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=3;i++){
        for(int j=3;j>=i;j--){
        printf("*");
    }
    printf("\n");
} 
  return 0;
}
-----------------------------------------------------------------
5)

1                                                    
22
333                                                            
4444
55555

ANS->
#include <stdio.h>
int main() {
    for ( int i=1; i<=5; i++) {
        for ( int j=1; j<=i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
-------------------------------------------------------------------------------------
6)

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

 ANS)->
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}
----------------------------------------------------------------------------------
7)

1
1 0 
1 0 1
1 0 1 0
1 0 1 0 1 

ANS)->
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf(" %d", j%2);
        }
        printf("\n");
    }
    return 0;
}
----------------------------------------------------------------------------
8)
1
0 0 
1 1 1 
0 0 0 0
1 1 1 1 1

ANS)->

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf(" %d", i%2);
        }
        printf("\n");
    }
    return 0;
}

----------------------------------------------------------------------
9)

1
2 3 
4 5 6 
7 8 9 10 

ANS)->

#include<stdio.h>
int main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",count++);
        }
        printf("\n");
    }
    return 0;
}
----------------------------------------------------------------------
10)

2
4 6
8 10 12
14 16 18 20 

ANS)->

#include<stdio.h>
int main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",count++);
        }
        printf("\n");
    }
    return 0;
-----------------------------------------------------------------------------------------







