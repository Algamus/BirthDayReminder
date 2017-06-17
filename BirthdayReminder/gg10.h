
///search name search lastname
CARD* search_name_in(LIST* list,char* name,int* x){
	CARD* adress;
	CARD* ctr;
	ctr=list->fhead;
	(*x)=0;
	while(ctr!=NULL && 1>strcmp((ctr->fname),(name))){
		if(0==(strcmp((ctr->fname),(name)))){
			if((*x)==0){
				adress=ctr;
			}
			(*x)++;
		}
		ctr=ctr->fnext;
	}
	return adress;
}
CARD* search_surname_in(LIST* list,char* surname,int* x){
	CARD* adress;
	CARD* ctr;
	ctr=list->lhead;
	(*x)=0;
	while(ctr!=NULL && 1>strcmp((ctr->lname),(surname))){
		if(0==(strcmp((ctr->lname),(surname)))){
			if((*x)==0){
				adress=ctr;
			}
			(*x)++;
		}
		ctr=ctr->lnext;
	}
	return adress;
}
CARD* search_bm_in(LIST* list,int x){
	CARD* ctr;
	ctr=list->bmhead;
	while(ctr!=NULL){
		if(x<=ctr->dm){
			return ctr;
		}
		ctr=ctr->bmnext;
	}
	return NULL;
}
