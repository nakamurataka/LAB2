#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{

   input_file.open(file_name);
   closed = false;
   _eof = false;
   input_file.open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()
{
   close();
   
   delete this;
}

bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   
   
   _eof = !(getline(this->input_file, text));

<<<<<<< HEAD
   String* str = new String((const char*) text.c_str());	//good job here
=======
   //Here is I modified.
   String* str = new String((const char*) text.c_str());	
>>>>>>> 715fcbb51aa8d62b18e6fc74de0f791ff1aefdd6
   String* str = new String((const char*) text.c_str());
>>>>>>> 715fcbb51aa8d62b18e6fc74de0f791ff1aefdd6
   return str;
}
