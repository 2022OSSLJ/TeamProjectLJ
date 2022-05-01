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
int selectMenu();
void saveData(Car *c, int count);
int loadData(Car *c);


void searchByType(Car *c);
void searchByModel(Car *c);
void searchByLocation(Car *c);
void searchByPrice(Car *c);
void searchByMileage(Car *c);
