#include "EmailValidator.h"
#include <string>
#include <regex> 
using namespace std;

bool isValidEmail(string email) {
	const regex pattern(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w+)+)");
	return regex_match(email, pattern);
}