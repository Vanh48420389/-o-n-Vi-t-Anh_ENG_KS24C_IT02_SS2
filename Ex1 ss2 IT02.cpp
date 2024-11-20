#include<stdio.h>
int main(){
	//Kieu du lieu int dung de khai bao bien so nguyen  
	int time = -1347890;
	int age = 18; 
	printf("Thoi Gian Hien Tai La %d giay \n", time);
	printf("tuoi hien tai la %d Tuoi \n", age);
	//kieu du lieu float thuong dung de khai bao bien so thuc  
	float pi = 3.14; 
	float hight = 1.75;
	printf("pi = %.2f\n", pi);
	printf("chieu cao = %.2f\n m", hight);
	//kieu du lieu charthuong duoc dung de khai bao ky tu  
	char grade  = 'A';
	printf("Diem la %c \n", grade);
	//kieu du lieu double giong nhu float nhung do chinh xac cao hon 
	double Pi = 3.1415926535;
	printf("Pi= %.10f\n", Pi);
	//kieu du lieu short giong int nhung có kich thuoc nho hon
	short  a = 5; 
	printf("a= %hd\n", a);
	//kieu du lieu long giong int nhung co kich thuoc lon hon 
	long b = 12345789;
	printf("b= %ld\n", b);
	//kieu du lieu unsigned int dung de khai bao so nguyen khong co dau 
	unsigned int c = 123;
	printf("c= %u\n", c);
return 0;
}
