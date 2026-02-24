#include <stdio.h>

int main() {
    int N;
    
    printf("Masukkan jumlah total data (N): ");
    scanf("%d", &N);

    int nilai[N];

    // Input deret nilai
    printf("Masukkan deret nilai:\n");
    for(int i = 0; i < N; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    int kode;
    printf("Masukkan kode kelompok (1 / 2 / 3): ");
    scanf("%d", &kode);

    int total = 0;

    // Menjumlahkan sesuai kelompok
    for(int i = 0; i < N; i++) {
        if ((i % 3) + 1 == kode) {
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %d adalah: %d\n", kode, total);

    return 0;
}