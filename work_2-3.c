 #include <stdio.h>
  char star[20];
  void f(int n) {
  	
     if ( n==0  ) return; // 종료조건
	 f(n-1);
     star[n] = '*';
     printf("%s\n", star+1);
}
 
int main() {
    int n;
    scanf("%d", &n);
    f(n);
 }
