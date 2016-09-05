#include <iostream>
#include <string>
#include "Builder.h"

CBuilder::CBuilder(std::string from, std::string run, std::string cmd){
	strFrom = from;
	strRun = run;
	strCmd = cmd;
}
CBuilder::~CBuilder(){
	//
}
void CBuilder::Set(std::string from, std::string run, std::string cmd){
	strFrom = from;
	strRun = run;
	strCmd = cmd;
}
void CBuilder::SetGCC(){
	strFrom = "ubuntu:latest";
	strRun = "sudo apt-get update && sudo apt-get install gcc";
	strCmd = "gcc --version";
}
CDockerfile CBuilder::Build(){
	return CDockerfile(strFrom, strRun, strCmd);
}

