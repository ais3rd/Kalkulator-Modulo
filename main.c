#include <stdio.h>


int main() {
    while(1){
    int angka1, angka2;
    int hasil_bagi, hasil_modulo;

    scanf("%d %d",&angka1, &angka2);

    // Validasi pembagi tidak boleh nol
    if (angka2 == 0) {
        printf("Error: Pembagi tidak boleh nol.\n");
        return 1;
    }

    // Operasi
    hasil_bagi = angka1 / angka2;
    hasil_modulo = angka1 % angka2;

    // Output
    printf("%d R %d\n ", hasil_bagi, hasil_modulo);

    }
    return 0;
}
