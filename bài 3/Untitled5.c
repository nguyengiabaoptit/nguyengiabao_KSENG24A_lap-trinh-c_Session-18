#include <stdio.h> 

struct Author{
	char name[50];
	char address[50];
	int age; 
}; 
struct Book{
	char id[50];
	char name[50];
	float price; 
	struct Author auth1;
};
int main(){
	struct Book book1;
	strcpy(book1.id,"B001");
	strcpy(book1.name,"nhan ma");
	book1.price=120000;
	strcpy(book1.auth1.name,"tac gia B");
	printf("ten quyen sach la:%s \n", book1.name), 
	printf("tac gia quyen sach la:%s\n,book1.auth1.name");
	return 0; 
}
