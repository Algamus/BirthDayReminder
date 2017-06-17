void delorupt_main(LIST* list,CARD* card){
	int x;
	while(1){
		printf("\n1.update the content\n2.delete the content\n3.Back to the menu\n");
		printf("------------------------------\nYour choose : ");
		scanf("%d",&x);
		switch(x){
			case 1:
				update_main(list,card);
				return ;
			case 2:
				delete_to_list(list,card);
				delete_card(card);
				return ;
			case 3:
				return ;
			default:
				printf("!!ERROR-->You can only enter 1,2 and 3 !!\n");
				printf("Please try again!\n");
		}
	}
}
