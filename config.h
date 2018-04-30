/* user and group to drop privileges to */
static const char *user  = "murilo";
static const char *group = "murilo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#101010",   /* after initialization */
	[INPUT] =  "#356579",   /* during input */
	[FAILED] = "#b91e2e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
