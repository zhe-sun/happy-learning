#include "Daily.h"
#include "Apple.h"
#include "Book.h"

std::map<std::string, CDaily*> CDaily::m_mapFavors;
std::string CDaily::m_strAPPLE = "APPLE";
std::string CDaily::m_strBOOK = "BOOK";

CDaily::CDaily(){
	//
}
CDaily::~CDaily(){
	//
}
/*
Lazy Factory method, gets the "APPLE" or "BOOK" instance associated with a
certain type. Instantiates new ones as needed.
precondition: type. Any string that describes a favor type, e.g. "APPLE"
postcondition: The Favor instance associated with that type.
*/
CDaily* CDaily::GetFavor(std::string strType){
	std::map<std::string, CDaily*>::iterator it = m_mapFavors.find(strType);
	CDaily *pDaily = new CDaily();
	if ( it == m_mapFavors.end() ){
	    if ( (strType != m_strAPPLE) && (strType != m_strBOOK) ){//not support favor types except "APPLE" and "BOOK"
	    	    std::cout<<"\nUnkown favor type!\n";
		    return pDaily;
	    }
	    // if no instance with the proper type was found, make one
	    if (strType == m_strAPPLE){
		    pDaily->m_pFavor = new CApple(strType);
	            m_mapFavors[m_strAPPLE] = pDaily; 
	    }
	    if (strType == m_strBOOK){
		    pDaily->m_pFavor = new CBook(strType);
	            m_mapFavors[m_strBOOK] = pDaily;
	    }
	} else {//if already had an instance
		pDaily = it->second;
	}
	return pDaily;
}
void CDaily::PrintFavorProfile(){//For example purposes to see pattern in action
	if ( !m_mapFavors.empty() ){
		std::cout<<"\nFavors numbers: "<<m_mapFavors.size()<<"\n";
		for ( std::map<std::string, CDaily*>::iterator iter = m_mapFavors.begin(); iter != m_mapFavors.end(); ++iter) {
			((*iter).second)->m_pFavor->PrintProfile();
		}
	}
}
