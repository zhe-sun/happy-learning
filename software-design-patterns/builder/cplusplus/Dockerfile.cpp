#include <iostream>
#include <string>
#include "Dockerfile.h"

CDockerfile::CDockerfile(std::string from, std::string run, std::string cmd){
        strFrom = from;
        strRun = run;
        strCmd = cmd;
}
CDockerfile::~CDockerfile()
{
//
}
void CDockerfile::Profile(){
	std::cout<<"--Docker profile";
	std::cout<<"\nFrom "<<strFrom;
	std::cout<<"\nRUN "<<strRun;
	std::cout<<"\nCMD "<<strCmd;
        std::cout<<"\n";
}
