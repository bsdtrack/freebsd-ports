--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h.orig	2024-07-30 11:12:21 UTC
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h
@@ -412,7 +412,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 #ifdef ABSL_HAVE_SCHED_YIELD
 #error ABSL_HAVE_SCHED_YIELD cannot be directly set
 #elif defined(__linux__) || defined(__ros__) || defined(__native_client__) || \
-    defined(__VXWORKS__)
+    defined(__VXWORKS__) || defined(__OpenBSD__) || defined(__FreeBSD__)
 #define ABSL_HAVE_SCHED_YIELD 1
 #endif
 
@@ -427,7 +427,8 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 // platforms.
 #ifdef ABSL_HAVE_SEMAPHORE_H
 #error ABSL_HAVE_SEMAPHORE_H cannot be directly set
-#elif defined(__linux__) || defined(__ros__) || defined(__VXWORKS__)
+#elif defined(__linux__) || defined(__ros__) || defined(__VXWORKS__) || \
+    defined(__OpenBSD__) || defined(__FreeBSD__)
 #define ABSL_HAVE_SEMAPHORE_H 1
 #endif
 
