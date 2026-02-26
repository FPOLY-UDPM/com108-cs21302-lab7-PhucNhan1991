/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

/*
    Xây dựng chương trình sắp xếp chuỗi theo thứ tự tăng dần
    Input: Có n chuỗi 
        B1: Khai báo 1 mảng chuỗi 
            char <tên mảng> [số chuỗi][số kí tự của 1 chuỗi]
    Process: Lặp lai công việc Kiểm tra chuỗi trong mảng với nhau
        B1: Nếu chuôi thứ [i][100] > chuôi thứ [j][100] thì
            ta thực hiện hoán vị 2 chuỗi
            Để thực hiện hoán vị 2 chuỗi ta thực hiện như sau
                Khai báo 1 chuỗi tạm = rỗng 
                strcpy(chuoitam, chuoi[i][100] )
                strcpy(chuoi[i][100], chuoi[j][100])
                strcpy(chuoi[j][100], chuoitam)


*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Nhập vào số chuỗi bạn muốn: ");
    scanf("%d", &n);
    getchar();

    char Chuoi[n][100];

    for(int i = 0; i < n; i++)
    {
    printf("Nhập chuỗi thứ %d: ", i);
    gets(Chuoi[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(strcmp(Chuoi[i], Chuoi[j]) > 0)
            {
                char ChuoiTam[100] = "";
                strcpy(ChuoiTam, Chuoi[i]);
                strcpy(Chuoi[i], Chuoi[j]);
                strcpy(Chuoi[j], ChuoiTam);
            }
        }
    }
    printf("Chuỗi sau khi sắp xếp:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s", Chuoi[i]);
        printf("\n");
    }
    return 0;
}