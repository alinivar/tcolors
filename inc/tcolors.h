
#ifndef __tcolors_h__
#define __tcolors_h__

// namespace defines

typedef struct {

    void                    (* const TextColor)(int Color);
    void                    (* const BackgroundColor)(int Color);

    void                    (* const SetBold)(int Enable);
    void                    (* const SetFaint)(int Enable);
    void                    (* const SetItalic)(int Enable);
    void                    (* const SetUnderline)(int Enable);

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
