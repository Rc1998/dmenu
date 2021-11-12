/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "Fira Code Nerd Font:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1024;                    /* minimum width when centered */

/* Size of the window border */
static const unsigned int border_width = 3;

/* // gruvbox */
/* static const char col_normalbg[]      = "#282828"; */
/* static const char col_normalfg[]      = "#ebdbb2"; */
/* static const char col_normalbd[]      = "#282828"; */
/* static const char col_selectbg[]      = "#458588"; */
/* static const char col_selectfg[]      = "#458588"; */
/* static const char col_selectbd[]      = "#458588"; */

// monochrome dark
/* static const char col_normalbg[]      = "#0a0a0a"; */
/* static const char col_normalfg[]      = "#c9c9c9"; */
/* static const char col_normalbd[]      = "#0a0a0a"; */
/* static const char col_selectbg[]      = "#c9c9c9"; */
/* static const char col_selectfg[]      = "#c9c9c9"; */
/* static const char col_selectbd[]      = "#c9c9c9"; */

// dark blue
static const char col_normalbg[]      = "#202531";
static const char col_normalfg[]      = "#e0e0e0";
static const char col_normalbd[]      = "#202531";
static const char col_selectbg[]      = "#e0e0e0";
static const char col_selectfg[]      = "#e0e0e0";
static const char col_selectbd[]      = "#e0e0e0";

// light theme for the summer
/* static const char col_normalbg[]      = "#dfdfdf"; */ 
/* static const char col_normalfg[]      = "#000000"; */
/* static const char col_normalbd[]      = "#dfdfdf"; */
/* static const char col_selectbg[]      = "#3875d7"; */
/* static const char col_selectfg[]      = "#3875d7"; */
/* static const char col_selectbd[]      = "#3875d7"; */

static const char *colors[SchemeLast][2] = {
        /*     fg         bg       */
        [SchemeNorm] = { col_normalfg, col_normalbg },
        [SchemeSel] = { col_normalbg,  col_selectfg},
        [SchemeOut] = { col_selectfg , col_selectfg},
};

// for wal
/* static const char *colors[SchemeLast][2] = { */
/*      /1*     fg         bg       *1/ */
/*      [SchemeNorm] = { "#9fb9c1", "#060815" }, */
/*      [SchemeSel] = { "#9fb9c1", "#285894" }, */
/*      [SchemeOut] = { "#9fb9c1", "#0393AA" }, */
/* }; */

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
