//Á·Ï°15.11£º
#include"Quote.h"
#include<iostream>
int main()
{
	Quote q("st", 50);
	q.debug();
	BulkQuote bq("stt", 40, 8, 30);
	bq.debug();
	limitedQuote lq("wo", 50, 4, 62);
	lq.debug();
	return 0;
}