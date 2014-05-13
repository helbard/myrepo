#include "ClearScreenHeader.h"

//needed for ClearScreen()
#include <term.h>
#include <unistd.h>

//source cplusplus.com
//terminal-clear
void Sleep(int iTime)
  {
  if (!cur_term)
    {
    int result;
    setupterm( NULL, STDOUT_FILENO, &result );
    if (result <= 0) return;
    }

  putp( tigetstr( "sleep ", iTime ) );
  }
