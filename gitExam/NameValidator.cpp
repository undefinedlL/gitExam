#include "NameValidator.h"
#include <string>
using namespace std;

bool isValidName(string name) {
	if (name.empty()) return false;
	for (char c : name) {
		if (!isalpha(c)) return false;
	}
	return true;
}