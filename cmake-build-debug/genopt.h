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
#ifndef ELEKTRA_GEN_62FC227A_CB67_49B4_8EFA_7B74687B2841_GENOPT_H
#define ELEKTRA_GEN_62FC227A_CB67_49B4_8EFA_7B74687B2841_GENOPT_H

#include "kdb.h"


#ifdef __cplusplus
extern "C"
{
#endif

/** Parse commandline options and append it to keyset
 * \param argc the argument counter
 * \param argv the argument string array
 * \param ks the keyset to store the configuration to
 * needs template_getopt.c
 */
int ksGetOpt(int argc, char **argv,
#ifdef __cplusplus
		ckdb::KeySet *ks
#else
		KeySet *ks
#endif
		);

/** \return Help text to be used for --help
 */
const char *elektraGenHelpText();

#ifdef __cplusplus
}
#endif

#endif // ELEKTRA_GEN_62FC227A_CB67_49B4_8EFA_7B74687B2841_GENOPT_H

