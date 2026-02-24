#include <stdio.h>
#include <string.h> 
int main () {
    char menu[50];
    float harga;
    float totalSebelumDiskon, diskon = 0, totalAkhir;
    
    int beratUcok = 100;
    int beratButet = 50;
    
    float porsiUcok, porsiButet;
    
    printf("===== PROGRAM PEMESANAN Ucok & Butet =====\n\n");
    
    printf("Masukkan nama menu: ");
    fgets(menu, sizeof(menu), stdin);
    
    printf("Masukkan harga per porsi: ");
    scanf("%f", &harga);
    
    porsiUcok = (float)beratUcok / beratButet; 
    porsiButet = 1; 
    
    printf("\nPorsi Ucok  : %.0f porsi\n", porsiUcok);
    printf("Porsi Butet : %.0f porsi\n", porsiButet);
    
    totalSebelumDiskon = (porsiUcok + porsiButet) * harga;
    
    if (totalSebelumDiskon > 300000) {
        diskon = 0.15 * totalSebelumDiskon;
    }
    else if (totalSebelumDiskon > 200000) {
        diskon = 0.10 * totalSebelumDiskon;
    }
    else if (totalSebelumDiskon > 100000) {
        diskon = 0.05 * totalSebelumDiskon;
    }
    
    totalAkhir = totalSebelumDiskon - diskon;
    
    printf("\nTotal sebelum diskon : Rp %.2f", totalSebelumDiskon);
    printf("\nDiskon               : Rp %.2f", diskon);
    printf("\nTotal pembayaran     : Rp %.2f", totalAkhir);
    
    printf("\n\n===== TERIMA KASIH =====\n");
    
    return 0;
}
