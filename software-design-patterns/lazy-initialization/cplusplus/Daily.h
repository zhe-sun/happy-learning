#ifndef _DAILY_H
#define _DAILY_H

#include <iostream>
#include <string>
#include <map>
#include "IFavor.h"

class CDaily{
	public:
		static CDaily* GetFavor(std::string strType);
		static void PrintFavorProfile();
		~CDaily();
	private:
		static std::map<std::string, CDaily*> m_mapFavors;
		static std::string m_strAPPLE;
		static std::string m_strBOOK;
		CDaily();  //constructor private forcing one to use static GetFavor()
		CIFavor* m_pFavor;

};

#endif
