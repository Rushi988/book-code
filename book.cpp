#include "book.h"

book::book()
{
}
book::Book(int bookid,string bname,double price){
			
			this->bookid=bookid;
			this->bname=bname;
			this->price=price;
		}
	
void book:: setId(int id){
	bookId = id;
}	
void book::setName(string name){
	bname = name;
}	
void book::setPrice(double p){
	price = p;
}
	
int book::getId(){
	return bookid;
}
int book::getName(){
	return bname;
}
int book:: getPrice(){
	return price;
}
	
void book::dipslay(){
	cout<<"bookid:"<<bookid<<"  book name :"bname<< "book price : "<< price<<endl;
}	

double book::TotalPrice(double price,int m){
	
	return price*m
}
};
	
