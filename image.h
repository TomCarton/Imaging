// image.h
//
// written by Thomas CARTON
//

#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "../core/core.h"


typedef struct
{
    unsigned int width;
    unsigned int height;

    unsigned char *data;
} Image;


// resize
unsigned char *ImageDownsize(unsigned char *image, unsigned int width, unsigned int height);

// image file formats
Error ImageLoadDegas(const char *filename, Image **image);

Error ImageSaveTGA(const char *filename, Image *image);
Error ImageSavePNG(const char *filename, Image *image);

//void ImageSavePNG(char *filename, unsigned char *image, unsigned int width, unsigned int height);
void ImageSavePPM(char *filename, unsigned char *image, unsigned int width, unsigned int height);
//void ImageSaveTGA(char *filename, unsigned char *image, unsigned int width, unsigned int height);

#endif // __IMAGE_H__
