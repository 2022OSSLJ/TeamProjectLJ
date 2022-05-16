#include <stdio.h>
#include <string.h>
#include "manager.h"
int main(void){
	Car clist[100];
	int index=0;
	int count=0;
	count=loadData(clist);
	index=count;
	int result=0;
	int menu;
	while(1){
		menu=selectMenu();
		if (menu == 0) break;//메뉴 종료
		else if (menu == 1){//READ
			if (count == 0) {
				printf("*데이터가 없습니다.*\n");
				continue;
				}
			listCar(clist,index);
		}
		else if (menu == 2){
			count+=createCar(&clist[index++]);
			printf("=> 차량이 추가되었습니다!\n");
		}
		else if (menu == 3){//UPDATE
            		if(count==0){
                		printf("*수정할 데이터가 없습니다.*\n");
                		continue;
            		}

            		int no = selectDataNo(clist, index);
            		if(no==0){
                		printf("=> 취소됨!\n");
                		continue;
            		}
            		updateCar(&clist[no-1]);
            		printf("=>수정됨!\n");


        	}
		else if (menu == 4){//DELETE
			int no=selectDataNo(clist, index);
            if(no==0){
                printf("=>취소됨!");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제:1)");
            scanf("%d",&deleteok);
            if(deleteok == 1){
                if(deleteCar(&clist[no-1])) count --;
                 }

		}
		else if (menu == 5){
			saveData(clist, index);
		}
		else if (menu == 6){
			searchType(clist,index);
		}
		else if (menu == 7){
			searchModel(clist,index);
		}
		else if (menu == 8){
			searchRegion(clist, index);
		}
		else if (menu == 9){
			searchPrice(clist, index);
		}
		else if (menu == 10){
			searchDistance(clist, index);
		}
		else{
			printf("잘못된 번호입니다.\n");
		}
	}
	printf("프로그램이 종료되었습니다.\n");
	return 0;
}


