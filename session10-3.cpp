#include<stdio.h>
int main(){
	int a[]={5,1,8,3,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	printf("mang trc sap xep: ");
	for(int i =0;i<n;i++){
		printf("%d, ",a[i]);
	}
	int key;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		int j=i-1; 
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=key;
	}
	printf("\nmang sau sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	
	
	return 0;
}
