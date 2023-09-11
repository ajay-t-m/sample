//compare 3 numbers

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the first num:");
scanf("%d",&a);
printf("Enter the second num:");
scanf("%d",&b);
printf("Enter the third num:");
scanf("%d",&c);
if (a>b){

 if(a>c){
printf("%d is largest number",a);
}else{
printf("%d is largest number",c);
}}else{
printf("%d is largest number",b);
}
return 0;
}

