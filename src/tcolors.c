
#include <stdio.h>

#include <tcolors.h>

// tcolors uses ANSI escape codes

// Disable all attributes like italic, bold, underline, etc...
#define ESCAPE_RESET                    "\x1b[0m"

#define BOLD_ENABLE                     "\x1b[1m"
#define BOLD_DISABLE                    "\x1b[21m"

#define FAINT_ENABLE                    "\x1b[2m"
#define FAINT_DISABLE                   "\x1b[22m"

#define ITALIC_ENABLE                   "\x1b[3m"
#define ITALIC_DISABLE                  "\x1b[23m"

#define UNDERLINE_ENABLE                "\x1b[4m"
#define UNDERLINE_DISABLE               "\x1b[24m"

#define TEXT_COLOR_OFFSET                   30
#define BACKGROUND_COLOR_OFFSET             40

static void TextColor(int Color)
{
    // Check if the color offset is correct
    if (Color < 0 || Color > 9 || Color == 8)
    {
        
    }
    else
    {
        printf("\x1b[%im", Color + TEXT_COLOR_OFFSET);
    }
}

static void BackgroundColor(int Color)
{
    // Check if the color offset is correct
    if (Color < 0 || Color > 9 || Color == 8)
    {
        
    }
    else
    {
        printf("\x1b[%im", Color + BACKGROUND_COLOR_OFFSET);
    }
}

static void SetBold(int Enable)
{
    Enable ? printf(BOLD_ENABLE) : printf(BOLD_DISABLE);
}

static void SetFaint(int Enable)
{
    Enable ? printf(FAINT_ENABLE) : printf(FAINT_DISABLE);
}

static void SetItalic(int Enable)
{
    Enable ? printf(ITALIC_ENABLE) : printf(ITALIC_DISABLE);
}

static void SetUnderline(int Enable)
{
    Enable ? printf(UNDERLINE_ENABLE) : printf(UNDERLINE_DISABLE);
}

__tcolors_namespace__ const tcolors =
{

    .TextColor                      = TextColor,
    .BackgroundColor                = BackgroundColor,

    .SetBold                        = SetBold,
    .SetFaint                       = SetFaint,
    .SetItalic                      = SetItalic,
    .SetUnderline                   = SetUnderline,

    .Colors                         =
    {
        0,                          // Black
        1,                          // Red
        2,                          // Green
        3,                          // Yellow
        4,                          // Blue
        5,                          // Magenta
        6,                          // Cyan
        7,                          // White
        9,                          // Default
    },

};
