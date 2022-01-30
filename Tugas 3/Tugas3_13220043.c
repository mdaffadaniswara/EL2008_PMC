// Muhammad Daffa Daniswara
// 13220043

#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp;
    unsigned char head_pdf[5];
    unsigned char head_jpg[3];
    unsigned char signature_pdf[5] = {0x25, 0x50, 0x44, 0x46, 0x2D};
    unsigned char signature_jpg[3] = {0xFF, 0xD8, 0xFF};
    int ret_pdf;
    int ret_jpg;

    fp = fopen("testpng.png","rb");
    fread(head_pdf, sizeof(head_pdf), 1, fp);


    ret_pdf = memcmp(signature_pdf, head_pdf, 5);
    ret_jpg = memcmp(signature_jpg, head_pdf, 3);


    if (ret_pdf==0)
    {
        printf("Format file adalah PDF");
    }
    else if(ret_jpg==0){
        printf("Format file adalah JPG");
    }
    else{
        printf("Format file bukanlah PDF atau JPG");
    }

   return(0);
}