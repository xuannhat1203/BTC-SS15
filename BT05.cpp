#include<stdio.h>
#include<string.h>
struct books{
	int maSach;
	char tenSach[100];
	char tacGia[100];
	int price;
	char theLoai[100];
};
struct book{
	int maSach2;
	char tenSach2[100];
	char tacGia2[100];
	int price2;
	char theLoai2[100];
};

int main(){
	
	int choice;
	int size;
	struct books s1[100];
	struct book s2[100];
	int j=0;
	int index;
	do
	{
	printf("\n*********MENU********");
	printf("\n1. Nhap so luong va thong tin sach");
	printf("\n2. Hien thi thong tin sach");
	printf("\n3. Them vao vi tri");
	printf("\n4. Xoa sach theo ma sach");
	printf("\n5. cap nhat thong tin theo ma sach");
	printf("\n6. sap xep theo gia");
	printf("\n7. tim kiem theo ten sach");
	printf("\n8. tim kiem theo khoang gia");
	printf("\n9. thoat");
	printf("\nnhap lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		printf("nhap so luong sach: ");
		scanf("%d",&size);
		fflush(stdin);
		for (int i=0;i<size;i++){
			printf("Nhap ma sach: ");
			scanf("%d",&s1[i].maSach);
			fflush(stdin);
			printf("Nhap ten sach: ");
			gets(s1[i].tenSach);
			printf("Nhap ten tac gia: ");
			gets(s1[i].tacGia);
			printf("Nhap gia tien: ");
			scanf("%d",&s1[i].price);
			fflush(stdin);
			printf("Nhap the loai sach: ");
			gets(s1[i].theLoai);
		}
		printf("n");
		
		printf("\n");
		printf("Nhap vi tri muon them: ");
		scanf("%d",&index);
		for(int i=0;i<size;i++){
			if(i==index){
				strcpy(s2[j].maSach2,s1[i].maSach);
				strcpy(s2[j].tenSach2,s1[i].tenSach);
				strcpy(s2[j].tacGia2,s1[i].tacGia);
				strcpy(s2[j].price2,s1[i].price);
				strcpy(s2[j].theLoai2,s1[i].theLoai);
				size++;
				printf("Nhap ma sach: ");
				scanf("%d",&s1[index].maSach);
				fflush(stdin);
				printf("Nhap ten sach: ");
				gets(s1[index].tenSach);
				printf("Nhap ten tac gia: ");
				gets(s1[index].tacGia);
				printf("Nhap gia tien: ");
				scanf("%d",&s1[index].price);
				fflush(stdin);
				printf("Nhap the loai sach: ");
				gets(s1[index].theLoai);
				strcpy(s1[i+1].maSach,s2[j].maSach2);
				strcpy(s1[i+1].tenSach,s2[j].tenSach2);
				strcpy(s1[i+1].tacGia,s2[j].tacGia2);
				strcpy(s1[i+1].price,s2[j].price2);
				strcpy(s1[i+1].theLoai,s2[j].theLoai2);
			}
			
			
		}
		
		for(int i=0; i<=size; i++){
			printf("ma sach %d la %d\n",i,s1[i].maSach);
			printf("ten sach %d la %s\n",i,s1[i].tenSach);
			printf("ten tac gia la %s\n",s1[i].tacGia);
			printf("gia sach la %d\n",s1[i].price);
			printf("the loai sach la %s\n",s1[i].theLoai);
			printf("\n");
		}
		
	}	
	}while(1==1);
}
