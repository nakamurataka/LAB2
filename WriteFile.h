#if !defined WRITE
#define WRITE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
   private:
   	ofstream output_file;
   	bool closed;
   public:
   	WriteFile (const char* file_name);
   	void destroyWriteFile();
   	void writeLine();
   	void close();
};

WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);

#endif
