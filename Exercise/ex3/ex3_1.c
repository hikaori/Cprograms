#include<stdio.h>
#include<time.h>

int binsearch(int x, int v[], int n){

	int low , high , mid;
	
	low = 0;
 	high = n-1;
	mid = (high+low)/2;
	
	while(low <= high && x != v[mid]){
		if(x > v[mid]){
		 low = mid+1;
		}
		else{
		 high = mid-1;
		}
	 mid = (high+low)/2;
	}
	if(x == v[mid]){
	 return mid;
	}
	else{
	 return -1;
	}	
}

int main(){
	int array[] ={4,6,7,9};
	clock_t begin =clock();
	printf("%d\n",binsearch(9,array,4));
	clock_t end =clock();
	
	double time_spent =(double)(end-begin) / CLOCKS_PER_SEC;
	printf("Time is :%lf\n",time_spent);
	return 0;
}
