/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

/*
    Xây dựng chương trình đếm số nguyên âm, phụ âm trong 1 chuỗi
    Input: 1 chuỗi kí tự - có nghĩa là tạo thành 1 mảng với các ký tự 
    Process: Kiểm tra lần lượt từng phần tử trong mảng ký tự trên
        Nếu phần tử thứ i  = 'a' || = 'e' || = 'u' || = 'i' || = 'o' || = 'y' thì ta cộng 1 vào biến dếm
        Còn không thì biến đếm phụ âm tăng 1 
    Output: Số lượng nguyên âm tương ứng với biến đếm nguyên âm
            Số lượng phụ âm tương ứng với biến đếm phụ âm

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char tiepTuc;
    do
    {
        char chuoi[100];
        int phuAm = 0, nguyenAm = 0;

        printf("Bạn hãy nhập vào chuỗi ký tự cần kiểm tra: \n");
        gets(chuoi);
        for(int i = 0; i < strlen(chuoi); i++)
        {
            if(chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'u' || chuoi[i] == 'i' || chuoi[i] == 'o' || chuoi[i] == 'y'
                ||chuoi[i] == 'A' || chuoi[i] == 'E' || chuoi[i] == 'U' || chuoi[i] == 'I' || chuoi[i] == 'O'|| chuoi[i] == 'Y' )
            {
                nguyenAm = nguyenAm + 1;
            }
            else if (chuoi[i] == ' ')
            {
                continue;
            }
            else phuAm = phuAm + 1;
        
        }
        printf("Chuỗi bạn vừa nhập có %d ký tụ nguyên âm\n", nguyenAm);
        printf("Chuỗi bạn vừa nhập có %d ký tự phụ âm\n", phuAm);

        printf("Bạn có muốn tiếp tục không? (y/n): ");
        scanf(" %c", &tiepTuc);
        getchar();
    } while (tiepTuc == 'y' || tiepTuc == 'Y');
    return 0;
}