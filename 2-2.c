#include <stdio.h>
#include <stdlib.h>
int maxh(int* num, int n) {
	int i ;
	int maxn = *(num+0);
	//for문을 이용하여 최대값 검색 
	for (i=0; i<n; i++) {
		if (maxn < *(num+i))
			maxn = *(num+i); 
	}
	return maxn;
}
int main(){
  int n ;
  int* num;
  int i ;
	scanf("%d", &n) ;
	
	num =(int*)malloc(sizeof(int)*n); //메모리 동적할당 
	
	// n개의 데이터 입력 저장
	for (i=0; i<n; i++) {
		//scanf("%d", &num[i]);
		scanf("%d", num+i);
	}
	printf("%d\n", maxh(num, n)) ;
	
	free(num);
  return 0; 
}