#include <iostream>
#include <string>
#include "Dockerfile.h"
#include "Builder.h"

int main(){

	CBuilder builder("ubuntu:lastest"," ","pwd");
	CDockerfile dockerfile1 = builder.Build();
	dockerfile1.Profile();

	builder.Set("ubuntu:lastest","sudo apt-get update && sudo apt-get install python","python --version");
	CDockerfile dockerfile2 = builder.Build();
	dockerfile2.Profile();

	builder.SetGCC();
	CDockerfile dockerfile3 = builder.Build();
	dockerfile3.Profile();
}


