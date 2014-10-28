// Images

#include <stdio.h>
#include <math.h>

int main() {
	int height = 200;
	int width = 200;
	int col = 0;
	int i, j;
	
	printf("P3\n%d %d\n255\n", height, width);
	
	for(i = 0; i <= width; i++){
		for(j = 0; j <= height; j++){
			col = ((int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0))));
			printf("%d\n%d\n%d\n", col, col-55, col-200);
		}
	}
}