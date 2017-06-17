void file_read_file(LIST* list,FILE* dosya){
	CARD* newcard;
	int x,y;
	if(!(newcard=(CARD*)malloc(sizeof(CARD)))){
	        printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
	        return;
	}
	newcard->fnext=NULL;
	newcard->lnext=NULL;
	newcard->bmnext=NULL;
        if(!(newcard->fname=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return;
      	}
     	if(!(newcard->lname=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return;
        }
	if(!(newcard->email=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return;
        }
	fscanf(dosya,"%s %s %d %d %s",newcard->fname,newcard->lname,&x,&y,newcard->email);
	newcard->dm=x+(y*100);
	insert_main(list,newcard);
}
