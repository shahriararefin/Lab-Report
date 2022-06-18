#include<stdio.h>
int main(){

int a,b;
printf("Enter two value for a and b: ");
scanf("%d %d",&a,&b);
if( a > b ) {
    printf("%d is max number", a);
}

else {
    printf("%d is max number",b);
}
return 0;

}