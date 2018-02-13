/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Androiddump will use Libpcap */
/* #undef ANDROIDDUMP_USE_LIBPCAP */

/* Define to 1 if the capture buffer size can be set. */
#define CAN_SET_CAPTURE_BUFFER_SIZE 1

/* Enable hf conflict check */
/* #undef ENABLE_CHECK_FILTER */

/* Link plugins statically into Wireshark */
/* #undef ENABLE_STATIC */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the `bpf_image' function. */
#define HAVE_BPF_IMAGE 1

/* Define to 1 if you have the `CFPropertyListCreateWithStream' function. */
/* #undef HAVE_CFPROPERTYLISTCREATEWITHSTREAM */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to use c-ares library */
#define HAVE_C_ARES 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the `dladdr' function. */
/* #undef HAVE_DLADDR */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if external capture sources should be enabled */
#define HAVE_EXTCAP 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `floorl' function. */
#define HAVE_FLOORL 1

/* Defined if GResource is supported */
/* #undef HAVE_GDK_GRESOURCE */

/* Define to use GeoIP library */
#define HAVE_GEOIP 1

/* Define if GeoIP has GeoIP_free (not available upstream with 1.6.10 or
   earlier) */
/* #undef HAVE_GEOIP_FREE */

/* Define if GeoIP supports IPv6 (GeoIP 1.4.5 and later) */
#define HAVE_GEOIP_V6 1

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getprotobynumber' function. */
#define HAVE_GETPROTOBYNUMBER 1

/* Define if GLib's printf functions support thousands grouping. */
#define HAVE_GLIB_PRINTF_GROUPING 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if -lgtkmacintegration includes the GtkOSXApplication
   Integration functions. */
/* #undef HAVE_GTKOSXAPPLICATION */

/* Define to use heimdal kerberos */
/* #undef HAVE_HEIMDAL_KERBEROS */

/* Define to 1 if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define to 1 if the the Gtk+ framework or a separate library includes the
   Imendio IGE macOS Integration functions. */
/* #undef HAVE_IGE_MAC_INTEGRATION */

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `inflatePrime' function. */
#define HAVE_INFLATEPRIME 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define to use kerberos */
#define HAVE_KERBEROS 1

/* Define if krb5.h defines KEYTYPE_ARCFOUR_56 */
/* #undef HAVE_KEYTYPE_ARCFOUR_56 */

/* Define to 1 if you have the <lauxlib.h> header file. */
#define HAVE_LAUXLIB_H 1

/* Define to use the libcap library */
/* #undef HAVE_LIBCAP */

/* Define to use GnuTLS library */
#define HAVE_LIBGNUTLS 1

/* Enable libnl support */
#define HAVE_LIBNL 1

/* libnl version 1 */
/* #undef HAVE_LIBNL1 */

/* libnl version 2 */
/* #undef HAVE_LIBNL2 */

/* libnl version 3 */
#define HAVE_LIBNL3 1

/* Define to use libpcap library */
#define HAVE_LIBPCAP 1

/* Define to use libportaudio library */
#define HAVE_LIBPORTAUDIO 1

/* Define to 1 if you have the `smi' library (-lsmi). */
#define HAVE_LIBSMI 1

/* Define to use libssh library */
/* #undef HAVE_LIBSSH */

/* Defined if libssh >= 0.6.0 */
/* #undef HAVE_LIBSSH_POINTSIX */

/* Define if you have libxml2 */
/* #undef HAVE_LIBXML2 */

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <linux/if_bonding.h> header file. */
#define HAVE_LINUX_IF_BONDING_H 1

/* Define to 1 if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

/* Define to 1 if you have the `lrint' function. */
#define HAVE_LRINT 1

/* Define to use Lua */
#define HAVE_LUA 1

/* Define to 1 if you have the <lualib.h> header file. */
#define HAVE_LUALIB_H 1

/* Define to 1 if you have the <lua.h> header file. */
#define HAVE_LUA_H 1

/* Define to use lz4 library */
/* #undef HAVE_LZ4 */

/* Define to 1 if you have the `LZ4_decompress_safe' function. */
/* #undef HAVE_LZ4_DECOMPRESS_SAFE */

/* Define to 1 if you have macOS frameworks */
/* #undef HAVE_MACOS_FRAMEWORKS */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to use MIT kerberos */
#define HAVE_MIT_KERBEROS 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemps' function. */
#define HAVE_MKSTEMPS 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to use nghttp2 library */
/* #undef HAVE_NGHTTP2 */

/* Define to 1 if you have the <nghttp2/nghttp2.h> header file. */
/* #undef HAVE_NGHTTP2_NGHTTP2_H */

/* nl80211.h is new enough */
#define HAVE_NL80211 1

/* SET_CHANNEL is supported */
#define HAVE_NL80211_CMD_SET_CHANNEL 1

