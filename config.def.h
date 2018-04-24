/* user and group to drop privileges to */
static const char *user  = "murilo";
static const char *group = "murilo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#565575",   /* during input */
	[FAILED] = "#ff8080",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;