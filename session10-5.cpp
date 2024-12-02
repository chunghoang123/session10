#include<stdio.h>
int main(){
	int a[]={5,1,8,3,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	printf("mang trc sap xep: ");
	for(int i =0;i<n;i++){
		printf("%d, ",a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nmang sau sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	int b;
	printf("\nmoi nhap so nguyen bat ky: ");
	scanf("%d",&b);
	int tim=0;
	for(int i=0;i<n;i++){
		if(a[i]== b){
			printf("phan tu %d ton tai trong mang tai vi tri %d",b,i);
			tim =1;
				break;
		}
		
	}
	if(!tim){
		printf("ptu %d ko ton tai trong mang ",tim);
	}
	
	
	return 0;
}
