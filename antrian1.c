#include <stdio.h>

int main() {
    int antrianOffline, antrianOnline, totalAntrian;
    int sudahDilayani, sisaAntrian;
    int jumlahLoket, waktuPerOrang, estimasiWaktu;
    int bebanLoket;
    int nomorAntrian, loketTujuan;
    int pilihan;

    printf("================================================\n");
    printf("        SISTEM ANTRIAN LAYANAN LOKET\n");
    printf("================================================\n");
    printf("1. Total Antrian (offline + online)\n");
    printf("2. Sisa Antrian\n");
    printf("3. Estimasi Waktu Tunggu\n");
    printf("4. Beban per Loket\n");
    printf("5. Menentukan Loket untuk Nomor Antrian\n");
    printf("------------------------------------------------\n");
    printf("Pilih menu (1-5): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("\nJumlah antrian offline : ");
        scanf("%d", &antrianOffline);
        printf("Jumlah antrian online  : ");
        scanf("%d", &antrianOnline);

        totalAntrian = antrianOffline + antrianOnline;
        printf(">> Total antrian: %d orang\n", totalAntrian);

    } else if (pilihan == 2) {
        printf("\nTotal antrian             : ");
        scanf("%d", &totalAntrian);
        printf("Jumlah yang sudah dilayani: ");
        scanf("%d", &sudahDilayani);

        sisaAntrian = totalAntrian - sudahDilayani;

        if (sisaAntrian < 0) {
            printf(">> Data tidak valid, yang dilayani melebihi total antrian.\n");
        } else {
            printf(">> Sisa antrian: %d orang\n", sisaAntrian);
        }

    } else if (pilihan == 3) {
        printf("\nSisa antrian saat ini      : ");
        scanf("%d", &sisaAntrian);
        printf("Jumlah loket aktif         : ");
        scanf("%d", &jumlahLoket);

        if (jumlahLoket <= 0) {
            printf(">> Jumlah loket harus lebih dari 0!\n");
        } else {
            printf("Waktu layanan/orang (menit): ");
            scanf("%d", &waktuPerOrang);

            estimasiWaktu = (sisaAntrian / jumlahLoket) * waktuPerOrang;
            printf(">> Estimasi antrian habis dalam: %d menit\n", estimasiWaktu);
        }

    } else if (pilihan == 4) {
        printf("\nTotal antrian     : ");
        scanf("%d", &totalAntrian);
        printf("Jumlah loket aktif: ");
        scanf("%d", &jumlahLoket);

        if (jumlahLoket <= 0) {
            printf(">> Jumlah loket harus lebih dari 0!\n");
        } else {
            bebanLoket = (int) totalAntrian / jumlahLoket;
            printf(">> Rata-rata beban tiap loket: %.2f orang\n", bebanLoket);
        }

    } else if (pilihan == 5) {
        printf("\nJumlah loket tersedia   : ");
        scanf("%d", &jumlahLoket);

        if (jumlahLoket <= 0) {
            printf(">> Jumlah loket harus lebih dari 0!\n");
        } else {
            printf("Nomor antrian pelanggan : ");
            scanf("%d", &nomorAntrian);

            loketTujuan = (nomorAntrian % jumlahLoket) + 1;
            printf(">> Nomor %d dilayani di LOKET %d\n", nomorAntrian, loketTujuan);
        }

    } else {
        printf("\nPilihan tidak valid. Masukkan angka 1-5.\n");
    }

    return 0;
}