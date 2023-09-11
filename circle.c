//find the area and perimeter of the circle

#include <stdio.h>
int main(){
int r,area,peri;
printf("Enter the radius:");
scanf("%d",&r);
area=3.14*r*r;
peri=2*3.14*r;
printf("Area is %d",area);
printf("Perimeter is %d",peri);
return 0;
}
