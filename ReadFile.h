#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	public:
		ifstream input_file;
		bool _eof;
		bool closed;
	private:
		ReadFile(const char* file_name);
		~ReadFile();
		String* readLine();
		bool eof();
		void close();
};

#endif