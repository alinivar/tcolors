
#include        <stdio.h>
#include        <stdlib.h>

#include        <tcolors.h>

// tcolors uses ANSI escape codes

// Disable all attributes like italic, bold, underline, etc...
#define RESET_ATTRIB                    "\e[0m"

// Attributes

#define BOLD_ENABLE                     "\e[1m"       // Enable bold
#define BOLD_DISABLE                    "\e[21m"      // Disable bold

#define FAINT_ENABLE                    "\e[2m"       // Enable faint
#define FAINT_DISABLE                   "\e[22m"      // Disable faint

#define ITALIC_ENABLE                   "\e[3m"       // Enable italic
#define ITALIC_DISABLE                  "\e[23m"      // Disable italic

#define UNDERLINE_ENABLE                "\e[4m"       // Enable underline
#define UNDERLINE_DISABLE               "\e[24m"      // Disable underline

// Colors

#define TEXT_COLOR_OFFSET                30          // Escape code offset for text color
#define BACKGROUND_COLOR_OFFSET          40          // Escape code offset for background color

static void TextColor(int Color)
{
    // Check if the color offset is correct
    // 8 is reserved for rgb text color
    if (Color < 0 || Color > 9 || Color == 8)
    {
        
    }
    else
    {
        printf("\e[%im", Color + TEXT_COLOR_OFFSET);
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
        printf("\e[%im", Color + BACKGROUND_COLOR_OFFSET);
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

static void Clear()
{
    #ifdef _WIN32

        int rv = system("cls");
        if (rv)
        {
            perror("tcolors.Clear()");
        }

    #else

        int rv = system("clear");
        if (rv)
        {
            perror("tcolors.Clear()");
        }

    #endif
}

static void Reset()
{
    TextColor(9);           // Default Text Color
    BackgroundColor(9);     // Default Background Color
    printf(RESET_ATTRIB);   // Reset all attributes like bold, underline, etc...
}

// namespace definitions

__tcolors_namespace__ const tcolors =
{

    .TextColor                      = TextColor,
    .BackgroundColor                = BackgroundColor,

    .SetBold                        = SetBold,
    .SetFaint                       = SetFaint,
    .SetItalic                      = SetItalic,
    .SetUnderline                   = SetUnderline,

    .Clear                          = Clear,
    .Reset                          = Reset,

    // Color offsets
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
