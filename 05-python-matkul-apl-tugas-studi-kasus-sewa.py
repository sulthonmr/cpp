import os
import platform
import time
import datetime

#Dict TV
dictionaryTV = {
        "Samsung Smart TV 32 Inch" : 300000,
        "Samsung Smart TV 43 Inch" : 400000,
        "Samsung Smart TV 50 Inch" : 700000,
        "Samsung Smart TV 55 Inch" : 750000,
        "LG Smart TV 60 Inch" : 1000000,
        "Samsung Smart TV 65 Inch" : 1250000,
        "LG Smart TV 70 Inch" : 1400000,
        "Samsung Smart TV" : 1500000
}

#convert Dict TV ke tipe data List
listTV = list(dictionaryTV)

#simpan sementara TV yang dipesan
pesanTVProduk = []
pesanTVHarga = []
pesanTVWaktu = []
pesanTVEXP = []
pesanTVLamaSewa = []


#simpan sementara data transaksi TV
tvProduk = []
tvHarga = []
tvWaktuSewa = []
tvWaktuKembali = []
tvLamaSewa = []

#voucher tersedia
voucher = "DISKON10PERSEN"
statusVoucher = 1

#saldo
saldoEmoney = 3000000

#fungsi clear
def clear():
    if platform.system() == "Windows":
        os.system("cls")
    else:
        os.system("clear")

#fungsi judul
def programTitle(color):
    if color == 0:
        print('\033[37m')
    elif color == -1:
        print('\033[31m')
    else:
        print('\033[32m')
    print(" ad88888ba                                          888888888888  8b           d8")
    print("d8\"     \"8b                                              88       `8b         d8\'                             ,d")
    print("Y8,                                                      88        `8b       d8\'                              88")
    print("`Y8aaaaa,    88,dPYba,,adPYba,   ,adPPYYba,  8b,dPPYba,  88         `8b     d8\'    8b,dPPYba,    ,adPPYba,  MM88MMM")
    print("  `\"\"\"\"\"8b,  88P\'   \"88\"    \"8a  \"\"     `Y8  88P\'   \"Y8  88          `8b   d8\'     88P\'   `\"8a  a8P_____88    88")
    print("        `8b  88      88      88  ,adPPPPP88  88          88           `8b d8\'      88       88  8PP\"\"\"\"\"\"\"    88")
    print("Y8a     a8P  88      88      88  88,    ,88  88          88            `888\'  888  88       88  \"8b,   ,aa    88,")
    print(" \"Y88888P\"   88      88      88  `\"8bbdP\"Y8  88          88             `8\'   888  88       88   `\"Ybbd8\"'    \"Y888")

#fungsi tampilkan produk
def produkList():
    print("\033[33m LIST PRODUK \033[m".center(123,'|'))
    print("| ", "|".rjust(112,' '))
    for item in dictionaryTV:
        print(f"| {listTV.index(item) + 1}." ,item.ljust(30,' '), ":" ,f"{str(dictionaryTV[item])} /hari".rjust(15,' '),'|'.rjust(61,' '))
    print("| ", "|".rjust(112,' '))
    print("|"*115,'\n')
    print("| Pilih")

#fungsi tampilkan menu
def menu():
    print("\033[33m MENU \033[m".center(123,'|'))
    print("| ".ljust(114,' ')+"|")
    print("| 1. Pilih TV".ljust(114,' ')+"|")
    print(f"| 2. Keranjang [{len(pesanTVProduk)}]".ljust(114,' ')+"|")
    print("| 3. Daftar Transaksi".ljust(114,' ')+"|")
    print("| 4. Saldo E-money".ljust(114,' ')+"|")
    print("| 5. Keluar".ljust(114,' ')+"|")
    print("| ".ljust(114,' ')+"|")
    print("|"*115,'\n')
    print("| Pilih")


