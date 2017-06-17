//	List ADT Type Defintions 
	typedef struct card{
	    char*      fname;
	    char*      lname;
	    char*      email;
	    int        dm;
	    struct card*  fnext;
	    struct card*  lnext;
	    struct card*  bmnext;
      }CARD;
      typedef struct list{
              int count;
              CARD* fhead;
              CARD* frear;
              CARD* lhead;
              CARD* lrear;
              CARD* bmhead;
              CARD* bmrear;
      }LIST;
