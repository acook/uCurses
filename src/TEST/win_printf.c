#include <libchordtest/test.h>
#include "src/win_printf.c"

TEST("what name", "what summary")
{
    log_debug("name = %s, summary %s", __card__->name.text, __card__->summary.text);
    ut_assert(true);
}