#main
pilihMenu = 0
condition = 0
while condition < 2:

    #header
    clear()
    waktu = time.asctime(time.localtime())
    print(f'\033[33;1m {waktu} \033[m'.center(125,'|'))
    programTitle(condition)
    print('\033[m')

    #login
    if condition <= 0:
        print("\033[33m LOGIN \033[m".center(123,'|'),'\n')
        print("| Username")
        userName = input("\033[36m| >>> \033[m")
        print("\n| Password")
        passWord = input("\033[36m| >>> \033[m")
        if userName == "admin" and passWord == "admin":
            condition = 1
        else:
            condition = -1

    #login success
    else:
        #menu
        if pilihMenu == 0:
            menu()
            while True:
                pilihMenu = input("\033[36m| >>> \033[m")
                if pilihMenu.isnumeric() and int(pilihMenu) in range(1,6):
                    pilihMenu = int(pilihMenu)
                    break
                else:
                    print("\033[31m| Input Salah\033[m")

        #pilih produk
        elif pilihMenu == 1:
            produkList()

            #input produk yang dipilih
            while True:
                pilihProduk = input("\033[36m| >>> \033[m")
                if pilihProduk.isnumeric() and int(pilihProduk) in range(1,9):
                    pilihProduk = int(pilihProduk)
                    tvProduk.append(listTV[pilihProduk-1])
                    tvHarga.append(dictionaryTV[listTV[pilihProduk-1]])
                    break
                else:
                    print("\033[31m| Input Salah\033[m")

            #input lama sewa
            print("\n| Masukan lama sewa (hari)")
            while True:
                lamaSewa = input("\033[36m| >>> \033[m")
                if lamaSewa.isnumeric():
                    tvHarga[-1] = tvHarga[-1] * int(lamaSewa)
                    break
                else:
                    print("\033[31m| Input Salah\033[m")

            #konfirmasi penggunaan voucher
            if tvHarga[-1] > 1000000:
                while True:
                    print("\n| Gunakan Kode Voucher [Y/T] ")
                    #jika menggunakan voucher
                    confirmVoucher = input("\033[36m| >>> \033[m")
                    if confirmVoucher.upper() == "Y":
                        print("\n| Masukan kode voucher")
                        while True:
                            codeVoucher = input("\033[36m| >>> \033[m")
                            jamSekarang = time.localtime()
                            if codeVoucher == voucher and jamSekarang.tm_hour >= 8 and jamSekarang.tm_hour < 9 and statusVoucher == 1:
                                print(f"\033[32m| Kode voucher \"{voucher}\" berhasil digunakan, Anda dapat diskon 10%.\033[m")
                                tvHarga[-1] = tvHarga[-1] - int(tvHarga[-1]/10)
                                statusVoucher = statusVoucher - 1
                            elif codeVoucher == voucher and jamSekarang.tm_hour < 8 or jamSekarang.tm_hour > 9 and statusVoucher == 1:
                                print(f"\033[31m| Kode voucher \"{voucher}\" hanya dapat digunakan pada jam 08:00 s/d 09:00.\033[m")
                            elif codeVoucher == voucher and statusVoucher == 0:
                                print(f"\033[31m| Kode voucher \"{voucher}\" tidak dapat digunakan, Anda sudah pernah menggunakannya.\033[m")
                            else:
                                print("\033[31m| Input Salah\033[m")
                            break
                        if codeVoucher == voucher:
                            break
                    #jika tidak menggunakan voucher
                    elif confirmVoucher.upper() == "T":
                        print("\033[33m| Tidak menggunakan voucher\033[m")
                        break
                    #jika input salah
                    else:
                        print("\033[31m| Input Salah\033[m")

            #konfirmasi pembayaran
            print("\n| Konfirmasi Pembayaran [Y/T] ")
            timeNow = datetime.datetime.now()
            timeEXP = timeNow + datetime.timedelta(hours=1)
            while True:
                confirmBayar = input("\033[36m| >>> \033[m")
                #jika pembayaran dilakukan
                if datetime.datetime.now() > timeEXP:
                    tvProduk.pop()
                    tvHarga.pop()
                    print("\033[31m| Transaksi gagal. Pemesanan hangus setelah 1 jam\033[m")
                    break
                if confirmBayar.upper() == "Y" and saldoEmoney >= tvHarga[-1]:
                    dateTransaction = datetime.date.today()
                    dateKembali = dateTransaction + datetime.timedelta(days=int(lamaSewa))
                    tvWaktuSewa.append(dateTransaction)
                    tvWaktuKembali.append(dateKembali)
                    tvLamaSewa.append(int(lamaSewa))
                    saldoEmoney = saldoEmoney - tvHarga[-1]
                    print("\033[32m| Transaksi Berhasil\033[m")
                    break

                #jika pembayaran tidak dilakukan
                elif confirmBayar.upper() == "T":
                    #input konfirmasi untuk dimasukan ke keranjang
                    print("\n| Masukkan ke keranjang [Y/T]")
                    while True:
                        confirmKeranjang = input("\033[36m| >>> \033[m")
                        #jika dimasukan keranjang
                        if confirmKeranjang.upper() == "Y":
                            tvProduk.pop()
                            tvHarga.pop()
                            pesanTVProduk.append(listTV[pilihProduk-1])
                            pesanTVHarga.append(dictionaryTV[listTV[pilihProduk-1]]*int(lamaSewa))
                            pesanTVLamaSewa.append(int(lamaSewa))
                            now = datetime.datetime.now()
                            exp = now + datetime.timedelta(hours=1)
                            pesanTVWaktu.append(now)
                            pesanTVEXP.append(exp)
                            print("\033[32m| Pesanan tersimpan.\033[m")
                            break
                        #jika tidak dimasukan keranjang
                        elif confirmKeranjang.upper() == "T":
                            tvProduk.pop()
                            tvHarga.pop()
                            print("\033[31m| Pesanan dibatalkan.\033[m")
                            break
                        #input salah
                        else:
                            print("\033[31m| Input Salah\033[m")
                    break
                else:
                    print("\033[31m| Input Salah\033[m")
            input("\n| Tekan enter untuk kembali ke menu")
            pilihMenu = 0

        #keranjang
        elif pilihMenu == 2:
            print("\033[33m KERANJANG \033[m".center(123,'|'))
            print("| ", "|".rjust(112,' '))

            #jika belum melakukan pemesanan
            if len(pesanTVProduk) == 0:
                print("| Keranjang kosong.", "|".rjust(95,' '))

            #jika telah melakukan pemesanan
            else:
                print("| Waktu Simpan".ljust(26,' '),"| Waktu EXP".ljust(26,' '),"| Nama Produk".ljust(33,' '),"| Harga / lama sewa".ljust(25,' '),"|")
                print("+"*115)
                for i in range(len(pesanTVProduk)):
                    print(f"| {str(pesanTVWaktu[i])[:19]}".ljust(26,' '), f"| {str(pesanTVEXP[i])[:19]}".ljust(26,' '), f"| {pesanTVProduk[i]}".ljust(33,' '), f"| {pesanTVHarga[i]} / {pesanTVLamaSewa[i]} hari".ljust(25,' '),"|")
            print("| ", "|".rjust(112,' '))
            print("|"*115,'\n')
            if len(pesanTVProduk) > 1:
                print(f"| Pilih [1-{len(pesanTVProduk)}]")
                while True:
                    pilihKeranjang = input("\033[36m| >>> \033[m")
                    if pilihKeranjang.isnumeric() and int(pilihKeranjang) in range(1,len(pesanTVProduk)+1):
                        pilihKeranjang = int(pilihKeranjang)
                        print("\n| Konfirmasi pembayaran [Y/T]")
                        while True:
                            bayarKeranjang = input("\033[36m| >>> \033[m")
                            if datetime.datetime.now() > pesanTVEXP[pilihKeranjang-1]:
                                pesanTVProduk.remove(pesanTVProduk[pilihKeranjang-1])
                                pesanTVHarga.remove(pesanTVHarga[pilihKeranjang-1])
                                pesanTVWaktu.remove(pesanTVWaktu[pilihKeranjang-1])
                                pesanTVEXP.remove(pesanTVEXP[pilihKeranjang-1])
                                print("\033[31m| Transaksi gagal. Pemesanan hangus setelah 1 jam\033[m\n")
                                break
                            if bayarKeranjang.upper() == "Y":
                                tvProduk.append((pesanTVProduk[pilihKeranjang-1]))
                                tvHarga.append((pesanTVHarga[pilihKeranjang-1]))
                                dateTransaction = datetime.date.today()
                                dateKembali = dateTransaction + datetime.timedelta(days=int(pesanTVLamaSewa[pilihKeranjang-1]))
                                tvWaktuSewa.append(dateTransaction)
                                tvWaktuKembali.append(dateKembali)
                                tvLamaSewa.append(int(pesanTVLamaSewa[pilihKeranjang-1]))
                                saldoEmoney = saldoEmoney - pesanTVHarga[pilihKeranjang-1]
                                pesanTVProduk.remove(pesanTVProduk[pilihKeranjang-1])
                                pesanTVHarga.remove(pesanTVHarga[pilihKeranjang-1])
                                pesanTVWaktu.remove(pesanTVWaktu[pilihKeranjang-1])
                                pesanTVEXP.remove(pesanTVEXP[pilihKeranjang-1])
                                print("\033[32m| Transaksi Berhasil\033[m\n")
                                break
                            elif bayarKeranjang.upper() == "T":
                                print("\033[31m| Transaksi Berhasil\033[m\n")
                                break
                            else:
                                print("\033[31m| Input Salah\033[m")
                        break
                    else:
                        print("\033[31m| Input Salah\033[m")
            elif len(pesanTVProduk) == 1:
                pilihKeranjang = 1
                print("\n| Konfirmasi pembayaran [Y/T]")
                while True:
                    bayarKeranjang = input("\033[36m| >>> \033[m")
                    if datetime.datetime.now() > pesanTVEXP[pilihKeranjang-1]:
                        pesanTVProduk.remove(pesanTVProduk[pilihKeranjang-1])
                        pesanTVHarga.remove(pesanTVHarga[pilihKeranjang-1])
                        pesanTVWaktu.remove(pesanTVWaktu[pilihKeranjang-1])
                        pesanTVEXP.remove(pesanTVEXP[pilihKeranjang-1])
                        print("\033[31m| Transaksi gagal. Pemesanan hangus setelah 1 jam\033[m\n")
                        break
                    if bayarKeranjang.upper() == "Y":
                        tvProduk.append((pesanTVProduk[pilihKeranjang-1]))
                        tvHarga.append((pesanTVHarga[pilihKeranjang-1]))
                        dateTransaction = datetime.date.today()
                        dateKembali = dateTransaction + datetime.timedelta(days=int(pesanTVLamaSewa[pilihKeranjang-1]))
                        tvWaktuSewa.append(dateTransaction)
                        tvWaktuKembali.append(dateKembali)
                        tvLamaSewa.append(int(pesanTVLamaSewa[pilihKeranjang-1]))
                        saldoEmoney = saldoEmoney - pesanTVHarga[pilihKeranjang-1]
                        pesanTVProduk.remove(pesanTVProduk[pilihKeranjang-1])
                        pesanTVHarga.remove(pesanTVHarga[pilihKeranjang-1])
                        pesanTVWaktu.remove(pesanTVWaktu[pilihKeranjang-1])
                        pesanTVEXP.remove(pesanTVEXP[pilihKeranjang-1])
                        print("\033[32m| Transaksi Berhasil\033[m\n")
                        break
                    elif bayarKeranjang.upper() == "T":
                        print("\033[31m| Transaksi Dibatalkan\033[m\n")
                        break
                    else:
                        print("\033[31m| Input Salah\033[m")
            input("| Tekan enter untuk kembali ke menu")
            pilihMenu = 0

        #saldo e-money
        elif pilihMenu == 3:
            print("\033[33m DAFTAR TRANSAKSI \033[m".center(123,'|'))
            print("| ", "|".rjust(112,' '))

            #jika belum ada transaksi
            if len(tvProduk) == 0:
                print("| Belum ada transaksi.", "|".rjust(92,' '))

            #jika telah melakukan transaksi
            else:
                print("| Tanggal Sewa".ljust(26,' '),"| Tanggal Kembali".ljust(26,' '),"| Nama Produk".ljust(33,' '),"| Harga / lama sewa".ljust(25,' '),"|")
                print("+"*115)
                for i in range(len(tvProduk)):
                    print(f"| {tvWaktuSewa[i]}".ljust(26,' '), f"| {tvWaktuKembali[i]}".ljust(26,' '), f"| {tvProduk[i]}".ljust(33,' '), f"| {tvHarga[i]} / {tvLamaSewa[i]} hari".ljust(25,' '),"|")
            print("| ", "|".rjust(112,' '))
            print("|"*115,'\n')
            input("| Tekan enter untuk kembali ke menu")
            pilihMenu = 0
        elif pilihMenu == 4:
            print("\033[33m SALDO E-MONEY \033[m".center(123,'|'))
            print("| ", "|".rjust(112,' '))
            print(f"| Saldo Anda : Rp.{saldoEmoney}", "|".rjust(89,' '))
            print("| ", "|".rjust(112,' '))
            print("|"*115,'\n')
            input("| Tekan enter untuk kembali ke menu")
            pilihMenu = 0
        elif pilihMenu == 5:
            print("\033[31m TERIMA KASIH ATAS KUNJUNGANNYA \033[m".center(123,'|'),'\n')
            break





