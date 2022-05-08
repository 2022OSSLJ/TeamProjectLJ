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
