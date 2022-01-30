// Muhammad Daffa Daniswara
// 13220043

#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp;
    unsigned char head[5];
    unsigned char signature_pdf[5] = {0x25, 0x50, 0x44, 0x46, 0x2D}; // file signature pdf
    unsigned char signature_jpg[3] = {0xFF, 0xD8, 0xFF}; // file signature jpg
    int ret_pdf;
    int ret_jpg;

    fp = fopen("testpng.png","rb");  //file yang ingin dicek
    fread(head, sizeof(head), 1, fp);


    ret_pdf = memcmp(signature_pdf, head, 5); //mencocokan file signature antara file yang ingin dicek dengan file signature pdf
    ret_jpg = memcmp(signature_jpg, head, 3); //mencocokan file signature antara file yang ingin dicek dengan file signature jpg


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
