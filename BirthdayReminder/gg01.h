///Listenin top unu olusturur
LIST* createlist(void){
      LIST* list;
      list=(LIST*)malloc(sizeof(LIST));
      if (list){
                list->count=0;
                list->fhead=NULL;
                list->frear=NULL;
                list->lhead=NULL;
                list->lrear=NULL;
                list->bmhead=NULL;
                list->bmrear=NULL;
      }
      return list;
}
