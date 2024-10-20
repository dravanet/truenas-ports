--- components/signin/public/base/signin_switches.cc.orig	2024-02-23 21:04:38 UTC
+++ components/signin/public/base/signin_switches.cc
@@ -104,7 +104,7 @@ BASE_FEATURE(kSearchEngineChoice,
 BASE_FEATURE(kUnoDesktop, "UnoDesktop", base::FEATURE_DISABLED_BY_DEFAULT);
 
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kMinorModeRestrictionsForHistorySyncOptIn,
              "MinorModeRestrictionsForHistorySyncOptIn",
              base::FEATURE_DISABLED_BY_DEFAULT);
