void search_content_menu(LIST* list,int a){
	int x;
	if(list->count==0){
		printf("\nThe list is empty\n");
		return ;
	}
	CARD* temp;
	while(1){
		printf("\n------------------------------\nThere are %d people in the list\n",list->count);
		printf("\n------------------------------\n1.Search a firstname\n2.Search a lastname\n3.Back to the menu\n");
		printf("------------------------------\nYour choose : ");
		scanf("%d",&x);
	 	printf("------------------------------\n");
		switch(x){
			case 1:
				temp=search_name(list);
				if(a){
					if(temp==NULL){
						return ;
					}
					delorupt_main(list,temp);
				}
				return ;
			case 2:
				temp=search_surname(list);
				if(a){
					if(temp==NULL){
						return ;
					}
					delorupt_main(list,temp);
				}
				return ;
			case 3:
				return ;
			default:
				printf("!!ERROR-->You can only enter 1,2 and 3 !!\n");
				printf("Please try again!\n");
		}
	}
}
