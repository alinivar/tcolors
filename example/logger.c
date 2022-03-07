
#include <stdio.h>

#include <tcolors.h>

/* Log out some info */
void LogInfo(const char* msg)
{
    // Set the text color to green
    tcolors.TextColor(tcolors.Colors.Green);

    // Log out the message
    printf("[INFO]:     %s\n", msg);

    // Reset back to default
    tcolors.Reset();
}

/* Log out some warning */
void LogWarn(const char* msg)
{
    // Set the text color to yellow
    tcolors.TextColor(tcolors.Colors.Yellow);

    // Log out the message
    printf("[WARN]:     %s\n", msg);

    // Reset back to default
    tcolors.Reset();
}

/* Log out some error */
void LogError(const char* msg)
{
    // Set the text color to red
    tcolors.TextColor(tcolors.Colors.Red);

    // Log out the message
    printf("[ERROR]:    %s\n", msg);

    // Reset back to default
    tcolors.Reset();
}

/* Log out some fatal error */
void LogFatal(const char* msg)
{
    // Set the text color to red
    tcolors.TextColor(tcolors.Colors.Red);

    // Enable bold
    tcolors.SetBold(1);

    // Enable underline
    tcolors.SetUnderline(1);

    // Log out the message
    printf("[FATAL]:    %s\n", msg);

    // Reset back to default
    tcolors.Reset();
}

int main()
{
    LogInfo ("Some Random Info");
    LogWarn ("Some Random Warning");
    LogError("Some Random Error");
    LogFatal("Some Random Fatal Error");

    return 0;
}
