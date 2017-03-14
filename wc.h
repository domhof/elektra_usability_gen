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
#ifndef ELEKTRA_GEN_6388F758_DC2F_4BCB_95A5_33E765200DDA_H
#define ELEKTRA_GEN_6388F758_DC2F_4BCB_95A5_33E765200DDA_H

#include "kdb.h"
#include "kdbtypes.h"
#include "kdbproposal.h"

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

// for strol
#include <limits.h>
#include <errno.h>



/**
 * @brief Convert bool to string
 * \param b bool to convert (0 is false)
 */
static inline const char *bool_to_string(int b)
{
	if (b==0)
	{
		return "false";
	}
	return "true";
}

/**
 * @brief Convert string to bool
 * \param s string to convert (true, 1 or on is true)
 */
static inline int bool_from_string(const char *s)
{
	if (
	   !strcmp(s, "true")
	   || !strcmp(s, "1")
	   || !strcmp(s, "on")
	   )
		return 1;
	else
		return 0;
}

/** @brief Get parameter /sw/wc/show/bytes
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_bytes
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_bytes(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/bytes",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/bytes
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_bytes
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_bytes(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/bytes", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/bytes",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/words
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_words
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_words(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/words",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/words
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_words
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_words(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/words", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/words",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/lines
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_lines
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_lines(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/lines",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/lines
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_lines
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_lines(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/lines", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/lines",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/chars
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_chars
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_chars(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/chars",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/chars
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_chars
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_chars(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/chars", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/chars",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/max_line_length
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_max_line_length
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_max_line_length(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/max_line_length",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/max_line_length
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_max_line_length
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_max_line_length(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/max_line_length", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/max_line_length",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/separator
 *
 *  * \par Type
 * char
 * \par Mapped Type
 * kdb_char_t
 * \par Default Value
 * ' '

 *
 * \see set_sw_wc_show_separator
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_char_t get_sw_wc_show_separator(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/separator",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_char_t ret  = ' ';

	if (found)
	{
		ret = keyString(found)[0];
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/separator
 *
 *  * \par Type
 * char
 * \par Mapped Type
 * kdb_char_t
 * \par Default Value
 * ' '

 *
 * \see set_sw_wc_show_separator
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_separator(KeySet *ks, kdb_char_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/separator", 0);
	char s[100];
	snprintf(s, 99, "%c", n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/separator",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/no_default_args
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_no_default_args
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_no_default_args(KeySet *ks)
{
	// override
	Key * searchKey = keyNew("/sw/wc/show/lines",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);
	if (!found)
	{
		elektraKeySetName(searchKey, "/sw/wc/show/words", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}
	if (!found)
	{
		elektraKeySetName(searchKey, "/sw/wc/show/chars", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}
	if (!found)
	{
		elektraKeySetName(searchKey, "/sw/wc/show/bytes", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}
	if (!found)
	{
		elektraKeySetName(searchKey, "/sw/wc/show/max_line_length", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}
	if (!found)
	{
		elektraKeySetName(searchKey, "/sw/wc/show/min_line_length", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}
	// now the key itself
	if (!found)
	{

		elektraKeySetName(searchKey, "/sw/wc/show/no_default_args", KEY_CASCADING_NAME);
		found = ksLookup(ks, searchKey, 0);
	}

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/no_default_args
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_no_default_args
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_no_default_args(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/no_default_args", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/no_default_args",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


/** @brief Get parameter /sw/wc/show/min_line_length
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_min_line_length
 *
 * \return the value of the parameter, default if it could not be found
 * \param ks the keyset where the parameter is searched
 */
static inline kdb_boolean_t get_sw_wc_show_min_line_length(KeySet *ks)
{
	Key * searchKey = keyNew("/sw/wc/show/min_line_length",
		KEY_CASCADING_NAME, KEY_END);
	Key * found = ksLookup(ks, searchKey, 0);

	keyDel(searchKey);

	kdb_boolean_t ret  = 0;

	if (found)
	{
		ret = bool_from_string(keyString(found));
	}

	return ret;
}

/** @brief Set parameter /sw/wc/show/min_line_length
 *
 *  * \par Type
 * boolean
 * \par Mapped Type
 * kdb_boolean_t
 * \par Default Value
 * false

 *
 * \see set_sw_wc_show_min_line_length
 *
 * \param ks the keyset where the parameter is added or replaced
 * \param n is the value to set in the parameter
 */
static inline void set_sw_wc_show_min_line_length(KeySet *ks, kdb_boolean_t n)
{
	Key * found = ksLookupByName(ks, "/sw/wc/show/min_line_length", 0);
	const char *s = bool_to_string(n);
	if (!found)
	{
		ksAppendKey(ks, keyNew("user/sw/wc/show/min_line_length",
				KEY_VALUE, s,
				KEY_END));
	}
	else
	{
		keySetString(found, s);
	}
}


#endif // ELEKTRA_GEN_6388F758_DC2F_4BCB_95A5_33E765200DDA_H


