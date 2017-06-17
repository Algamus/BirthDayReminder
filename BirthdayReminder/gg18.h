void	file_read_list(LIST* list,FILE* dosya){
	fprintf(dosya,"%d %d",280702020,list->count);
	CARD* temp;
	temp=list->fhead;
	while(temp!=NULL){
                        
                        fprintf(dosya,"\n%s %s %d %d %s",temp->fname,temp->lname,(temp->dm)%100,(temp->dm)/100,temp->email);
                        temp=temp->fnext;
        }
}
