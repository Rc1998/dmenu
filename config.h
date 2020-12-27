/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Nerd Font:size=18"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                    /* minimum width when centered */

/* Size of the window border */
static const unsigned int border_width = 10;

// gruvbox blue 
static const char col_normalbg[]      = "#076678";
static const char col_normalfg[]      = "#ebdbb2";
static const char col_normalbd[]      = "#282828";
static const char col_selectbg[]      = "#076678";
static const char col_selectfg[]      = "#282828";
static const char col_selectbd[]      = "#ffffff";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_normalfg, col_normalbg },
	[SchemeSel] = { col_selectfg,  col_selectbg },
	[SchemeOut] = { col_selectfg, col_selectbg },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