/* SPLIT_WIPHY_DUMP is supported */
#define HAVE_NL80211_SPLIT_WIPHY_DUMP 1

/* VHT_CAPABILITY is supported */
#define HAVE_NL80211_VHT_CAPABILITY 1

/* Define to 1 if you have the optreset variable */
/* #undef HAVE_OPTRESET */

/* Define if pcap_breakloop is known */
#define HAVE_PCAP_BREAKLOOP 1

/* Define to 1 if you have the `pcap_create' function. */
#define HAVE_PCAP_CREATE 1

/* Define to 1 if you have the `pcap_datalink_name_to_val' function. */
#define HAVE_PCAP_DATALINK_NAME_TO_VAL 1

/* Define to 1 if you have the `pcap_datalink_val_to_description' function. */
#define HAVE_PCAP_DATALINK_VAL_TO_DESCRIPTION 1

/* Define to 1 if you have the `pcap_datalink_val_to_name' function. */
#define HAVE_PCAP_DATALINK_VAL_TO_NAME 1

/* Define to 1 if you have the `pcap_findalldevs' function and a pcap.h that
   declares pcap_if_t. */
#define HAVE_PCAP_FINDALLDEVS 1

/* Define to 1 if you have the `pcap_freecode' function. */
#define HAVE_PCAP_FREECODE 1

/* Define to 1 if you have the `pcap_free_datalinks' function. */
#define HAVE_PCAP_FREE_DATALINKS 1

/* Define to 1 if you have the `pcap_get_selectable_fd' function. */
#define HAVE_PCAP_GET_SELECTABLE_FD 1

/* Define to 1 if you have the `pcap_lib_version' function. */
#define HAVE_PCAP_LIB_VERSION 1

/* Define to 1 if you have the `pcap_list_datalinks' function. */
#define HAVE_PCAP_LIST_DATALINKS 1

/* Define to 1 if you have the `pcap_open' function. */
/* #undef HAVE_PCAP_OPEN */

/* Define to 1 if you have the `pcap_open_dead' function. */
#define HAVE_PCAP_OPEN_DEAD 1

/* Define to 1 if you have libpcap/WinPcap remote capturing support and prefer
   to use these new API features. */
/* #undef HAVE_PCAP_REMOTE */

/* Define to 1 if you have the `pcap_setsampling' function. */
/* #undef HAVE_PCAP_SETSAMPLING */

/* Define to 1 if you have the `pcap_set_datalink' function. */
#define HAVE_PCAP_SET_DATALINK 1

/* Define to 1 if you have the `pcap_set_tstamp_precision' function. */
#define HAVE_PCAP_SET_TSTAMP_PRECISION 1

/* Define if plugins are enabled */
#define HAVE_PLUGINS 1

/* Define to 1 if you have the `popcount' function. */
/* #undef HAVE_POPCOUNT */

/* Define to 1 if you have the <portaudio.h> header file. */
#define HAVE_PORTAUDIO_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to support playing SBC by standalone BlueZ SBC library */
/* #undef HAVE_SBC */

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to use snappy library */
/* #undef HAVE_SNAPPY */

/* Define to 1 if you have the `snappy_uncompress' function. */
/* #undef HAVE_SNAPPY_UNCOMPRESS */

/* Define if you have the SpanDSP library */
/* #undef HAVE_SPANDSP */

/* Define to 1 if you have SpeexDSP */
/* #undef HAVE_SPEEXDSP */

/* Support SSSE4.2 (Streaming SIMD Extensions 4.2) instructions */
#define HAVE_SSE4_2 1

/* Libssh library has ssh_userauth_agent */
/* #undef HAVE_SSH_USERAUTH_AGENT */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if `st_birthtime' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIME */

/* Define to 1 if `st_flags' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_FLAGS */

/* Define to 1 if `__st_birthtime' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT___ST_BIRTHTIME */

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to use zlib library */
#define HAVE_ZLIB 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "wireshark"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.wireshark.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Wireshark"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Wireshark 2.4.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "wireshark"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.wireshark.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.4.4"

/* Support for pcap-ng */
#define PCAP_NG_DEFAULT 1

/* Define if we are using version of of the Portaudio library API */
/* #undef PORTAUDIO_API_1 */

/* Define if we have QtMacExtras */
/* #undef QT_MACEXTRAS_LIB */

/* Define if we have QtMultimedia */
#define QT_MULTIMEDIA_LIB 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "2.4.4"

/* Wireshark's major version */
#define VERSION_MAJOR 2

/* Wireshark's micro version */
#define VERSION_MICRO 4

/* Wireshark's minor version */
#define VERSION_MINOR 4

/* Support for packet editor */
#define WANT_PACKET_EDITOR 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Hint to the compiler that a function never returns */
#define WS_NORETURN __attribute((noreturn))

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Hint to the compiler that a function parameters is not used */
#define _U_ __attribute__((unused))

#include <ws_diag_control.h>