/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char normfg[] = "#bbbbbb";
static char normbg[] = "#222222";
static char selfg[] = "#eeeeee";
static char selbg[] = "#005577";
static char outfg[] = "#000000";
static char outbg[] = "#00ffff";
static const char *colors[SchemeLast][2] = {
	/*               fg      bg    */
	[SchemeNorm] = { normfg, normbg },
	[SchemeSel]  = { selfg,  selbg  },
	[SchemeOut]  = { outfg,  outbg  },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* minimum height of a menu line */
static unsigned int minheight = 8;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "background",   STRING,  &normbg },
	{ "foreground",   STRING,  &normfg },
	{ "cursorColor",  STRING,  &selbg },
	{ "background",   STRING,  &selfg },
	{ "color4",       STRING,  &outbg },
	{ "background",   STRING,  &outfg },
	{ "minheight",    INTEGER, &minheight },
	{ "topbar",       INTEGER, &topbar },
	{ "lines",        INTEGER, &lines },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
