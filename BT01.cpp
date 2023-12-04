#include<stdio.h>
#include<string.h>
struct studen{
	char name[50];
	int age;
	char number[50];
	char email[50];
};
int main(){
	struct studen s1;
	strcpy(s1.name,"nguyen xuan nhat");
	s1.age = 18;
	strcpy(s1.number,"0399482205");
	strcpy(s1.email,"xuannhatvn211@gmail.com");
	printf("Ho va ten cua sinh vien: %s\n",s1.name);
	printf("Tuoi cua sinh vien: %d\n",s1.age);
	printf("So dien thoai cua sinh vien: %s\n",s1.number);
	printf("Email cua sinh vien: %s\n",s1.email);
}
