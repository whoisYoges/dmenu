/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 200;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"0xProto Nerd Font:size=11",
	"CaskaydiaCove NF:size=11",
	"Symbols Nerd Font:size=9" 
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	/* Light Mode */
	/*
	[SchemeNorm] = { "#3c3836", "#fbf1c7" },
	[SchemeSel] = { "#fbf1c7", "#b8bb26" },
	[SchemeOut] = { "#fbf1c7", "#8ec07c" },
	*/
	/* Dark Mode */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#ebdbb2", "#98971a" },
	[SchemeOut] = { "#ebdbb2", "#8ec07c" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 6;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
