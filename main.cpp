#define ELPP_STL_LOGGING
#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char** argv) {
	START_EASYLOGGINGPP(argc, argv);
	LOG(INFO) << "Hello Dev C++!";
	return 0;
}
