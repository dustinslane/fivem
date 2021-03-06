/*
* Character Set Handling
* (C) 1999-2007 Jack Lloyd
*
* Botan is released under the Simplified BSD License (see license.txt)
*/

#ifndef BOTAN_CHARSET_H_
#define BOTAN_CHARSET_H_

#include <botan/types.h>
#include <string>

namespace Botan {

/**
* The different charsets (nominally) supported by Botan.
*/
enum Character_Set {
   LOCAL_CHARSET,
   UCS2_CHARSET,
   UTF8_CHARSET,
   LATIN1_CHARSET
};

namespace Charset {

/*
* Character Set Handling
*/
std::string BOTAN_PUBLIC_API(2,0) transcode(const std::string& str,
                                Character_Set to,
                                Character_Set from);

bool BOTAN_PUBLIC_API(2,0) is_digit(char c);
bool BOTAN_PUBLIC_API(2,0) is_space(char c);
bool BOTAN_PUBLIC_API(2,0) caseless_cmp(char x, char y);

uint8_t BOTAN_PUBLIC_API(2,0) char2digit(char c);
char BOTAN_PUBLIC_API(2,0) digit2char(uint8_t b);

}

}

#endif
