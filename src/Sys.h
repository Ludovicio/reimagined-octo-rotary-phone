 #ifndef SYS_H_
 #define SYS_H_
 
 #ifdef _WIN32
 
   #ifdef OCTO_EXPORTS
     #define OCTOAPI __declspec(dllexport)
   #else
     #define OCTOAPI __declspec(dllimport)
   #endif
 
   #define OCTOCALL __cdecl
 
 #else
   #define OCTOAPI
   #define OCTOCALL
 
 #endif // OS
 
 #endif  // SYS_H_
 