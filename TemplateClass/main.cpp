#include <string>
#include "TemplateClass.h"

int main(int argc, char* argv[])
{
	State<std::string> state;
	state.PrintState(std::string("Hello World"));



	return 0;
}