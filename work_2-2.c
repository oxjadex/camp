/*#include <stdio.h>
#include <math.h>	
typedef struct point {
	int x;
	int y;	
}PT;

int main() {
	PT* pt1=(PT*)malloc(sizeof(PT));
	PT* pt2=(PT*)malloc(sizeof(PT));	
	double dls ;
	scanf("%d %d", &pt1->x, &pt1->y);
	scanf("%d %d", &pt2->x, &pt2->y);	
	printf("(%d %d)\n", pt1->x, pt1->y);
	printf("(%d %d)\n", pt2->x, pt2->y);
	dls = sqrt(pow((pt1->x - pt2->x), 2.0)+ pow((pt1->y - pt2->y));

	printf("%.2f\n", dls);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h> // malloc 함수를 사용하기 위해 필요한 헤더 파일
#include <math.h>

typedef struct point {
    int x;
    int y;
} PT;

int main() {
    PT* pt1 = (PT*)malloc(sizeof(PT));
    PT* pt2 = (PT*)malloc(sizeof(PT));
    double dls;

    scanf("%d %d", &pt1->x, &pt1->y);
    scanf("%d %d", &pt2->x, &pt2->y);

    printf("(%d, %d)\n", pt1->x, pt1->y);
    printf("(%d, %d)\n", pt2->x, pt2->y);

    dls = sqrt(pow((pt1->x - pt2->x), 2.0) + pow((pt1->y - pt2->y), 2.0));
    printf(" %.2f\n", dls);

    free(pt1); // 동적 할당된 메모리를 해제해야 합니다.
    free(pt2);

    return 0;
}
