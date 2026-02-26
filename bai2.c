/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

/*
    Xây dựng chương trình cho đăng nhập hệ thống bằng Username và Password.
    Input: 2 chuỗi do người dùng nhập vào
        B1: Khai báo chuỗi tên Username và PassWord
        B2: Cho người dùng nhập vào chuỗi bằng lệnh fgets.
    Process : Ta khởi tạo 2 chuỗi của hệ thống
        B1: Chuỗi Username của hệ thống và Chuỗi Password của hệ thống
        B2: Dùng lệnh strcmp để so sánh 2 chuỗi
            Nếu kêt quả trả về == 0 thì in ra kết quả " Đăng nhập thành công"
            còn nếu kết quả trả về != 0 thì in ra kết quả " Đăng nhập thất bại"
    Ôutput: Kết quả được in ra.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char userName[100], passWord[100];
    // Cho người dùng nhập chuỗi userName
    
    printf("Bạn hãy nhập USERNAME: \n");
    gets(userName);

    // Cho người dùng nhập chuỗi passWord

    printf("Bạn hãy nhập PASSWORD: \n");
    gets(passWord);

    // Khởi tạo 2 chuỗi hệ thống
    char userName_Sys[100] = "admin";
    char passWord_Sys[100] = "Poly123@@";

    if(strcmp(userName, userName_Sys) == 0 && strcmp(passWord, passWord_Sys) == 0)
    {
        printf("Bạn đã đăng nhập thành công");
    }
    else printf("Bạn đăng nhập thất bại");

    return 0;
}