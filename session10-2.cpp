#include<stdio.h>
int main(){
	int a[]={6,2,5,3,4,1};
	int n=sizeof(a)/sizeof(a[0]);
	printf("mang chu xep: ");
	for(int i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
	printf("\nmang sau khi xep: ");
	for(int i=0;i<n;i++){
		printf("%d, ", a[i]);
	}
	
	
	return 0;
}
