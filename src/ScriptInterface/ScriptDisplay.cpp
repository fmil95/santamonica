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
        };
    } 
} 

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", __Q33QDT4SINT14SCRIPT_DISPLAY);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", _$_Q33QDT4SINT14SCRIPT_DISPLAY);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", Suicide__Q33QDT4SINT14SCRIPT_DISPLAY);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", SetViewportListInst__Q33QDT4SINT14SCRIPT_DISPLAYRCQ33QDT4KCOM12COM_INSTANCE);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", PlayViewportListAnim__Q33QDT4SINT14SCRIPT_DISPLAYRCQ33QDT4KCOM12COM_INSTANCET1Q43QDT4SINT18VIEWPORT_LIST_ANIM14ANIM_LAYOUT_FXT3i);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", StopViewportListAnim__Q33QDT4SINT14SCRIPT_DISPLAY);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", UpdateViewportListAnim__Q33QDT4SINT14SCRIPT_DISPLAY);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", COM_Init__Q33QDT4SINT14SCRIPT_DISPLAYPQ33QDT4KCOM16CLASS_DESCRIPTOR);

void* QDT::SINT::SCRIPT_DISPLAY::EM_Construct(void* memory, void*, void*)
{
    return new (memory) SCRIPT_DISPLAY();
}

void QDT::SINT::SCRIPT_DISPLAY::EM_Destruct(void* memory, void*, void*)
{
    static_cast<SCRIPT_DISPLAY*>(memory)->~SCRIPT_DISPLAY();
}

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_SetViewportList__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_GetViewportList__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_PlayViewportListAnim__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_StopViewportListAnim__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_SetDefaultViewportBorderTexture__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_SetSimpleShadowObject__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_SetSimpleShadowHeight__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", EM_GetSimpleShadowHeight__Q33QDT4SINT14SCRIPT_DISPLAYPvN21);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", __static_initialization_and_destruction_0);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", _GLOBAL_$I$D__PROJECT_RD_QDT3_5PC_FINAL_ScriptInterface_Sources_Display_ScriptDisplay.cppJsbaaa);

INCLUDE_ASM("asm/nonmatchings/ScriptInterface/ScriptDisplay", _GLOBAL_$D$D__PROJECT_RD_QDT3_5PC_FINAL_ScriptInterface_Sources_Display_ScriptDisplay.cppiLcaaa);
