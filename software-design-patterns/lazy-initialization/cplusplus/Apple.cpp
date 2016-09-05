#include "Apple.h"

CApple::CApple(std::string type){
	m_strType = type;
	m_strColor = "Red";
	m_strTaste = "Sweet";
}
CApple::~CApple(){
	//
}
void CApple::PrintProfile(){
	std::cout<<m_strType<<"\n";
	std::cout<<"  "<<m_strColor<<"\n";
	std::cout<<"  "<<m_strTaste<<"\n";
}
