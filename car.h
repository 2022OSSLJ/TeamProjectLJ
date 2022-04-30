typedef struct Car{
	char type[20];
	char model[20];
	char region[20];
	int price;
	int distance;
} Car;

int createCar(Car *c);
void readCar(Car *c);
int updateCar(Car *c);
int deleteCar(Car *c);

