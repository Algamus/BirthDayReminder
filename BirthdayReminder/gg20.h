void delet_to_all(LIST* list){
	CARD* card;
	while((list->fhead)!=NULL){
		card=list->fhead;
		delete_to_list(list,card);
		delete_card(card);
	}
	free(list);
}
