#include "manager.h"

void listCar(Car *c,int count){


    printf("================================\n");
    for(int i=0; i<count; i++){
        if( c[i].price == -1 || c[i].distance == -1 ) continue;
        printf("%2d.\n", i+1);
        readCar(&c[i]);
    }
    printf("\n");
}
void searchType(Car *c,int count){
    int scnt = 0;
    int search;
    printf("검색할 차종을 입력하여 주세요.\n");
    printf("경형: 0\n소형: 1\n중형: 2\n대형: 3\nSUV : 4\n상용: 5\n");
    scanf("%d",&search);
    printf("================================\n");
    for(int i = 0; i < count; i++){
         if( c[i].price == -1 || c[i].distance == -1 ) continue;
         if(c[i].type == search){
            printf("%2d.\n", i+1);
            readCar(&c[i]);
            scnt++;
         }
    }
    if(scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchModel(Car *c,int count){
    int scnt = 0;
    char search[20];
    printf("검색할 모델명을 입력하여 주세요.\n");
    scanf("%s",search);
    printf("================================\n");
    for(int i = 0; i < count; i++){
         if( c[i].price == -1 || c[i].distance == -1 ) continue;
         if(strstr(c[i].model,search)){
            printf("%2d.\n", i+1);
            readCar(&c[i]);
            scnt++;
         }
    }
    if(scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchRegion(Car *c,int count){
    int scnt = 0;
    char search[20];
    printf("검색할 지역명을 입력하여 주세요.\n");
    scanf("%s",search);
    printf("================================\n");
    for(int i = 0; i < count; i++){
         if( c[i].price == -1 || c[i].distance == -1 ) continue;
         if(strstr(c[i].region,search)){
            printf("%2d.\n", i+1);
            readCar(&c[i]);
            scnt++;
         }
    }
    if(scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchPrice(Car *c,int count){
    int scnt = 0;
    int s1,s2;
    printf("검색할 차의 가격 범위를 입력해주세요.\n");
    printf("최소 가격: ");
    scanf("%d",&s1);
    printf("최대 가격: ");
    scanf("%d",&s2);
    printf("================================\n");
    for(int i = 0; i < count; i++){
         if( c[i].price == -1 || c[i].distance == -1 ) continue;
         if(s1 <= c[i].price && s2 >= c[i].price){
            printf("%2d.\n", i+1);
            readCar(&c[i]);
            scnt++;
         }
    }
    if(scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
void searchDistance(Car *c,int count){
    int scnt = 0;
    int s1,s2;
    printf("검색할 차의 누적 주행거리 범위를 입력해주세요.(단위:km)\n");
    printf("최소 : ");
    scanf("%d",&s1);
    printf("최대 : ");
    scanf("%d",&s2);
    printf("================================\n");
    for(int i = 0; i < count; i++){
         if( c[i].price == -1 || c[i].distance == -1 ) continue;
         if(s1 <= c[i].distance&& s2 >= c[i].distance){
            printf("%2d.\n", i+1);
            readCar(&c[i]);
            scnt++;
         }
    }
    if(scnt == 0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}