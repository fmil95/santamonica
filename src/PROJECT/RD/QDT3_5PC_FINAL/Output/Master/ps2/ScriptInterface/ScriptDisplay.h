#include "common.h"

inline void* operator new(unsigned int, void* p) { return p; }
inline void operator delete(void*, void*) { }

namespace QDT 
{
    namespace SINT 
    {
        class SCRIPT_DISPLAY 
        {
        public:
            SCRIPT_DISPLAY();
            ~SCRIPT_DISPLAY();

            static void* EM_Construct(void* memory, void* params, void* context);
            static void EM_Destruct(void* memory, void* params, void* context); 
            static void EM_SetSimpleShadowHeight(void* memory, void* params, void* context);
        };
    } 
} 

struct ShadowManager
{
    unsigned char pad[12];    
    float shadowHeight;   
};

extern ShadowManager* D_004A87DC;
