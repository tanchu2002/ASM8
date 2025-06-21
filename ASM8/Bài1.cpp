/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int tongcacchuso(int n){
 if(n<0){
       n= -n;
   }
        int tong=0;
       for( ;n!=0; n=n/10){
           tong += n%10;
       } 
    return tong;
}
int main()
{
  int n;
   printf("nhập n: ");
   scanf("%d",&n);
   
  int tong = tongcacchuso(n);
  printf("tong cac chu so là: %d", tong);
}
