#include <stdio.h> 
//khai bao mot stuct book 
   struct Book{
   	char id[20];
   	char name[50];
   	char author[50];
   	char prith;
   }; 
int main(){
	struct Book book1;
	printf("moi ban nhap id:");
	fgets(book1.id,sizeof(book1.id), stdin);
	printf("moi ban nhap ten quyen sach:");
	fgets(book1.name,sizeof(book1.name),stdin);
	printf("moi ban nhap ten tac gia:");
	scanf("%f", &book1.prith); 
	printf("moi ban nhap gia:");
	fgets(book1.prith,sizeof(book1.prith),stdin);
	printf("id quyen sach la:%s\n", book1.id);
	printf("ten quyen sach la:%s\n", book1.name);
	printf("tac gia quyen sach la:%s\n", book1.author);
	printf("gia quyen sach la:%.2f\n", book1.prith);
}
