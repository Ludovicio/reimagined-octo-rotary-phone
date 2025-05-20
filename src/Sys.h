 #ifndef SYS_H_
 #define SYS_H_
 
 #ifdef _WIN32
 
   #ifdef OCTO_EXPORTS
     #define OCTOAPI __declspec(dllexport)
     #define EXPIMP_TEMPLATE
   #else
     #define OCTOAPI __declspec(dllimport)
     #define EXPIMP_TEMPLATE extern
   #endif
 
   #define OCTOCALL __cdecl
 
 #else
   #define OCTOAPI
   #define OCTOCALL
 
 #endif // OS
 
 #endif  // SYS_H_
 