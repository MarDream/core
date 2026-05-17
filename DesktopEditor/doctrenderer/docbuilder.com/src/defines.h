#pragma once
#ifdef _WIN64
#pragma comment(lib, "../../../../build/lib/win_64/doctrenderer.lib")
#else
#pragma comment(lib, "../../../../build/lib/win_32/doctrenderer.lib")
#endif

#define I_DOCBUILDER_VALUE_HEADER \
[object, uuid("2637FDFA-8473-4CB8-B90B-C23CB949D009"), dual, pointer_default(unique)] 

#define I_DOCBUILDER_CONTEXT_SCOPE_HEADER \
[object, uuid("656ae95c-ae91-4dc0-88bf-0b770fc2d552"), dual, pointer_default(unique)] 

#define I_DOCBUILDER_CONTEXT_HEADER \
[object, uuid("0416975a-65c3-4015-85e4-55d9dafec5fc"), dual, pointer_default(unique)] 

#define I_DOCBUILDER_HEADER \
[object, uuid("0C07B7E7-86A4-42E1-8E42-2FA961992E0F"), dual, pointer_default(unique)] 


#define C_DOCBUILDER_VALUE_HEADER \
[coclass, uuid("85C41585-25D7-40F1-9CC6-FA17052650F4"), threading(apartment), vi_progid("OMNIDOC.BuilderValue"), progid("OMNIDOC.BuilderValue.1"), version(1.0)]

#define C_DOCBUILDER_CONTEXT_SCOPE_HEADER \
[coclass, uuid("c54e2b15-ff5b-45a2-aa15-89a02605c30c"), threading(apartment), vi_progid("OMNIDOC.BuilderContextScope"), progid("OMNIDOC.BuilderContextScope.1"), version(1.0)]

#define C_DOCBUILDER_CONTEXT_HEADER \
[coclass, uuid("299250bb-16c2-4ab4-8a49-a0c350d66bb5"), threading(apartment), vi_progid("OMNIDOC.BuilderContext"), progid("OMNIDOC.BuilderContext.1"), version(1.0)]

#define C_DOCBUILDER_HEADER \
[coclass, uuid("9BF69F3C-1506-41B9-B8EE-2839948C02E9"), threading(apartment), vi_progid("OMNIDOC.Builder"), progid("OMNIDOC.Builder.1"), version(1.0)]

#define I_DOCBUILDER_VALUE IOMNIDOCDocBuilderValue
#define I_DOCBUILDER_CONTEXT_SCOPE IOMNIDOCDocBuilderContextScope
#define I_DOCBUILDER_CONTEXT IOMNIDOCDocBuilderContext
#define I_DOCBUILDER IOMNIDOCDocBuilder

#define C_DOCBUILDER_VALUE COMNIDOCDocBuilderValue
#define C_DOCBUILDER_CONTEXT_SCOPE COMNIDOCDocBuilderContextScope
#define C_DOCBUILDER_CONTEXT COMNIDOCDocBuilderContext
#define C_DOCBUILDER COMNIDOCDocBuilder