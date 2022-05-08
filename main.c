#include <stdio.h>
#include <string.h>
#include "car.h"

int main(void){
	Car clist[100];
	int index=0;
	int count=0;
	int menu;
	int result=0;
	/*count=loadData(clist);
	index=count;*/
	while(1){
		menu=selectMenu();
		if (menu == 0) break;//메뉴 종료
		else if (menu == 1){//READ
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
            		updateProduct(&plist[no-1]);
            		printf("=>수정됨!\n");


        	}
		else if (menu == 4){//DELETE

		}
		printf("프로그램이 종료되었습니다.\n");
		return 0;
	}

}

