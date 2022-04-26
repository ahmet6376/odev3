#include <stdio.h>
#include <stdlib.h>
int w;
int n;a;b;i;x;
int arr[10^5];
int dizx[10^5];
   int c;
int main() {
     w=-1;
     printf("Dizi boyutununu giriniz (1=< n =< 10^5)\n",n);
        scanf("%d",&n);
     
     for(i = 0; i < n; i++){
        printf("\n %d. sayiyi giriniz(1=<  arr[i]  =< 10^5):",i+1);
        scanf("%d",&arr[i]);
		}
     
    for (b=-1; w<0; b++){
		c=b;
		w=b;
	   for(a=0; a<n; a++){
		  
		  if(w<arr[a]){
			w=w-(arr[a]-w);}
		   
	      else if(w>arr[a]){
		   w=w+(w-arr[a]);}
		 
	}}

   printf("\n Balangic enerjisi en az %d olmalidir.",c);


	return 0;
}
