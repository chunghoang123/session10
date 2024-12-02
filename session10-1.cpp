#include<stdio.h>
int main(){
	int n;
	int a[]={1,5,4,3,5,6};
	int size=sizeof(a)/sizeof(a[0]);
	printf(" moi nhap phan tu bat ki:");
	scanf("%d",&n);
	int tim=0;
	for(int i=0;i<size;i++){
		if(a[i]== n){
			printf("phan tu %d ton tai trong mang tai vi tri %d",n,i);
			tim =1;
				break;
		}
		
	}
	if(!tim){
		printf("ptu %d ko ton tai trong mang ",tim);
	}
	
	return 0;
} 
