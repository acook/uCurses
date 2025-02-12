// win_printf.h
// -----------------------------------------------------------------------

#ifndef WIN_PRINTF_H
#define WIN_PRINTF_H

// -----------------------------------------------------------------------

#include "uCurses.h"
#include "uC_window.h"

// -----------------------------------------------------------------------

API void uC_win_puts(window_t *win, char *p);
API void uC_win_printf(window_t *win, char *format, ...);

// -----------------------------------------------------------------------

#endif // WIN_PRINTF_H

// =======================================================================
