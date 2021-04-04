#include<stdio.h>
int factorial(int a);

int main(){
    int b;
    scanf("%d" , &b);
    printf("The value of factorial %d is %d", b, factorial(b));
    return 0;
}

int factorial(int a){
    int h , n;
    if (a==0||a==1)
    {
        n = 1;
        return n ;
    }
    else
    {
        h = a*factorial(a-1);
        return h;
    }
    

}
