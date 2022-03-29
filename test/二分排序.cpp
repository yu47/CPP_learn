#include<iostream>
using namespace std;

 
int main(){
    int a[]={3,9,10,27,38,43,82};
	int n = sizeof(a)/sizeof(a[0]);
	int i, j, temp,low,high,m;
     for (i = 1; i < n; ++i)
     {
    	temp = a[i];
	   	low=0;
	  	high=i-1;
	  	while(low<=high){
			 m=(low + high)/2;
			 if(temp<a[m]){
				     high = m-1;
			 }else{
				     low = m+1;
			 }
	   }
	   for(j=i-1;j>high;j--){
			 a[j+1]=a[j];
	   }
	   a[high+1]=temp;
     }
     
     for (i = 0; i < n; ++i){
         cout<<a[i]<<" ";
     }
    return 0;
 
} 
 
