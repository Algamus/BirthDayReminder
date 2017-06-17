

void insert_main_name(LIST* list,CARD* card){
	CARD* temp;

	int ctr;
        ///name
        ///once sondaysa sona yoksa normal ekleme
        ctr=strcmp(list->frear->fname,card->fname);
        if(ctr<0){
		list->frear->fnext=card;
                list->frear=card;
		return ;
	}else if(ctr==0){
		ctr=strcmp(list->fhead->lname,card->lname);
		if(ctr<0){
			list->frear->fnext=card;
			list->frear=card;
			return ;
		}
        }
        ctr=strcmp(list->fhead->fname,card->fname);
        ///en basa ekleme
        if(ctr>0){
        	card->fnext=list->fhead;
                list->fhead=card;
		return ;
        }else if(ctr==0){
        	ctr=strcmp(list->fhead->lname,card->lname);
                if(ctr>0){
                	card->fnext=list->fhead;
                        list->fhead=card;
                        return ;
		}
        }
        ///normal ekleme
        temp=list->fhead;
        while((temp->fnext)!=NULL){
        	ctr=strcmp(temp->fnext->fname,card->fname);
                if(ctr>0){
                	card->fnext=temp->fnext;
                        temp->fnext=card;
                        return ;
                }
                if(ctr==0){
                        ctr=strcmp(temp->fnext->lname,card->lname);
                        if(ctr>0){
                        	card->fnext=temp->fnext;
                                temp->fnext=card;
                                return ;
                        }
               }
               temp=temp->fnext;
       }
}
void insert_main_lastname(LIST* list,CARD* card){
	   CARD* temp;
	   int ctr;
	   ///lastname        
           ///sona ekleme   
           ctr=strcmp(list->lrear->lname,card->lname);
           if(ctr<0){
                     list->lrear->lnext=card;
                     list->lrear=card;
		     return ;
	   }else if(ctr==0){
			ctr=strcmp(list->lrear->fname,card->fname);
			if(ctr<0){
				list->lrear->lnext=card;
				list->lrear=card;
				return ;
			}
           }
           ctr=strcmp(list->lhead->lname,card->lname);
           ///en basa ekleme
           if(ctr>0){
           	card->lnext=list->lhead;
                list->lhead=card;
		return ;
           }else if(ctr==0){
           	ctr=strcmp(list->lhead->fname,card->fname);
                if(ctr>0){
                	card->lnext=list->lhead;
                        list->lhead=card;
                        return ;
                }
	   }	
           ///normal ekleme
           temp=list->lhead;
           while((temp->lnext)!=NULL){
           	ctr=strcmp(temp->lnext->lname,card->lname);
                if(ctr>0){
                	card->lnext=temp->lnext;
                        temp->lnext=card;
                        return ;
                }
                if(ctr==0){
                	ctr=strcmp(temp->lnext->fname,card->fname);
                        if(ctr>0){
                        	card->lnext=temp->lnext;
                                temp->lnext=card;
                                return ;
                        }
               }
               temp=temp->lnext;
          }
}
void insert_main_dm(LIST* list,CARD* card){
	CARD* temp;
	int ctr;
	/////birthday
        ////en sona ekleme
        if((list->bmrear->dm)<(card->dm)){
        	list->bmrear->bmnext=card;
                list->bmrear=card;
		return ;
	}else if((list->bmrear->dm)==(card->dm)){
		ctr=strcmp(list->bmrear->fname,card->fname);
		if(ctr<0){
			list->bmrear->bmnext=card;
			list->bmrear=card;
			return ;
		}else if(ctr==0){
			ctr=strcmp(list->bmrear->lname,card->lname);
			if(ctr<0){
				list->bmrear->bmnext=card;
				list->bmrear=card;
				return ;
			}
		}
       }
       ///en basa ekleme
       if((list->bmhead->dm)>(card->dm)){
       	      card->bmnext=list->bmhead;
              list->bmhead=card;
	      return ;
       }else if((list->bmhead->dm)==(card->dm)){
              ctr=strcmp(list->bmhead->fname,card->fname);
              if(ctr>0){
              	   card->bmnext=list->bmhead;
                   list->bmhead=card;
		   return ;
              }
              if(ctr==0){
                   ctr=strcmp(list->bmhead->lname,card->lname);
                   if(ctr>0){
                   	card->bmnext=list->bmhead;
                        list->bmhead=card;
			return ;
                   }
               }
       }
       ///normal ekleme
       temp=list->bmhead;
       while((temp->bmnext)!=NULL){
       	    if((temp->bmnext->dm)>(card->dm)){
            	card->bmnext=temp->bmnext;
            	temp->bmnext=card;
           	return ;
            }    
            if((temp->bmnext->dm)==(card->dm)){
            		ctr=strcmp(temp->bmnext->fname,card->fname);
                	if(ctr>0){
                		card->bmnext=temp->bmnext;
                        	temp->bmnext=card;
                        	return ;
                	}
                	if(ctr==0){
                		ctr=strcmp(temp->bmnext->lname,card->lname);
                        	if(ctr>0){
                        		card->bmnext=temp->bmnext;
                        	        temp->bmnext=card;
					return ;
                        	}
                	}
           }
	   temp=temp->bmnext;
      }
}
///--------------------------------------------------
