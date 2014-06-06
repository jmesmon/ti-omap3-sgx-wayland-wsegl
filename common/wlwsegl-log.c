#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "wlwsegl-common.h"


static int logLevel = -1;

static void
log_init()
{
    if (logLevel == -1) {
        const char *dbg = getenv("WSEGL_DEBUG");
        if (dbg)
            logLevel = atoi(dbg);
        else
            logLevel = 0;
    }
}

WLWSEGL_EXPORT void
wsegl_info(const char *fmt, ...)
{
    log_init();

    if (logLevel == 0)
        return;

    fprintf(stderr, "wlwsegl: ");
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);

    fprintf(stderr, "\n");
}

WLWSEGL_EXPORT void
wsegl_debug(const char *fmt, ...)
{
    log_init();

    if (logLevel < 2)
        return;

    fprintf(stderr, "wlwsegl: ");
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);

    fprintf(stderr, "\n");
}

