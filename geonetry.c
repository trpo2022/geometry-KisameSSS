#include <stdio.h>
#include <math.h>
const float PI = 3.14;

int main(){
	int choose;
	float l,a1,a2,a3,r,s;
	printf("if your object is a cirle please press 1\n\nif your object is a triangle press 2\n");
	scanf("%d", &choose);
	if(choose==1){
		printf("\nEnter the radius of the circle: ");
		scanf("%f", &r);
		s= PI*pow(r,2);
		l=2*PI*r;
		printf("\n S = %f\n P = %f", s, l);

	}
	if(choose==2){
		printf("\nEnter the sides of the triangle: ");
		scanf("%f%f%f",&a1,&a2,&a3);
		if((a1+a2 > a3)&&(a1+a3 > a2)&&(a2+a3 > a1)){
			l = a1+a2+a3;
			r= l / 2;
			s= sqrt(r*(r-a1)*(r-a2)*(r-a3));
			printf("\nP = %f\nS = %f", l, s);
		}
		else{
			printf("Error please enter correct sides!");
		}
	}
}
