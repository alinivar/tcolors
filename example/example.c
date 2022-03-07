
#include <stdio.h>
#include <ctype.h>

#include <tcolors.h>

int main()
{
    // Green text color
    tcolors.TextColor(tcolors.Colors.Green);
    tcolors.SetUnderline(1);    // Enable underline

    printf("INFO: hello world\n");

    tcolors.SetUnderline(0);    // Disable underline

    // Default text color
    tcolors.TextColor(tcolors.Colors.Default);

    // Red text color
    tcolors.TextColor(tcolors.Colors.Red);
    tcolors.SetBold(1);         // Enable bold

    printf("ERROR: hello world\n");

    tcolors.SetBold(0);         // Disable bold

    // Default text color
    tcolors.TextColor(tcolors.Colors.Default);

    // Blue text color
    tcolors.TextColor(tcolors.Colors.Blue);
    tcolors.SetBold(1);         // Enable bold

    printf("junk ");

    // Yellow text color
    tcolors.TextColor(tcolors.Colors.Yellow);

    tcolors.SetItalic(1);       // Enable italic

    // White background
    tcolors.BackgroundColor(tcolors.Colors.White);

    printf("junk \n");

    tcolors.SetItalic(0);       // Disable italic
    tcolors.SetBold(0);         // Disable bold

    // Disable all attributes and reset text and background colors back to default
    tcolors.Reset();

    // Ask the user if they would like to clear the screen
    printf("Would you like to clear the screen? [y/n]");
    char yesno = getc(stdin);
    if (tolower(yesno) == 'y')
    {
        // if the answer is yes then clear the screen
        tcolors.Clear();
    }

    return 0;
}
