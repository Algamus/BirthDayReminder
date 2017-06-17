//print
void pr_name(LIST* list){
	CARD* temp;
	temp=list->fhead;
	printf("FirstName Order\n");
	while(temp!=NULL){
                        
                        printf("%s , %s  ==> %d.%d    E-mail: %s\n",temp->fname,temp->lname,(temp->dm)%100,(temp->dm)/100,temp->email);
                        temp=temp->fnext;
        }
}
void pr_lname(LIST* list){
	
	CARD* temp;
	temp=list->lhead;
	printf("LastName Order\n");
	while(temp!=NULL){
                        
                        printf("%s , %s  ==> %d.%d    E-mail: %s\n",temp->lname,temp->fname,(temp->dm)%100,(temp->dm)/100,temp->email);
                        temp=temp->lnext;
        }
}
void pr_dm(LIST* list){
	CARD* temp;
	temp=list->bmhead;
	printf("Date Order\n");
	while(temp!=NULL){
                        
                        printf(" %d.%d  ==> %s , %s  ==>E-mail: %s\n",(temp->dm)%100,(temp->dm)/100,temp->fname,temp->lname,temp->email);
                        temp=temp->bmnext;
        }
}
void pr_upcoming(LIST* list,CARD* card,int gun,int ay,int i){
	int x;
	if(i<1226&&card!=NULL){
		//print listnenin sonu
		x=(ay*100)+gun;
		printf("\nUp coming birthday\n");
		while((card->dm)<=x){
                	printf(" %d.%d  ==> %s , %s  ==>E-mail: %s\n",(card->dm)%100,(card->dm)/100,card->fname,card->lname,card->email);
                        card=card->bmnext;
        	}
		return ;
	}else if(i>=1226&&(((list->bmhead->dm)<=100+gun)||((list->bmrear->dm)>=i))){
		//print listsonu ve list bası
		printf("\nUp coming birthday\n");
		x=100+gun;
		while(card!=NULL){ 
                        printf(" %d.%d  ==> %s , %s  ==>E-mail: %s\n",(card->dm)%100,(card->dm)/100,card->fname,card->lname,card->email);
                        card=card->bmnext;
        	}
		card=list->bmhead;
		while(card!=NULL&&((card->dm)<=x)){
                	printf(" %d.%d  ==> %s , %s  ==>E-mail: %s\n",(card->dm)%100,(card->dm)/100,card->fname,card->lname,card->email);
                        card=card->bmnext;
        	}
		return ;
	}else{
		printf("\n there are no birthday for next 7 days\n");
		return ;
	}
}
	
