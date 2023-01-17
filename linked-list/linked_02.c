#include"LinkedList.h"
int main(){
	struct node* START;
	START=NULL;
	insbeg(&START,100);
	insend(&START,200);
	insend(&START,300);
	insend(&START,400);
	traverse(&START);
	return 0;
}
