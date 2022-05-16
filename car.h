#include <stdio.h>
#include <string.h>
typedef struct Car{
	int type;
	char model[20];
	char region[20];
	char brand[20];
	int price;
	int distance;
	char phone[20];
} Car;


int createCar(Car *c);
void readCar(Car *c);
int updateCar(Car *c);
int deleteCar(Car *c);

void saveData(Car *c, int count);
int loadData(Car *c);


int selectMenu();//메뉴 표출
int selectDataNo(Car *c, int count);
