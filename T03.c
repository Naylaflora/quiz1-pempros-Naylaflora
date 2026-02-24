#include <stdio.h>
#include <string.h>

#define MAX 100

struct Laundry {
    char nama[50];
    char noHP[15];
    char jenisLayanan[30];
    float jumlah;   // berat (kg) atau jumlah pakaian
};

int main() {
    struct Laundry data[MAX];
    int i = 0;
    int menu, pilihan;

    do {
        printf("\n=== SISTEM DATA PELANGGAN LAUNDRY DEL ===\n");
        printf("1. Tambah Data Pelanggan\n");
        printf("2. Tampilkan Semua Data\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);
        getchar(); // membersihkan enter

        switch(menu) {
            case 1:
                printf("\nMasukkan Nama Pelanggan: ");
                fgets(data[i].nama, sizeof(data[i].nama), stdin);
                data[i].nama[strcspn(data[i].nama, "\n")] = 0;

                printf("Masukkan No HP: ");
                fgets(data[i].noHP, sizeof(data[i].noHP), stdin);
                data[i].noHP[strcspn(data[i].noHP, "\n")] = 0;

                printf("\nPilih Jenis Layanan:\n");
                printf("1. Cuci Kiloan\n");
                printf("2. Dry Clean\n");
                printf("3. Setrika Saja\n");
                printf("Pilihan: ");
                scanf("%d", &pilihan);

                if(pilihan == 1) {
                    strcpy(data[i].jenisLayanan, "Cuci Kiloan");
                } else if(pilihan == 2) {
                    strcpy(data[i].jenisLayanan, "Dry Clean");
                } else if(pilihan == 3) {
                    strcpy(data[i].jenisLayanan, "Setrika Saja");
                } else {
                    printf("Pilihan tidak valid!\n");
                    break;
                }

                printf("Masukkan jumlah (kg / pakaian): ");
                scanf("%f", &data[i].jumlah);

                i++;
                printf("Data berhasil disimpan!\n");
                break;

            case 2:
                printf("\n=== DATA PELANGGAN LAUNDRY DEL ===\n");
                for(int j = 0; j < i; j++) {
                    printf("\nData ke-%d\n", j+1);
                    printf("Nama          : %s\n", data[j].nama);
                    printf("No HP         : %s\n", data[j].noHP);
                    printf("Jenis Layanan : %s\n", data[j].jenisLayanan);
                    printf("Jumlah        : %.2f\n", data[j].jumlah);
                }
                break;

            case 3:
                printf("Terima kasih telah menggunakan sistem Laundry Del.\n");
                break;

            default:
                printf("Menu tidak tersedia!\n");
        }

    } while(menu != 3);

    return 0;
}