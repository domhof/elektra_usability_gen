/**
 * @file
 *
 * @brief
 *
 * @copyright BSD License (see doc/LICENSE.md or http://www.libelektra.org)
 */

/** @file
 *
 * @copyright BSD License (see doc/LICENSE.md or http://www.libelektra.org)
 *
 * \warning this is a generated file, do not modify it
 * \warning this is a prototype and not production code
 */
#ifndef ELEKTRA_GEN_47147112_82F6_4E62_96AC_28C5B9970077_GENOPT_C
#define ELEKTRA_GEN_47147112_82F6_4E62_96AC_28C5B9970077_GENOPT_C

#ifdef __cplusplus
#include "genopt.hpp"
#else
#include "genopt.h"
#endif

#include "kdb.h"
#include "kdbtypes.h"

#include <unistd.h>

// for strcmp
#include <string.h>

// for strol
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>

#ifdef _GNU_SOURCE
#include <getopt.h>
#endif

#ifdef __cplusplus
using namespace ckdb;

extern "C"
{
#endif

const char *elektraGenHelpText()
{
	return
	"  -c\t--bytes\t\n"
	"  -w\t--words\t\n"
	"  -l\t--lines\t\n"
	"  -m\t--chars\t\n"
	"  -L\t--max_line_length\t\n"
	"  -s\t--separator\t\n"
	"  -M\t--min_line_length\t\n"
	;
}

int ksGetOpt(int argc, char **argv, KeySet *ks)
{
	int c;
	int retval = 0;
	opterr = 0;
	Key *found = 0;

#ifdef _GNU_SOURCE
	static struct option long_options[] = {
		{
			"bytes",
			no_argument,
			NULL,
			'c'
		},
		{
			"words",
			no_argument,
			NULL,
			'w'
		},
		{
			"lines",
			no_argument,
			NULL,
			'l'
		},
		{
			"chars",
			no_argument,
			NULL,
			'm'
		},
		{
			"max_line_length",
			no_argument,
			NULL,
			'L'
		},
		{
			"separator",
			required_argument,
			NULL,
			's'
		},
		{
			"min_line_length",
			no_argument,
			NULL,
			'M'
		},
		{
			"version",
			no_argument,
			NULL,
			500
		},
		{
			"help",
			no_argument,
			NULL,
			501
		}
	};


	while ((c = getopt_long (argc, argv,
#else
	while ((c = getopt (argc, argv,
#endif
		"c"
		"w"
		"l"
		"m"
		"L"
		"s:"
		"M"
#ifdef _GNU_SOURCE
		, long_options, NULL
#endif
		)) != -1)
	{
		switch (c)
		{
			case 500:
				retval |= 1;
				break;
			case 501:
				retval |= 2;
				break;
			case 'c':
				found = ksLookupByName(ks, "user/sw/wc/show/bytes", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/bytes",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case 'w':
				found = ksLookupByName(ks, "user/sw/wc/show/words", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/words",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case 'l':
				found = ksLookupByName(ks, "user/sw/wc/show/lines", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/lines",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case 'm':
				found = ksLookupByName(ks, "user/sw/wc/show/chars", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/chars",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case 'L':
				found = ksLookupByName(ks, "user/sw/wc/show/max_line_length", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/max_line_length",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case 's':
				found = ksLookupByName(ks, "user/sw/wc/show/separator", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/separator",
							KEY_VALUE, optarg,
							KEY_END));
				}
				else
				{
					keySetString(found, optarg);
				}
				break;
			case 'M':
				found = ksLookupByName(ks, "user/sw/wc/show/min_line_length", 0);
				if (!found)
				{
					ksAppendKey(ks, keyNew("user/sw/wc/show/min_line_length",
							KEY_VALUE, "true",
							KEY_END));
				}
				else
				{
					keySetString(found, "true");
				}
				break;
			case '?':
				retval |= 128;
				break;
			default:
				retval |= 256;
				break;
/*
			case '?':
				if (optopt == 'c')
					fprintf (stderr, "Option -%c requires an argument.\n", optopt);
				else if (isprint (optopt))
					fprintf (stderr, "Unknown option `-%c'.\n", optopt);
				else
					fprintf (stderr,
							"Unknown option character `\\x%x'.\n",
							optopt);
				return 1;
*/
		}
	}
	return retval;
}

#ifdef __cplusplus
}
//extern "C"
#endif
#endif // ELEKTRA_GEN_47147112_82F6_4E62_96AC_28C5B9970077_GENOPT_C

