/*
 * Header file for test functions.
 *
 * Copyright 2006 Andrew Wood, distributed under the Artistic License.
 */

#ifndef _TEST_INTERNAL_H
#define _TEST_INTERNAL_H 1

int test_tmpfd(char *, int, int *);
int test_fdprintf(int, char *, ...);
void test_usleep(int);

#define TEST_BORK(fmt, ...) do { fprintf(stderr, "FAIL: %d %s.%s " fmt "\n", __LINE__, __FILE__, __func__, ## __VA_ARGS__); } while (0)

#define TEST_SLEEP_US (1000*10)


#endif /* _TEST_INTERNAL_H */

/* EOF */
