void insert_main(LIST* list,CARD* card){
     ///Liste bos ise
     card->fnext=NULL;
     card->lnext=NULL;
     card->bmnext=NULL;
     if(list->count==0){
                        list->fhead=card;
                        list->frear=card;
                        list->lhead=card;
                        list->lrear=card;
                        list->bmhead=card;
                        list->bmrear=card;
     }else{
	  ///name
          insert_main_name(list,card);
	  ///last name
	  insert_main_lastname(list,card);
	  ///month day
          insert_main_dm(list,card);
     ///eklemenin sonu
     }
     (list->count)++;
     ///counter 1 artar
}
