int menu(LIST* list){
    int x;
    printf("\n      MENU\n------------------------------\n1. Insert a contact\n2. Search a contact\n3. Delete/Update a contact");
    printf("\n4. List all contacts\n5. Save File\n6. Display Upcoming Birthdays\n7. Save and Exit\n------------------------------");
    printf("\nWhat do you want :");
    scanf("%d",&x);
    switch(x){
              case 1:
                   /* insert a contact */
                   insert_gets(list);
                   return 1;
              case 2:
                   /* Search contant */
		   search_content_menu(list,0);
                   return 1;
              case 3:
                   /* Delete or update */
		   search_content_menu(list,1);
                   return 1;
              case 4:
		   pr_all(list);
                   /* Menu */
                   return 1;
              case 5:
                   /* save */
		   fileopen(list,1);
                   return 1;
              case 6:
                   /* upcoming birthday */
		   calendar(list);
                   return 1;
              case 7:
                   /* save &exit */
		   fileopen(list,1);
                   return 0;
              default:
                      printf("!!ERROR-->You can only enter 1,2,3,4,5,6 and 7 !!\n");
                      printf("Please try again!\n");
                      return 1;
    }
}
