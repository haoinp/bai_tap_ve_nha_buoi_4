#include <stdio.h>

int main() {

    int buoc = 1;
    int so_lan_nhap_sai = 0;
    int pass_dung = 1234;
    int so_tien_tk = 100000000;
    int so_tien_rut = 0;
    int pass;
    char tiep_tuc;

    while (buoc != 5) {
        switch (buoc) {
            case 1: //nhap pass
                printf("nhap pass : ");
                scanf("%d", &pass);

                if (pass == pass_dung) {
                    buoc = 2;
                } else {
                    so_lan_nhap_sai++;
                    printf("nhap pass sai, yeu cau nhap lai %d\n", so_lan_nhap_sai);
                    if (so_lan_nhap_sai >= 3) {
                        printf("nhap sai qua 3 lan. Thoat\n");
                        buoc = 5;
                    } else {
                        buoc = 1;
                    }
                }
                break;

            case 2 : //nhap so tien rut
                printf("nhap so tien can rut : ");
                scanf("%d",&so_tien_rut);
                buoc = 3;
                break;

            case 3 : //so sanh so tien trong atm
                if (so_tien_rut > so_tien_tk) {
                    printf("so tien trong tai khoan khong du de thuc hien giao dich\n");
                    printf("so tien atm hien co %d\n", so_tien_tk);
                    buoc = 6;
                } else {
                    buoc = 4;
                }
                break;

            case 4 : //in ra so tien khach hang rut
                printf("so tien ban da rut : %d\n", so_tien_rut);
                printf("giao dich thanh cong\n");
                printf("cam on quy khach\n");
                buoc = 5;
                break;

            case 6 : //hoi khach hang co muon tiep tuc khong
                printf("ban co muon tiep tuc khong ? 'c' hoac 'k' %s", &tiep_tuc);
                scanf("%s", &tiep_tuc);
                if (tiep_tuc == 'c') {
                    buoc = 2;
                } else {
                    buoc = 5;
                }
                break;

            default:
                buoc = 5;
                break;
        }
    }

    return 0;
}

