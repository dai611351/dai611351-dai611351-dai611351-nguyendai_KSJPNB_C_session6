#include <stdio.h>
int main() {
    int matKhau = 12345;
    int nhapMatKhau;
    while(nhapMatKhau != matKhau) {
    printf("Moi nhap mat khau ");
    scanf("%d", &nhapMatKhau);
    	if (nhapMatKhau == 12345) {
    		printf("Mat khau dung roi\n");
    		break;
		}else {
			printf("Mat khau sai roi\n");
		}
		
	}
    
    
    return 0;
}
