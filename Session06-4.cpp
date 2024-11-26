#include <stdio.h>
int main() {
    int nam, thang, Ngay;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le \n");
        return 1;
	}
	 if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        Ngay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
    	Ngay = 31;
   	} else if (thang == 2) {
   		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
   			Ngay = 29;
   		} else {								
            Ngay = 28;
	   }
	}	
	printf("Thang %d nam %d co %d ngay.\n",thang,nam,Ngay);
   		
    return 0;
}

