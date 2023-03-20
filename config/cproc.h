static const char target[]               = "x86_64-alpine-linux-unknown";
static const char *const startfiles[]    = {""};
static const char *const endfiles[]      = {""};
static const char *const preprocesscmd[] = {
	"cpp",

	/* clear preprocessor GNU C version */
	"-U", "__GNUC__",
	"-U", "__GNUC_MINOR__",

	/* we don't yet support these optional features */
	"-D", "__STDC_NO_ATOMICS__",
	"-D", "__STDC_NO_COMPLEX__",
	"-D", "__STDC_NO_VLA__",
	"-U", "__SIZEOF_INT128__",

	/* we don't generate position-independent code */
	"-U", "__PIC__",

	/* ignore attributes and extension markers */
	"-D", "__attribute__(x)=",
	"-D", "__extension__=",
	"-D", "__CLANG_ATOMIC_BOOL_LOCK_FREE"
};
static const char *const codegencmd[]    = {"qbe"};
static const char *const assemblecmd[]   = {"as"};
static const char *const linkcmd[]       = {"ld"};
