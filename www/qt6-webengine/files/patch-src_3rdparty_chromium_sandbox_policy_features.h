--- src/3rdparty/chromium/sandbox/policy/features.h.orig	2024-10-22 08:31:56 UTC
+++ src/3rdparty/chromium/sandbox/policy/features.h
@@ -45,7 +45,7 @@ SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATURE(
 SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATURE(kSpectreVariant2Mitigation);
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATURE(
     kForceDisableSpectreVariant2MitigationInNetworkService);
 
