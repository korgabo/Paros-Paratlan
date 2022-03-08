/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int is_even(int n){
    if(n%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int is_odd(int n){
    if(n == 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    printf("Adjon meg egy számot: ");
    int szam;
    scanf("%d",&szam);
    int dontes = is_odd(is_even(szam));
    if(dontes == 1){
        printf("Páratlan");
    }
    else{
        printf("Páros");
    }

    return 0;
}
