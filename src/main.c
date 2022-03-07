
#include <stdio.h>

#include <tcolors.h>

int main()
{
    tcolors.TextColor(tcolors.Colors.Green);
    tcolors.SetUnderline(1);

    printf("hello world\n");

    tcolors.SetUnderline(0);
    tcolors.TextColor(tcolors.Colors.Default);
}
