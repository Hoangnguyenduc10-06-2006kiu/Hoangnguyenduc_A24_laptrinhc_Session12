#include<stdio.h>
void list(int arr[], int size){
	int i;
	 printf("ca gia tri co trong mang la:",arr[i]);
	 for (i=0;i<size;i++){
	 	printf("%d",arr[i]);
	 	 }
}
int main(){
	int arr[]={1,2,3,4,7,8,9};
	int size=sizeof(arr)/sizeof(int);
	list(arr,size);
	return 0;
} 
