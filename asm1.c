/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49647]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c


// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số 
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện 
// 5. Chức năng số 5: Chức năng đổi tiền 
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp 
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số 
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();

int UCLN(int a, int b);

int main() {
    int chon;

    do {
        printf("\n=========== ASM2 MENU ===========\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN & BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        switch(chon){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 9: chucNang9(); break;
            case 10: chucNang10(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while(chon != 0);

    return 0;
}