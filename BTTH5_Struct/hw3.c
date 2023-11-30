#include <stdio.h>
#include <string.h>


struct Employee{
	
	char id[12];
	char name[30];
	char position[30];
	int salary;
		
};
int i, n;

//case1: khoi tao danh sach nhan vien
void initializeAList(struct Employee list[], int n){
	
	for(i=0;i<n;i++){
	
	printf("Nhap thong tin nhan vien thu %d\n",i+1);
	getchar();
	printf("Ma nhan vien: ");
	fgets(list[i].id,12,stdin);
	printf("Ho va ten: ");
	fgets(list[i].name,30,stdin);
	printf("Chuc vu:");
	fgets(list[i].position,30,stdin);
	printf("Muc luong:");
	scanf("%d",&list[i].salary);		
	printf("\n");
	}	
	
}

//case 2: hien thi danh sach
void viewList(struct Employee list[], int n){
	for(i=0;i<n;i++){
		printf("\n");
		printf("Thong tin nhan vien thu %d\n",i+1);
		getchar();
		printf("Ma nhan vien: %s",list[i].id);
		printf("Ho va ten: %s",list[i].name);
		printf("Chuc vu: %s",list[i].position);
		printf("Tien luong: %d vnd",list[i].salary);
		printf("\n");
		
	}
	
}
//case 3: sua thong tin
void editInformation(struct Employee list[], int i){
	
	for(i=0;i<n;i++){
		printf("Nhap thong tin moi cua nhan vien\n");
		getchar();
		printf("Ma nhan vien:");
		fgets(list[i].id,12,stdin);
    	printf("Ho va ten: ");
    	fgets(list[i].name,30,stdin);
    	printf("Chuc vu:");
    	fgets(list[i].position,30,stdin);
    	printf("Muc luong:");
    	scanf("%d",&list[i].salary);
			
	}
}
//case 4
void sortInformation(struct Employee list[], int n) {
	int j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (strcmp(list[i].name, list[j].name) > 0) {
                struct Employee tempo = list[i];
                list[i] = list[j];
                list[j] = tempo;
            }
        }
    }
}

//case 5: tim kiem thong tin
int searchInformation(struct Employee list[], char searchId[], int n) {
    for (i = 0; i < n; i++) {
        if (strcmp(list[i].id, searchId) == 0) {
            return i;
		}
    }
    return -1;
}

//case 6: them nhan vien
void addEmployee(struct Employee list[], int n){
	if(n<100){
		printf("Nhap thong tin nhan vien moi\n");
		getchar();
		printf("Ma nhan vien:");
		fgets(list[i].id,12,stdin);
		printf("Ho va ten: ");
    	fgets(list[i].name,30,stdin);
	    printf("Chuc vu:");
    	fgets(list[i].position,30,stdin);
    	printf("Muc luong:");
	    scanf("%d",&list[i].salary);	
    	printf("\n");
		
	}else 
	printf("Danh sach day, khong the them nhan vien");
	
}

//case 7: xoa nhan vien
void deleteEmployee(struct Employee list[], char searchId[], int n){
	printf("Nhap ma nhan vien can xoa:");
	getchar();
	fgets(searchId,12,stdin);
	int j;
	
	for (i=0; i<n;i++){
		if (strcmp(list[i].id,searchId)==0){
			for (j=i;j<n;j++){
				list[j]= list[j+1];
			}
			printf("Da xoa nhan vien ma: %s \n",searchId);
			
		}else 	{		    
			printf("khong tim thay nhan vien ma: %s",searchId);
		}
	}
}




int main(){
	int choice;
	char searchId[12];
	struct Employee list[100];
	printf("Nhap so thanh vien de khoi tao danh sach:");
	scanf("%d",&n);
 
    do {
    	printf("-------------------------------\n");
        printf("CHUONG TRINH QUAN LI NHAN VIEN\n");
        printf("-------------------------------\n");
        printf("1. Khoi tao danh sach\n");
        printf("2. Xem danh sach nhan vien\n");
        printf("3. Sua thong tin nhan vien\n");
        printf("4. Sap xep danh sach\n");
        printf("5. Tim kiem thong tin nhan vien\n");
        printf("6. Them Nhan vien\n");
        printf("7. Xoa nhan vien\n");
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
                viewList(list, n);
                break;
            case 3:
                printf("Nhap ma nhan vien can sua:");
                getchar();
                fgets(searchId, 12, stdin);

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
                printf("nhap ma nhan vien can tim:");
                getchar();
                fgets(searchId, 10, stdin);

                foundIndex = searchInformation(list, searchId, n);
                if (foundIndex != -1) {
                    printf("Ma nhan vien: %s",list[i].id);
                    printf("Ho va ten: %s",list[i].name);
                    printf("Chuc vu: %s",list[i].position);
                    printf("Muc luong: %s",list[i].salary);
                    
                } else {
                    printf("Khong tim thay nhan vien ma:%s", searchId);
                }
                break;
            case 6:
            	addEmployee(list,n);
            	n++;
            	break;
            case 7:
            	deleteEmployee(list, searchId,n);
            	n--;
            	break;
            default:
                printf("Ket thuc chuong trinh\n");
        }
	
 } while (choice !=0);
 
 return 0;
}
