#include "Book.h"

CBook::CBook(std::string type){
	m_strType = type;
	m_strClassify = "Computer Science And Technology";
	m_strSpecify = "Container";
}
CBook::~CBook(){
	//
}
void CBook::PrintProfile(){
	std::cout<<m_strType<<"\n";
	std::cout<<"  "<<m_strClassify<<"\n";
	std::cout<<"  "<<m_strSpecify<<"\n";
}
