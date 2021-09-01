#include<stdio.h>
int pattern(int n,int x,int y){
    if (x!=n){

            if (y!=n)
            {
                printf("*");
                
                pattern(n,x,y+1);                
            }
            else{
                y=0;
                printf("\n");
                pattern(n,x+1,y);  
            }
    }             
}
int main()
{
    int n;
    int x=0;
    int y=0;
    scanf("%d",&n);
    pattern(n,x,y);
    return 0;
}
