#include<stdio.h>
int findMaxValue(int arr[],int size){

	int maxvalue=arr[0];
	for (int i=0;i<size;i++){
		if(arr[i]>maxvalue){
			maxvalue=arr[i];
			printf("gia tri lon nhat %d",maxvalue);
			
		}
	}
	return 0	;
}
int main(){
	int numbers1[]={4,6,5,9,1,3};
	int size1=sizeof(numbers1)/sizeof(int);
	findMaxValue(numbers1,size1);	
 return 0;
}	
	
