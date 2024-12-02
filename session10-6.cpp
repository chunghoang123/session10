#include<stdio.h>
int main(){
	int a[]={8,4,1,3,7,3,3,3,};
	int n=sizeof(a)/sizeof(a[0]);
	int b;
	printf("mang: ");
	for(int i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	printf("\nmoi nhap 1 so nguyen bat ky: ");
	scanf("%d",&b);
	int viTri[n];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i] == b){
			viTri[dem]=i;
			dem++;
		}
	}
	if(dem>0){
		printf("ptu %d dc tim thay tai cac vi tri: ",b);
		for(int i=0;i<dem;i++){
			printf("%d ",viTri[i]);
			
		}
	}else{
		printf("ko ton tai");
	}
	return 0;
}
