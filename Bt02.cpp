#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    char phone[50];
    char email[50];
};

int main() {
    struct student s1;
    strcpy(s1.name,"nguyen xuan nhat");
    printf("Nhap so tuoi: ");
    scanf("%d", &s1.age);
    strcpy(s1.phone,"0399482205");
    strcpy(s1.email,"nguyen xuan nhat");
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%s\n",s1.phone);
    printf("%s\n",s1.email);
    
}
