#ifndef _DOCKERFILE_H
#define _DOCKERFILE_H

#include <iostream>
#include <string>

class CDockerfile{
	public:
		CDockerfile(std::string from, std::string run, std::string cmd);
		~CDockerfile();
                
                void Profile();
	private:
		std::string strFrom; //"FROM" content in Dockerfile
		std::string strRun; //"RUN" content in Dockerfile
		std::string strCmd; //"CMD" content in Dockerfile
};

#endif
