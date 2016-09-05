#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <iostream>
#include <string>
#include "Dockerfile.h"

class CBuilder{
	public:
                CBuilder(std::string from, std::string run, std::string cmd);
		~CBuilder();
                void Set(std::string from, std::string run, std::string cmd);
		void SetGCC();
		
		CDockerfile Build();

	private:
		std::string strFrom;
		std::string strRun;
		std::string strCmd;
};

#endif
