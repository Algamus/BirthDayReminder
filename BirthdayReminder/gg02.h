       //// insert ilk stage                        
void insert_gets(LIST* list){
     CARD* newcard;
     int x;
     if(!(newcard=(CARD*)malloc(sizeof(CARD)))){
        printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        return;
     }
     if(!(newcard->fname=(char*)malloc(sizeof(char)))){
	printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        return;
     }
     printf("\nFirst name: ");
     scanf("%s",newcard->fname);
     printf("Last name: ");
     if(!(newcard->lname=(char*)malloc(sizeof(char)))){
	printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        return;
     }
     scanf("%s",newcard->lname);
     ///dublicate control u
     if(search_dublicate(list,newcard->fname,newcard->lname)){
                            printf("%s %s already in the list\nDublicate is not allowed\n",newcard->fname,newcard->lname);
                            free(newcard->fname);
			    free(newcard->lname);
			    free(newcard);
                            return ;
                            ///egervarsa cikis yapiliyor     yoksa devam
     }
     if(!(newcard->email=(char*)malloc(sizeof(char)))){
	printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        return;
     }
     printf("E-mail : ");
     scanf("%s",newcard->email);
     printf("Birth month: ");
     scanf("%d",&x);
     ///ay aliniyor ve ayin sinirlari kontrol edliyor
     while(x<1 || x>12  ){
                           printf("There are 12 months you can enter only 1,2,3,4,5,6,7,8,9,10,11 and 12");
			   printf("\nTry again!!\nBirth month: ");
                           scanf("%d",&x);
     }
     newcard->dm=x*100;
     printf("Birth day: ");
     scanf("%d",&x);
     ///gun aliniyor ve belirli aylara gore sinirlari kontrol ediliyor
     if(((newcard->dm)==400)||((newcard->dm)==600)||((newcard->dm)==900)||((newcard->dm)==1100)){
           while(x<1||x>30){
	   printf("These %d month has 30days\nplease try again\n",(newcard->dm)/100);
           printf("Birth day: ");
           scanf("%d",&x);
           }
     }else if((newcard->dm)==200){
           while(x<1||x>28){
				  printf("These %d month has 28days\nplease try again\n",(newcard->dm)/100);
                                  printf("Birth day: ");
                                  scanf("%d",&x);
           }
     }else{
           while(x<1||x>31){
				  printf("These %d month has 31days\nplease try again\n",(newcard->dm)/100);
                                  printf("Birth day: ");
                                  scanf("%d",&x);
           }
     }
     newcard->dm=(newcard->dm)+x;
     insert_main(list,newcard);
}
