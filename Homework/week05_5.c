// Add code to the testppm program that automatically opens 
// your image in gimp after it is created. (HINT: Don’t try to put 
//the whole path in a system command. Try creating a BATCH file and executing it)

#include <stdio.h>
#include <math.h>

int main() {
	int height = 200;
	int width = 200;
	int col = 0;
	int i, j;
	FILE *fp;
	fp=fopen("test.ppm", "w+"); //w+ for overwriting the same file
	
	fprintf(fp, "P3\n%d %d\n255\n", height, width);
	
	for(i = 0; i <= width; i++){
		for(j = 0; j <= height; j++){
			col = ((int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0))));
			fprintf(fp, "%d\n%d\n%d\n", col*2, col, col);
		}
	}
	fclose(fp);
	system("gimp.bat");
}