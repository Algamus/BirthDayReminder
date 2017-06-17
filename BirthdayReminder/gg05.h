//search dublicate and search name search lastname
int search_dublicate(LIST* list,char* name,char* surname){
    CARD* ctr;
    ctr=list->fhead;
    while(ctr!=NULL && 1>strcmp((ctr->fname),(name))){
                    if(0==(strcmp((ctr->fname),(name)))){
                                                                  if(0==(strcmp((ctr->lname),(surname)))){
                                                                                                                  return 1;
                                                                  }
                    }
                    ctr=ctr->fnext;
    }
    return 0;
}
