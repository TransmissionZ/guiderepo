int timer(time_t start, int n){ //function to run timer
	static int tleft = n; //time designated for all levels
	int tcnt, t;
	static int oldtleft = 0;
	if (tleft>=-1){
		tcnt = clock(); //getting time.
		t = (tcnt-start)/CLOCKS_PER_SEC; 
		tleft = n - t; //calculating time left
		if (tleft != oldtleft){
			ClearTimer();
			gotoxy(195,4);
			printf("%d seconds left!", tleft);//prompt
		}
		oldtleft = tleft;
	}
	else{
		return 1;
	}
}

