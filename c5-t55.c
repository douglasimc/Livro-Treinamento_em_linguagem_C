// Código não compilável por estar incompleto
#define CORES   2

#if     CORES > 5
        #define SOMBRA 1
        #if     COR_FUNDO == 1
                #include "corfundo.h"
        #else
                #include "semfundo.h"
        #endif
#else
        #define SOMBRA 0
        #if     CGA == 1
                #include "cga.h"
        #else
                #include "mono.h"
        #endif
#endif
