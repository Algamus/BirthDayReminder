/*	This header file contains the functions to maintain
	and process the codes     
	   Written by:     Gökhan göbüs        
	   
*/

#include "adtlinklist.h" /* mega link list files */
		/* Prototip */
int menu(LIST* list);	   ///menu.h
LIST* createlist(void);    ///gg01.h
void insert_gets(LIST* list); ///gg02.h
void insert_main(LIST* list,CARD* card);///gg03.h
void insert_main_name(LIST* list,CARD* card);///gg04.h
void insert_main_lastname(LIST* list,CARD* card);///gg04.h
void insert_main_dm(LIST* list,CARD* card);///gg04.h
int search_dublicate(LIST* list,char* name,char* surname); ///gg05.h
void pr_all(LIST* list);///gg06.h
void pr_dm(LIST* list);///gg07.h
void pr_name(LIST* list);///gg07.h
void pr_lname(LIST* list);///gg07.h
void pr_upcoming(LIST* list,CARD* card,int gun,int ay,int i);///gg07.h
void search_content_menu(LIST* list,int a);///gg08.h
CARD* search_name(LIST* list);///gg09.h
CARD* search_surname(LIST* list);///gg09.h
CARD* search_name_in(LIST* list,char* name,int* x);///gg10.h
CARD* search_surname_in(LIST* list,char* surname,int* x);///gg10.h
CARD* search_bm_in(LIST* list,int x);///gg10.h
void delorupt_main(LIST* list,CARD* card);///gg11.h
void update_main(LIST* list,CARD* card);///gg12.h
void update_name(LIST* list,CARD* card);///gg13.h
void update_surname(LIST* list,CARD* card);///gg13.h
void update_date(LIST* list,CARD* card);///gg13.h
void update_email(CARD* card);///gg13.h
void delete_to_list(LIST* list,CARD* card);///gg14.h
void delete_card(CARD* card);///gg15.h
void fileopen(LIST* list,int a);///gg16.h
void file_read_file(LIST* list,FILE* dosya);///gg17.h
void file_read_list(LIST* list,FILE* dosya);///gg18.h
void calendar(LIST* list);///gg19.h
void delet_to_all(LIST* list);///gg20.h


       //-------------------------
#include "menu.h"		/* Menu */
#include "gg01.h"       /* Create Main Linked List */
#include "gg02.h"       /* insert gets*/
#include "gg03.h"	/*insert main*/
#include "gg04.h"       /*insert main_in*/
#include "gg05.h"	/*search dublicate*/
#include "gg06.h"	/*print_main*/
#include "gg07.h"	/*print_in*/
#include "gg08.h"	/*search content main*/
#include "gg09.h"	/*search content do fname or lname*/
#include "gg10.h"	/*search content do_in fname , lname  ,  upcoming*/
#include "gg11.h"	/*delete or update menu*/
#include "gg12.h"	/*update menu*/
#include "gg13.h"	/*update name surname bm email*/
#include "gg14.h"	/*delcard to list*/
#include "gg15.h"	/*del card komple*/
#include "gg16.h"	/*file open */
#include "gg17.h"	/*read file add list*/
#include "gg18.h"	/*read list add file*/
#include "gg19.h"	/*calender*/
#include "gg20.h"	/*delete cards and list*/
