#include "car.h"
char t[6][10] = {"경형","소형","중형","대형","SUV","상용"};
int createCar(Car *c){
	
	printf("차량의 자종을 입력하여 주세요.\n");
        printf("경형: 0\n소형: 1\n중형: 2\n대형: 3\nSUV : 4\n상용: 5\n");
        printf("숫자로 입력하세요: ");
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
	printf("판매자의 연락처를 입력하여 주세요: ");
	scanf("\n%[^\n]", c->phone);
;
	return 1;



}
void readCar(Car *c){
	
	printf("차종: %s\n",t[c->type]);
	printf("브랜드: %s \n",c->brand);
	printf("모델: %s\n",c->model);
	printf("지역: %s\n",c->region);
	printf("주행거리: %dkm\n",c->distance);
	printf("가격: %d원\n",c->price);
	printf("판매자 전화번호: %s\n",c->phone);
	
}
int updateCar(Car *c){
	printf("***차량 수정***\n");
	printf("차량의 자종을 입력하여 주세요.\n");
	printf("경형: 0\n소형: 1\n중형: 2\n대형: 3\nSUV : 4\n상용: 5\n");
	printf("숫자로 입력하세요: ");
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
	printf("판매자의 연락처를 입력하여 주세요: ");
	scanf("%s", c->phone);	
        return 0;

}
int deleteCar(Car *c){
    c->distance=-1;
    c->price=-1;
    printf("==> 삭제됨!\n");
    return 1;

}
void saveData(Car *c, int count){
	FILE *file;
   	file=fopen("car.txt", "wt");
    	for(int i=0;i<count;i++){
        	if(c[i].distance==-1){
            		continue;
        	}
        
        fprintf(file,"%d,%s,%s,%s,%d,%d,%s\n",
        c[i].type,
        c[i].model,
        c[i].region,
        c[i].brand,
        c[i].price,
        c[i].distance,
	c[i].phone);
    	}
   	fclose(file);
    	printf("=>저장됨!\n");
}
int loadData(Car *c){
	int i=0;
    	FILE*file=NULL;
    	file=fopen("car.txt","r");
    	if(file==NULL){
        	printf("=>파일 없음\n");
        	return 0;
    	}
   	while(!feof(file)){
        	char line[1024];
        	fgets(line, 1024, file);
        	sscanf(line,"%d,%[^\n,],%[^\n,],%[^\n,],%d,%d,%s",
        	&c[i].type,
        	c[i].model,
        	c[i].region,
        	c[i].brand,
        	&c[i].price,
        	&c[i].distance,
		c[i].phone);
        	i++;
    	}
    	fclose(file);
    	printf("=> %d개의 데이터 로딩 성공!\n", i-1);

    	return i-1;
}
int selectMenu(){//메뉴 표출
	int menu;
    	printf("\n***중고차***\n");
    	printf("1. READ\n");
    	printf("2. CREATE\n");
    	printf("3. UPDATE\n");
    	printf("4. DLETE\n");
    	printf("5. 파일저장\n");
    	printf("6. 차종검색\n");
    	printf("7. 모델검색\n");
    	printf("8. 지역검색\n");
		printf("9. 가격검색\n");
		printf("10. 주행거리검색\n");
    	printf("0. 종료\n\n");
    	printf("=> 원하는 메뉴를 선택하세요: ");
    	scanf("%d", &menu);
   	return menu;
}
int selectDataNo(Car *c, int count){
	int no;
	no=0;
	//listCar(c, count);
	while(1){
        	printf("번호는 (취소: 0)? ");
        	scanf("%d", &no);
        	if(no<0||no>count){
            		printf("잘못된 번호입니다.\n");
            		continue;
        	}
        	else{
            		break;
        	}
    	}
	return no;
}
