
#ifndef __tcolors_h__
#define __tcolors_h__

// namespace defines

typedef struct {

    // Set the text color to the specified color
    void                    (* const TextColor)(int Color);

    // Set the background color to the specified color
    void                    (* const BackgroundColor)(int Color);

    // Enable (1) or disable (0) bold printing
    void                    (* const SetBold)(int Enable);
    
    // Enable (1) or disable (0) faint printing
    void                    (* const SetFaint)(int Enable);
    
    // Enable (1) or disable (0) italic printing
    void                    (* const SetItalic)(int Enable);

    // Enable(1) or disable (0) underline printing
    void                    (* const SetUnderline)(int Enable);

    // Clear the terminal screen
    void                    (* const Clear)();

    // Disable all attributes and reset both text and background colors
    void                    (* const Reset)();

    // Color enums
    const struct {

        const int           Black;
        const int           Red;
        const int           Green;
        const int           Yellow;
        const int           Blue;
        const int           Magenta;
        const int           Cyan;
        const int           White;
        const int           Default;

    } Colors;

} __tcolors_namespace__;

// namespace decl

extern __tcolors_namespace__ const tcolors;

#endif
