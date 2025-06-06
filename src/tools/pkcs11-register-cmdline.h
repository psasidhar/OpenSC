/** @file pkcs11-register-cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.23
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef PKCS11_REGISTER_CMDLINE_H
#define PKCS11_REGISTER_CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "pkcs11-register"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "pkcs11-register"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

enum enum_skip_chrome { skip_chrome__NULL = -1, skip_chrome_arg_on = 0, skip_chrome_arg_off };
enum enum_skip_firefox { skip_firefox__NULL = -1, skip_firefox_arg_on = 0, skip_firefox_arg_off };
enum enum_skip_thunderbird { skip_thunderbird__NULL = -1, skip_thunderbird_arg_on = 0, skip_thunderbird_arg_off };
enum enum_skip_seamonkey { skip_seamonkey__NULL = -1, skip_seamonkey_arg_on = 0, skip_seamonkey_arg_off };

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * module_arg;	/**< @brief Specify the module to load (default='OpenSC's PKCS#11 module').  */
  char * module_orig;	/**< @brief Specify the module to load original value given at command line.  */
  const char *module_help; /**< @brief Specify the module to load help description.  */
  enum enum_skip_chrome skip_chrome_arg;	/**< @brief Don't install module to Chrome (default='on').  */
  char * skip_chrome_orig;	/**< @brief Don't install module to Chrome original value given at command line.  */
  const char *skip_chrome_help; /**< @brief Don't install module to Chrome help description.  */
  enum enum_skip_firefox skip_firefox_arg;	/**< @brief Don't install module to Firefox (default='on').  */
  char * skip_firefox_orig;	/**< @brief Don't install module to Firefox original value given at command line.  */
  const char *skip_firefox_help; /**< @brief Don't install module to Firefox help description.  */
  enum enum_skip_thunderbird skip_thunderbird_arg;	/**< @brief Don't install module to Thunderbird (default='off').  */
  char * skip_thunderbird_orig;	/**< @brief Don't install module to Thunderbird original value given at command line.  */
  const char *skip_thunderbird_help; /**< @brief Don't install module to Thunderbird help description.  */
  enum enum_skip_seamonkey skip_seamonkey_arg;	/**< @brief Don't install module to SeaMonkey (default='off').  */
  char * skip_seamonkey_orig;	/**< @brief Don't install module to SeaMonkey original value given at command line.  */
  const char *skip_seamonkey_help; /**< @brief Don't install module to SeaMonkey help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int module_given ;	/**< @brief Whether module was given.  */
  unsigned int skip_chrome_given ;	/**< @brief Whether skip-chrome was given.  */
  unsigned int skip_firefox_given ;	/**< @brief Whether skip-firefox was given.  */
  unsigned int skip_thunderbird_given ;	/**< @brief Whether skip-thunderbird was given.  */
  unsigned int skip_seamonkey_given ;	/**< @brief Whether skip-seamonkey was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_skip_chrome_values[];  /**< @brief Possible values for skip-chrome. */
extern const char *cmdline_parser_skip_firefox_values[];  /**< @brief Possible values for skip-firefox. */
extern const char *cmdline_parser_skip_thunderbird_values[];  /**< @brief Possible values for skip-thunderbird. */
extern const char *cmdline_parser_skip_seamonkey_values[];  /**< @brief Possible values for skip-seamonkey. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* PKCS11_REGISTER_CMDLINE_H */
