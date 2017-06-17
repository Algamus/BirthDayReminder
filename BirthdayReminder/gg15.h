void delete_card(CARD* card){
	free(card->fname);
	free(card->lname);
	free(card);
}
