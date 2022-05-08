#include <stdio.h>
#include <string.h>
#include "car.h"

int createCar(Car *c){
	
	printf("차량의 자종을 입력하여 주세요.\n
			경형: 0\n
			소형: 1\n
			중형: 2\n
			대형: 3\n
			SUV : 4\n
			상용: 5\n
			숫자로 입력하세요: ");
	scanf("%d", &c->type);
	printf("차량의 브랜드를  입력하여 주세요: ");
        scanf("\n%[^\n]", c->brand);
	printf("차량의 모델 이름을 입력하여 주세요: ");
	scanf("\n%[^\n]", c->model);
	printf("차량이 있는 지역을 입력하여 주세요: ");
        scanf("\n%[^\n]", c->region);
	printf("차량의 누적 주행거리를  입력하여 주세요: ");
	scanf("%d", &c->distance);
	printf("차량의 가격을  입력하여 주세요: ");
        scanf("%d", &c->price);
	return 0;



}
void readCar(Car *c);
int updateCar(Car *c){
	printf("***차량 수정***\n");
	printf("차량의 자종을 입력하여 주세요.\n
                        경형: 0\n
                        소형: 1\n
                        중형: 2\n
                        대형: 3\n
                        SUV : 4\n
                        상용: 5\n
                        숫자로 입력하세요: ");
        scanf("%d", &c->type);
        printf("차량의 브랜드를  입력하여 주세요: ");
        scanf("\n%[^\n]", c->brand);
        printf("차량의 모델 이름을 입력하여 주세요: ");
        scanf("\n%[^\n]", c->model);
        printf("차량이 있는 지역을 입력하여 주세요: ");
        scanf("\n%[^\n]", c->region);
        printf("차량의 누적 주행거리를  입력하여 주세요: ");
        scanf("%d", &c->distance);
        printf("차량의 가격을  입력하여 주세요: ");
        scanf("%d", &c->price);
        return 0;

}
int deleteCar(Car *c);
int selectMenu();
void saveData(Car *c, int count);
int loadData(Car *c);

void searchByType(Car *c);
void searchByModel(Car *c);
void searchByLocation(Car *c);
void searchByPrice(Car *c);
void searchByMileage(Car *c);

int selectMenu(){//메뉴 표출
	int menu;
    	printf("\n***중고차***\n");
    	printf("1. READ\n");
    	printf("2. CREATE\n");
    	printf("3. UPDATE\n");
    	printf("4. DLETE\n");
    	printf("5. 파일저장\n");
    	printf("6. 이름검색\n");
    	printf("7. 정보검색\n");
    	printf("8. 원산지검색\n");
    	printf("0. 종료\n\n");
    	printf("=> 원하는 메뉴는? ");
    	scanf("%d", &menu);
   	return menu;
}

