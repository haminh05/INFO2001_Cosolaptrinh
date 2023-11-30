#include <stdio.h>
#include <string.h>

struct Student {
    char id[10];
    char name[30];
    char sex[4];
    char homeTown[30];
};
int i ,n;

// case 1: khoi tao danh sach
void initializeAList(struct Student list[], int  n) { 

    for ( i = 0; i <  n; i++) {
        printf("thong tin sinh vien thu %d\n", i + 1);
        getchar();
        printf("Ma sinh vien:"); 
        fgets(list[i].id, 10, stdin);
        printf("Ho va ten:");
        fgets(list[i].name, 30, stdin);
        printf("gioi tinh:");
        fgets(list[i].sex, 4, stdin);
        printf("Que quan:");
        fgets(list[i].homeTown, 30, stdin);
        printf("\n");
         
 

    }
     
}

// case 2: hien thi danh sach
void viewListOfStudent(struct Student list[], int n) {
    for ( i = 0; i < n; i++) {
        printf("Thong tin sinh vien thu %d\n", i + 1);
        getchar();
        printf("Ma sinh vien: %s", list[i].id);
        printf("Ho va ten: %s", list[i].name);
        printf("Gioi tinh: %s", list[i].sex);
        printf("Que quan: %s", list[i].homeTown);
        printf("\n");
    }
}

// case 3: sua thong tin
void editInformation(struct Student list[], int i) {
    printf("nhap thong tin moi cho sinh vien\n");
    printf("Ma sinh vien:");
    getchar();
    fgets(list[i].id, 10, stdin);
    printf("Ho va ten:");
    fgets(list[i].name, 30, stdin);
    printf("gioi tinh:");
    fgets(list[i].sex, 4, stdin);
    printf("Que quan:");
    fgets(list[i].homeTown, 30, stdin);
}

// case 4: sap xep thong tin
void sortInformation(struct Student list[], int n) {
	int j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (strcmp(list[i].name, list[j].name) > 0) {
                struct Student tempo = list[i];
                list[i] = list[j];
                list[j] = tempo;
            }
        }
    }
}

// case 5: tim kiem thong tin
int searchInformation(struct Student list[], char searchId[], int n) {
    for (i = 0; i < n; i++) {
        if (strcmp(list[i].id, searchId) == 0) {
            return i;
		}
    }
    return -1;
}

int main() {
    int choice ;
    char searchId[10];
    struct Student list[100];
    printf("nhap so thanh vien trong lop:");
    scanf("%d", &n);
    printf("\n");
    do {
    	printf("-------------------------------\n");
        printf("CHUONG TRINH QUAN LI SINH VIEN\n");
        printf("-------------------------------\n");
        printf("1. Khoi tao danh sach\n");
        printf("2. Xem danh sach sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Sap xep danh sach\n");
        printf("5. Tim kiem thong tin sinh vien\n");
        printf("0. Thoat chuong trinh\n");
        printf("-------------------------------\n");
        printf("Moi chon chuc nang:");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                initializeAList(list,  n);
                break;
            case 2:
                viewListOfStudent(list, n);
                break;
            case 3:
                printf("nhap ma sinh vien can sua:");
                getchar();
                fgets(searchId, 10, stdin);

                int foundIndex = searchInformation(list, searchId, n);
                if (foundIndex != -1) {
                    editInformation(list, foundIndex);
                } else {
                    printf("Khong tim thay ma:%s", searchId);
                }
                break;
            case 4:
                sortInformation(list, n);
                printf("Da sap xep lai danh sach.\n");
                break;
            case 5:
                printf("nhap ma sinh vien can tim:");
                getchar();
                fgets(searchId, 10, stdin);

                foundIndex = searchInformation(list, searchId, n);
                if (foundIndex != -1) {
                    printf("Ma sinh vien: %s",list[i].id);
                    printf("Ho va ten: %s",list[i].name);
                    printf("Gioi tinh: %s",list[i].sex);
                    printf("Que quan: %s",list[i].homeTown);
                    
                } else {
                    printf("Khong tim thay sinh vien ma:%s", searchId);
                }
                break;
            default:
                printf("Ket thuc chuong trinh\n");
        }

    } while (choice != 0);
    
    return 0;
}

