#include<stdio.h>
int main(){
	int a[]={5,1,8,3,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	printf("mang trc sap xep: ");
	for(int i =0;i<n;i++){
		printf("%d, ",a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	
	printf("\nmang sau sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	
	
	return 0;
}
