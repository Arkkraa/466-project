#include <iostream>
#include <fstream>

using namespace std;

int main(char **argv, int argc) {
	ifstream fp (argv[1]);
	string line;
	string token;

	if (fp.is_open()) {
		while (getline(fp, line)) {
			//skip comments
			if (line.find("#") == string::npos) {
				stringstream ss(line);

				while (ss >> token) {

				}
			}
		}
	}
}