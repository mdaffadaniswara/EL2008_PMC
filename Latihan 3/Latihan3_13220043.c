// 13220043
// Muhammad Daffa Daniswara

#include <stdio.h>

struct mahasiswa {
    char nama[80];
    int nim;
    float absen;
};

int main(){
int i=0;


struct mahasiswa mh[3] = {{"Budi", 13220100, 0.79}, {"Alex", 13220101, 0.81}, {"Dedi", 13220100, 0.61}};


while (i != 3){
    if (mh[i].absen < 0.80){
        printf("Mahasiswa %s dengan NIM %d memiliki kehadiran di bawah 80 persen: %0.2f. \n", mh[i].nama, mh[i].nim, mh[i].absen);
        i += 1;
        }
    else {
        i += 1;
        }
    }

return 0;
}

