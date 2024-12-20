#include<stdio.h> 

typedef struct{
	char name[50];
	char brand[50];
	char color[20];
}Car; 
int main(){
	Car car1={"audiq5","audi","red"}; 
	strcpy(car1.name,"lambogini");
	strcpy(car1.color,"white");
	printf("ten xe la:%s \n", car1.name);
	printf("hang xe la:%s \n", car1.brand);
	printf("mau xe la:%s \n", car1.color);
	return 0; 
}
