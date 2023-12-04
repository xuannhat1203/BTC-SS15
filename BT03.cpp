#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    char phone[50];
    char email[50];
};

struct student2 {
    char newName[50];
    int newAge;
    char newPhone[50];
    char newEmail[50];
};
struct big {
	struct student one;
	struct student2 two;
};

int main() {
    struct student s1[10];
    printf("Nhap ten: ");
    gets(s1[0].name);
    printf("nhap tuoi: ");
    scanf("%d",&s1[0].age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    gets(s1[0].phone);
    printf("Nhap email: ");
    gets(s1[0].email);
    //
    int n;
    printf("Nhap vi tri muon them: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Nhap ten: ");
    gets(s1[n].name);
    printf("nhap tuoi: ");
    scanf("%d",&s1[n].age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    gets(s1[n].phone);
    printf("Nhap email: ");
    gets(s1[n].email);
    //
    int m;
    printf("Nhap vi tri muon sua: ");
    scanf("%d",&m);
    fflush(stdin);
    printf("Nhap ten: ");
    gets(s1[m].name);
    printf("nhap tuoi: ");
    scanf("%d",&s1[m].age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    gets(s1[m].phone);
    printf("Nhap email: ");
    gets(s1[m].email);
    //
    int b;
    printf("nhap vi tri muon xoa: ");
    scanf("%d",&b);
    fflush(stdin);
    for (int i = b; i < 9; i++) {
        strcpy(s1[i].name, s1[i + 1].name);
        s1[i].age = s1[i + 1].age;
        strcpy(s1[i].phone, s1[i + 1].phone);
        strcpy(s1[i].email, s1[i + 1].email);
    }
    for(int i=0;i<3;i++){
    	printf("%s\n",s1[i].name);
    	printf("%d\n",s1[i].age);
    	printf("%s\n",s1[i].phone);
    	printf("%s\n",s1[i].email);
	}
  
    
       
}
