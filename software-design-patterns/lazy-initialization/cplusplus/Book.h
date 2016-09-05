#ifndef _BOOK_H
#define _BOOK_H
#include <iostream>
#include <string>
#include "IFavor.h"

class CBook : public CIFavor{
	public:
		CBook(std::string type);
		~CBook();
		void PrintProfile();
	private:
		std::string m_strType;
		std::string m_strClassify;
		std::string m_strSpecify;
};
#endif
