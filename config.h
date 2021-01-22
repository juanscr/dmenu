/* Based on dmenu 5.0 */

//  Topbar
static int topbar = 1;

// Fonts
static const char *fonts[] = {
	"JetBrains Mono:size=11"
};

// Added default layout
static const char *prompt      = "Search:";

// Dracular color scheme
static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { "#F8F8F2", "#282A36" },
	[SchemeSel]  = { "#282A36", "#F8F8F2" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

// Number of vertical lines
static unsigned int lines      = 0;

// Default setting
static const char worddelimiters[] = " ";
