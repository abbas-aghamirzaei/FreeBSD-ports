--- include/my_compare.h.orig	2015-12-23 15:33:29 UTC
+++ include/my_compare.h
@@ -40,7 +40,7 @@ extern "C" {
   But beware the dependency of MI_MAX_POSSIBLE_KEY_BUFF and HA_MAX_KEY_LENGTH.
 */
 
-#define HA_MAX_KEY_LENGTH           1000        /* Max length in bytes */
+#define HA_MAX_KEY_LENGTH           4000        /* Max length in bytes */
 #define HA_MAX_KEY_SEG              32          /* Max segments for key */
 
 #define HA_MAX_POSSIBLE_KEY_BUFF    (HA_MAX_KEY_LENGTH + 24+ 6+6)
