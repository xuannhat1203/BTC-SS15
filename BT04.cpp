#include<stdio.h>
#include<string.h>

struct books {
    int maSach;
    char tenSach[100];
    char tacGia[100];
    int price;
    char theLoai[100];
};

int main() {

    int choice;
    int size = 0;
    struct books s1[100];
    int index;
    int masach;
    int find;
    
    do {
        printf("\n*********MENU********");
        printf("\n1. Nhap so luong va thong tin sach");
        printf("\n2. Hien thi thong tin sach");
        printf("\n3. Them vao vi tri");
        printf("\n4. Xoa sach theo ma sach");
        printf("\n5. Cap nhat thong tin theo ma sach");
        printf("\n6. Sap xep theo gia");
        printf("\n7. Tim kiem theo ten sach");
        printf("\n8. Tim kiem theo khoang gia");
        printf("\n9. Thoat");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Nhap ma sach: ");
                    scanf("%d", &s1[i].maSach);
                    printf("Nhap ten sach: ");
                    scanf(" %[^\n]s", s1[i].tenSach);
                    printf("Nhap ten tac gia: ");
                    scanf(" %[^\n]s", s1[i].tacGia);
                    printf("Nhap gia tien: ");
                    scanf("%d", &s1[i].price);
                    printf("Nhap the loai sach: ");
                    scanf(" %[^\n]s", s1[i].theLoai);
                }
                break;
            case 2:
                for (int i = 0; i < size; i++) {
                    printf("Ma sach %d: %d\n", i, s1[i].maSach);
                    printf("Ten sach %d: %s\n", i, s1[i].tenSach);
                    printf("Ten tac gia %d: %s\n", i, s1[i].tacGia);
                    printf("Gia tien %d: %d\n", i, s1[i].price);
                    printf("The loai sach %d: %s\n", i, s1[i].theLoai);
                    printf("\n");
                }
                break; 
            case 3:
                printf("Nhap vi tri muon them: ");
                scanf("%d", &index);
                if (index >= 0 && index <= size) {
                    for (int i = size; i > index; i--) {
                        s1[i] = s1[i - 1];
                    }
                    printf("Nhap ma sach: ");
                    scanf("%d", &s1[index].maSach);
                    printf("Nhap ten sach: ");
                    scanf(" %[^\n]s", s1[index].tenSach);
                    printf("Nhap ten tac gia: ");
                    scanf(" %[^\n]s", s1[index].tacGia);
                    printf("Nhap gia tien: ");
                    scanf("%d", &s1[index].price);
                    printf("Nhap the loai sach: ");
                    scanf(" %[^\n]s", s1[index].theLoai);
                    size++;
                } 
                break;
            case 4: 
            printf("Nhap vi tri muon xoa: ");
                scanf("%d", &index);
                if (index >= 0 && index <= size) {
                    for (int i = size; i > index; i--) {
                        s1[i] = s1[i + 1];
                    }
                    size--;
                } 
                break;
            case 5:
            	printf("Nhap ma sach: ");
            	scanf("%d",&masach);
            	for(int i=0;i<size;i++){
            		if (s1[i].maSach==masach){
            			printf("Nhap ma sach: ");
                    	scanf("%d", &s1[i].maSach);
                    	printf("Nhap ten sach: ");
                    	scanf(" %s", &s1[i].tenSach);
                    	printf("Nhap ten tac gia: ");
                   	 	scanf(" %s", &s1[i].tacGia);
                    	printf("Nhap gia tien: ");
                    	scanf("%d", &s1[i].price);
                    	printf("Nhap the loai sach: ");
					}
				}
				break;
			case 6:
				for (int i = 0; i < size; i++) {
    				for (int j = i + 1; j < size; j++) {
        				if (s1[i].price > s1[j].price) {
            			int tempMaSach = s1[i].maSach;
            			int tempPrice = s1[i].price;
            			char tempTacGia[100];
            			char tempTenSach[100];
            			char tempTheLoai[100];
            
            			strcpy(tempTacGia, s1[i].tacGia);
            			strcpy(tempTenSach, s1[i].tenSach);
            			strcpy(tempTheLoai, s1[i].theLoai);
            
            			s1[i].maSach = s1[j].maSach;
            			s1[i].price = s1[j].price;
            			strcpy(s1[i].tacGia, s1[j].tacGia);
            			strcpy(s1[i].tenSach, s1[j].tenSach);
            			strcpy(s1[i].theLoai, s1[j].theLoai);
            
            			s1[j].maSach = tempMaSach;
            			s1[j].price = tempPrice;
           				strcpy(s1[j].tacGia, tempTacGia);
            			strcpy(s1[j].tenSach, tempTenSach);
            			strcpy(s1[j].theLoai, tempTheLoai);
        				}
    				}
				}
				break;
				case 7:
					printf("\nnhap gia tien sach tim kiem: ");
					scanf("%d",&find);
					for(int i=0; i<size;i++){
						if(s1[i].price==find){
							printf("\nMa sach la %d",s1[i].maSach);
							printf("\nTen sach la %s",s1[i].tenSach);
							printf("\ntac gia viet sach la %s",s1[i].tacGia);
							printf("\nGia sach la %d",s1[i].price);
							printf("\nThe loai sach la: %d",s1[i].theLoai);
						}
					}
					break;
				case 8:
					printf("\nnhap gia tien sach tim kiem: ");
					scanf("%d",&find);
					for(int i=0; i<size;i++){
						if(s1[i].price<=find){
							printf("\nMa sach la %d",s1[i].maSach);
							printf("\nTen sach la %s",s1[i].tenSach);
							printf("\ntac gia viet sach la %s",s1[i].tacGia);
							printf("\nGia sach la %d",s1[i].price);
							printf("\nThe loai sach la: %d",s1[i].theLoai);
						}else if(s1[i].price<=find){
							printf("\nMa sach la %d",s1[i].maSach);
							printf("\nTen sach la %s",s1[i].tenSach);
							printf("\ntac gia viet sach la %s",s1[i].tacGia);
							printf("\nGia sach la %d",s1[i].price);
							printf("\nThe loai sach la: %d",s1[i].theLoai);
						}else{
							printf("khong co trong khoang gia");
						}
					}
        		break;
        		case 9:
					printf("Thoat chuong trinh");
					break;   
            	default:
                	printf("Lua chon khong hop le.\n");
                	break;
        
    } 
}while (choice != 9);
}

