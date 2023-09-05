#include "StringFunctions.h"

int StringFunctions::myStringLen(const char* str){
   int i = 0;
   int stringLen = 0;
   while (str[i] != '\0')
   {
      i++;
      stringLen++;
   }
   
   return stringLen;
}
