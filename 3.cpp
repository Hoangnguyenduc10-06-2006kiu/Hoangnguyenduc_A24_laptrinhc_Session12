#include<stdio.h>
int ham(int a){
	int giaithua=1;
	for (int i=2;i<a+1;i++){
		giaithua*=i;
	}
	printf("giai thua cua %d la %d",a,giaithua);
	return giaithua; 
}
int main(){
	ham(5);
	return 0;
} 
