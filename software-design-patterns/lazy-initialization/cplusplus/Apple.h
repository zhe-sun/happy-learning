#ifndef _APPLE_H
#define _APPLE_H
#include <iostream>
#include <string>
#include "IFavor.h"

class CApple : public CIFavor{
	public:
		CApple(std::string type);
		~CApple();
		void PrintProfile();
	private:
		std::string m_strType;
		std::string m_strColor;
		std::string m_strTaste;
};
#endif
