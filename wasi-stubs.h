// TODO: If I don't -include this file from the command line nothing works. that makes 0 sense.

#include <sys/stat.h>

__attribute__ ((unused))
static int chmod(const char *path, mode_t mode) {
	(void)path;
	(void)mode;
	return 0;
}

//__attribute__ ((unused))
//static int chown(const char *pathname, uid_t owner, gid_t group) {
//	(void)pathname;
//	(void)owner;
//	(void)group;
//	return 0;
//}

//__attribute__ ((unused))
//static int dup(int fildes) {
//	(void)fildes;
//	fprintf(stderr, "Function (dup) not supported on wasi\n");
//	__builtin_unreachable();
//}
