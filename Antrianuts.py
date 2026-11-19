print("================================================")
print("        SISTEM ANTRIAN LAYANAN LOKET")
print("================================================")
print("1. Total Antrian (offline + online)")
print("2. Sisa Antrian")
print("3. Estimasi Waktu Tunggu")
print("4. Beban per Loket")
print("5. Menentukan Loket untuk Nomor Antrian")
print("------------------------------------------------")
pilihan = int(input("Pilih menu (1-5): "))

if pilihan == 1:
    antrian_offline = int(input("\nJumlah antrian offline : "))
    antrian_online = int(input("Jumlah antrian online  : "))

    total_antrian = antrian_offline + antrian_online
    print(f">> Total antrian: {total_antrian} orang")

elif pilihan == 2:
    total_antrian = int(input("\nTotal antrian             : "))
    sudah_dilayani = int(input("Jumlah yang sudah dilayani: "))

    sisa_antrian = total_antrian - sudah_dilayani

    if sisa_antrian < 0:
        print(">> Data tidak valid, yang dilayani melebihi total antrian.")
    else:
        print(f">> Sisa antrian: {sisa_antrian} orang")

elif pilihan == 3:
    sisa_antrian = int(input("\nSisa antrian saat ini      : "))
    jumlah_loket = int(input("Jumlah loket aktif         : "))

    if jumlah_loket <= 0:
        print(">> Jumlah loket harus lebih dari 0!")
    else:
        waktu_per_orang = int(input("Waktu layanan/orang (menit): "))

        estimasi_waktu = (sisa_antrian // jumlah_loket) * waktu_per_orang
        print(f">> Estimasi antrian habis dalam: {estimasi_waktu} menit")

elif pilihan == 4:
    total_antrian = int(input("\nTotal antrian     : "))
    jumlah_loket = int(input("Jumlah loket aktif: "))

    if jumlah_loket <= 0:
        print(">> Jumlah loket harus lebih dari 0!")
    else:
        beban_loket = total_antrian / jumlah_loket
        print(f">> Rata-rata beban tiap loket: {beban_loket:.2f} orang")

elif pilihan == 5:
    jumlah_loket = int(input("\nJumlah loket tersedia   : "))

    if jumlah_loket <= 0:
        print(">> Jumlah loket harus lebih dari 0!")
    else:
        nomor_antrian = int(input("Nomor antrian pelanggan : "))

        loket_tujuan = (nomor_antrian % jumlah_loket) + 1
        print(f">> Nomor {nomor_antrian} dilayani di LOKET {loket_tujuan}")

else:
    print("\nPilihan tidak valid. Masukkan angka 1-5.")