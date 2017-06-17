/*
==================================================================================================================
 Name        : Birthday Reminder
 Author      : Gokhan Gobus
 Version     : 
 Copyright   : Gokhan Gobus
 Description : Store the date of births of the users and display the incoming birthdays 
 =================================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>		
#include "maps.h"

int main(void){
    LIST* list;
    list=createlist();
    fileopen(list,0);///dosya varsa acar ve icindekileri ekler yoksa bos olur
    if(!list){
              printf("\n---Error----------------\n Your program will shut down!!\n Unable to create Main link list\n");
              printf("-----------------------\n Please try again to start to program\n");
              exit(0);
    }
    while(menu(list));
    return 0;
}
