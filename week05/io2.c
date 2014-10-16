// Formatted I/O

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float x;
	float y;
	float z;
}point;

point cube[8] = {
	{0.0, 0.0, 0.0},
	{1.0, 0.0, 0.0},
	{0.0, 1.0, 0.0},
	{0.0, 0.0, 0.0},
	{1.0, 0.0, 0.0},
	{0.0, 1.0, 0.0},
	{0.0, 0.0, 0.0},
	{1.0, 0.0, 0.0}
};

point data;

int main () {
	int i;
	FILE *fin;
	
	fin = fopen("geometry.txt", "r");
	
	while (!feof(fin)) {	//FileEndOfFile(pointer to file)
		fscanf(fin, "%f\t%f\t%f\n",
			&data.x,
			&data.y,
			&data.z);
			
			printf("%f\t%f\t%f\n", 
				data.x,
				data.y,
				data.z);
	}
	fclose(fin);
}








