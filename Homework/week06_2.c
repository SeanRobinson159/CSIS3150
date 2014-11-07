// Create 10 images: 5 zooming out and 5 zooming in, changing the
// scale a factor of 4 each time.  Be sure to convert you ppm files to jpg or png.

#include <stdio.h>
#include <math.h>
#include <complex.h>

#define ncols 1000
#define nrows 1000

int iterate_pt(double complex c);

int Mand[ncols][nrows];

int main() {
	double crmin = -0.75;
	double crmax = -0.74;
	double cimin = -0.138;
	double cimax = -0.127;
    FILE *fp;
    fp = fopen("mand12.ppm","w+");
    printf("Creating mand2.ppm.....\n");
	
	int x, y;
	int color;
	double complex c;
	double complex imag = 0.0 + 1.0i;
	double dx = .3*(crmax - crmin)/ncols;   //The multiplicaiton before is the zoom!
	double dy = .3*(cimax - cimin)/nrows;

	for(y = 0; y < nrows; y++){
		for(x = 0; x < ncols; x++){
			c = (crmin + x*dx) + (cimin + y*dy)*imag;
			Mand[x][y] = iterate_pt(c) + 65;
		}
	}
	
	fprintf(fp, "P3\n%d %d\n255\n", ncols, nrows);
	
	for(y = 0; y < nrows; y++){
		for(x = 0; x < ncols; x++){
			color = Mand[x][y];
			fprintf(fp, "%d\n%d\n%d\n", color*4, color*3, color*2);
		}
	}
    printf("DONE!\n");
    fclose(fp);
}

int iterate_pt(double complex c) {
	double complex z = 0.0 + 0.0i;
	int iterations = 0;
	int k;
	for (k = 1; k <= (255-64); k++){
		z = z*z + c;
		if(sqrt(z*conj(z)) > 50){
			break;
		} else {
			++iterations;
		}
	}
	return iterations;	
}