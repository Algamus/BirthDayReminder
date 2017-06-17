///print main
void pr_all(LIST* list){
	int x;
	if(list->count==0){
		printf("\nThe list is empty\n");
		return ;
	}
	while(1){
		printf("\n---------------------\nThere are %d people in the list\n",list->count);
		printf("\n---------------------\n1.Print the list by first name\n2.Print the list by last name\n");
		printf("3.Print the list by date order\n4.Back to the menu\n---------------------\n");
		printf("Your choose : ");
		scanf("%d",&x);
		printf("--------------------\n");
		switch(x){
			case 1:
				pr_name(list);
				return ;
			case 2:
				pr_lname(list);
				return ;
			case 3:
				pr_dm(list);
				return ;
			case 4:
				return ;
			default:
				printf("!!ERROR-->You can only enter 1,2,3 and 4 !!\n");
				printf("Please try again!\n");
		}
	}
}	
