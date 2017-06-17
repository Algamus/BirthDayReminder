void update_name(LIST* list,CARD* card){
	int x;
	char* item;
	if(!(item=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return;
        }
	printf("Enter new first name ; ");
	scanf("%s",item);
	x=search_dublicate(list,item,card->lname);
	if(x){
		printf("!!ERROR\nThese name update create a duclicate but dublicate is not allowed\n");
		printf("update gerceklestirilemedi\n");
		free(item);
	}else{
		delete_to_list(list,card);
		free(card->fname);
		card->fname=item;
		insert_main(list,card);
		printf("\n---update--sucessful---\n");
	}
}	
void update_surname(LIST* list,CARD* card){
	int x;
	char* item;
	if(!(item=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return;
        }
	printf("Enter new last name ; ");
	scanf("%s",item);
	x=search_dublicate(list,card->fname,item);
	if(x){
		printf("!!ERROR\nThese name update create a duclicate but dublicate is not allowed\n");
		printf("update gerceklestirilemedi\n");
		free(item);
	}else{
		delete_to_list(list,card);
		free(card->lname);
		card->lname=item;
		insert_main(list,card);
		printf("\n---update--sucessful---\n");
	}
}
void update_date(LIST* list,CARD* card){
	int x;
	printf("Enter new birth month ; ");
	scanf("%d",&x);
	while(x<1 || x>12){
		printf("!!!Error---There are 12 months you can enter only 1,2,3,4,5,6,7,8,9,10,11 and 12\n");
		printf("Try again!!\nBirth month: ");
                scanf("%d",&x);
	}
	card->dm=x*100;
	printf("Birth day: ");
	scanf("%d",&x);
	if(((card->dm)==400)||((card->dm)==600)||((card->dm)==900)||((card->dm)==1100)){
        	while(x<1||x>30){
	   		printf("These %d month has 30days\nplease try again\n",(card->dm)/100);
          		printf("Birth day: ");
           		scanf("%d",&x);
           	}
        }else if((card->dm)==200){
     		while(x<1||x>28){
			printf("These %d month has 28days\nplease try again\n",(card->dm)/100);
                        printf("Birth day: ");
                        scanf("%d",&x);
           	}
        }else{
           	while(x<1||x>31){
			printf("These %d month has 31days\nplease try again\n",(card->dm)/100);
                        printf("Birth day: ");
                        scanf("%d",&x);
	        }
        }
	delete_to_list(list,card);
	card->dm=(card->dm)+x;
	insert_main(list,card);
	printf("\n---update--sucessful---\n");
}
void update_email(CARD* card){
	printf("Enter new e-mail ; ");
	scanf("%s",card->email);
}
