#include<stdio.h>
// khai bao ham cho nguoi dung nhap gia tri phan tu
// So 1
void addItem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("phan tu thu arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
}
// So 2
void showItems(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("phan tu thu arr[%d] co gia tri %d \n",i,arr[i]);
	}
}
// So 3
void moreItems(int arr[],int size){
		int position, value;
				printf("Nhap vi tri ban muon them phan tu: ");
				scanf("%d",&position);
				printf("Nhap vao gia tri moi: ");
				scanf("%d",&value);
				for(int i=size;i>position;i--){
					arr[i]=arr[i-1];
				}
				arr[position]=value;
				size++;
				printf("Mang sau khi them:");
	            for(int i= 0; i<size ;i++){
		        printf("%d ", arr[i]);
           	}
}
// So 4
void fixItem(int arr[], int size){
	int index;
	int valueItem;
	printf("Nhap vi tri muon sua:");
	scanf("%d",&index);
	printf("Nhap gia tri muon sua: ");
	scanf("%d", &valueItem);
	for(int i=0; i<size; i++){
		if(i==index){
			arr[i]=valueItem;
		}
	}
	printf("Mang sau khi sua:");
	for(int i= 0; i<size ;i++){
		printf("%d ", arr[i]);
	}
}
// So 5
void deleteItem(int arr[], int size){
	int index;
	printf("nhap vi tri phan tu muon xoa: ");
	scanf("%d", &index);
	if(index<0 || index>=size){
		printf("Vi tri khong hop le");
		}else{
			for(int i=index ; i< size-1; i++){
					arr[i]=arr[i+1];
				}
				size--;
				printf("Mang sau khi xoa:");
				for(int i=0; i<size; i++){
					printf("%d ", arr[i]);
				}
		}
}
// So 6.1
void reduce(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:");
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
		}
}
// So 6.2
void increase(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:");
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
		}
}
// So 7.1
void linearSearch(int arr[], int size, int x) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay tai %d.\n", x, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Phan tu %d khong ton tai.\n", x);
    }
}
// So 7.2
void binarySearch(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Phan tu %d duoc tim thay tai %d.\n", x, mid);
            return;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Phan tu %d khong ton tai.\n", x);
}
int main(){
	int arr[100];
	int size;
	int choose;
	do{
		// than while
		printf("1.Them so luong phan tu va nhap gia tri \n");
		printf("2.In ra cac phan tu dang quan ly \n");
		printf("3.Them mot phan tu vao vi tri chi dinh \n");
		printf("4.Sua mot phan tu o vi tri chi dinh \n");
		printf("5.Xoa mot phan tu o vi tri chi dinh \n");
		printf("6. \n");
		printf("7. \n");
		printf("8. \n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d",&choose);
		switch(choose){
			case 1: {
				// nhap so luong phan tu va gia tri
				printf("Moi ban nhap so luong phan tu: ");
				scanf("%d",&size);
				addItem(arr,size);
				break;
			}
			case 2: {
				// in ra cac phan tu
				showItems(arr,size);
				break;
			}
			case 3:{
				moreItems(arr,size);
				break;
			}
			case 4:{
				fixItem(arr,size);
				break;
			}
			case 5:{
				deleteItem(arr,size);
				break;
			}
			case 6:{
				int pick;
				printf("1. Giam dan\n");
				printf("2. Tang dan\n");
				printf("Chon phuong thuc sap xep: ");
				scanf("%d", &pick);
				if(pick==1){
					reduce(arr,size);
				}else{
					increase(arr,size);
				}
				break;
			}
			case 7:{
				int pick;
				int x;
				printf("1. Tim kiem tuyen tinh\n");
				printf("2. Tim kiem nhi phan\n");
				printf("Chon phuong thuc sap xep: ");
				scanf("%d", &pick);
				printf("Nhap so can tim kiem: ");
				scanf("%d",&x);
				if(pick==1){
					linearSearch(arr,size,x);
				}else{
					binarySearch(arr,size,x);
				}
				break;
			}
			case 8:{
				printf("Thoat");
				break;
			}
			default: {
					printf("Lua chon khong hop le");
				break;
			}
		}
	} while(choose!=8);
	return 0;
}
