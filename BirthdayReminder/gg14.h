void delete_to_list(LIST* list,CARD* card){
	CARD* temp;
	int x;
	if(list->count==1){
		list->fhead=NULL;
		list->frear=NULL;
		list->lhead=NULL;
		list->lrear=NULL;
		list->bmhead=NULL;
		list->bmrear=NULL;
		list->count=0;
	}else{
		///isim
		////sondan isim
		if(list->frear==card){
			temp=list->fhead;
			for(x=(list->count)-1;1<x;x--){
				temp=temp->fnext;
			}
			list->frear=temp;
			temp->fnext=NULL;
		}else{
			///en basta isim 
			if(list->fhead==card){
				list->fhead=card->fnext;
			}else{
				///ne ortada isim
				temp=list->fhead;
				while((temp->fnext)!=card){
					temp=temp->fnext;
				}
				temp->fnext=temp->fnext->fnext;
			}
		}
		///soy isim
		///sonda soy isim
		if(list->lrear==card){
			temp=list->lhead;
			for(x=(list->count)-1;1<x;x--){
				temp=temp->lnext;
			}
			list->lrear=temp;
			temp->lnext=NULL;
		}else{
			///en basta soyisim 
			if(list->lhead==card){
				list->lhead=card->lnext;
			}else{
				///ne ortada soyisim
				temp=list->lhead;
				while((temp->lnext)!=card){
					temp=temp->lnext;
				}
				temp->lnext=temp->lnext->lnext;
			}
		}
		///dm
		///sonda ise
		if(list->bmrear==card){
			temp=list->bmhead;
			for(x=(list->count)-1;1<x;x--){
				temp=temp->bmnext;
			}
			list->bmrear=temp;
			temp->bmnext=NULL;
		}else{
			///en basta ise 
			if(list->bmhead==card){
				list->bmhead=card->bmnext;
			}else{
				///ne ortada ise
				temp=list->bmhead;
				while((temp->bmnext)!=card){
					temp=temp->bmnext;
				}
				temp->bmnext=temp->bmnext->bmnext;
			}
		}
		(list->count)--;
		card->fnext=NULL;
		card->lnext=NULL;
		card->bmnext=NULL;
	}
}
