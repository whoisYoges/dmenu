/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 200;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaCove NF:size=11",
	"Symbols Nerd Font:size=9" 
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	/* Light Mode */
	/*
	[SchemeNorm] = { "#343b58", "#e6e7ed" },
	[SchemeSel] = { "#ebdbb2", "#313244" },
	[SchemeOut] = { "#5a3e8e", "#ebdbb2" },
	*/
	/* Dark Mode */
	[SchemeNorm] = { "#cdd6f4", "#313244" },
	[SchemeSel] = { "#1e1e2e", "#f38ba8" },
	[SchemeOut] = { "#000000", "#89dceb" },
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
