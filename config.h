/* Based on dmenu 5.0 */

//  Topbar
static int topbar = 1;

// Fonts
static const char *fonts[] = { "JetBrains Mono:size=11" };

// Added default layout
static const char *prompt      = "Search:";

// Dracular color scheme
static const char *colors[SchemeLast][2] = {
    [SchemeNorm]          = { "#F8F8F2", "#282A36" },
    [SchemeSel]           = { "#282A36", "#F8F8F2" },
    [SchemeSelHighlight]  = { "#282A36", "#FF5555" },
    [SchemeNormHighlight] = { "#F8F8F2", "#282A36" },
    [SchemeOut]           = { "#000000", "#00ffff" },
};

// Number of vertical lines
static unsigned int lines = 0;

// Default setting
static const char worddelimiters[] = " ";

// Line height of bar
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 8;
