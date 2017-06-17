void update_main(LIST* list,CARD* card){
	int x;
	CARD* temp;
	while(1){
		printf("\n%s , %s\nBirthday: %d.%d\nE-mail: %s\n",card->fname,card->lname,(card->dm)%100,(card->dm)/100,card->email);
		printf("------------------------------");
		printf("\n1.update firstname\n2.update lastname\n3.update birthday\n");
		printf("4.update email\n5.Back to the menu\nYour choose : ");
		scanf("%d",&x);
	 	printf("------------------------------\n");
		if(x==1){
			/// upt firstname
			update_name(list,card);
		}else if(x==2){
			///upt last name
			update_surname(list,card);
		}else if(x==3){
			///upt birthday
			update_date(list,card);
		}else if(x==4){
			///upt email
			update_email(card);
		}else if(x==5){
			///back
			return ;
		}else{
			printf("!!ERROR-->You can only enter 1,2 and 3 !!\n");
			printf("Please try again!\n");
		}
	}
}
