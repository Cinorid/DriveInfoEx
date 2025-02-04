#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
//
[assembly:AssemblyTitleAttribute("DriveInfoEx")];
[assembly:AssemblyDescriptionAttribute("Lists the Hard drive(s) information")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("Decebal Mihailescu")];
[assembly: AssemblyCopyrightAttribute("Copyright � Decebal Mihailescu 2008")]
[assembly:AssemblyProductAttribute("DriveInfoEx")];
[assembly:AssemblyCultureAttribute("")];
[assembly: AssemblyTrademarkAttribute("Decebal Mihailescu")]

//
// Version information for an assembly consists of the following four values:
//
//      Major Version
//      Minor Version
//      Build Number
//      Revision
//
// You can specify all the value or you can default the Revision and Build Numbers
// by using the '*' as shown below:

[assembly:AssemblyVersionAttribute("1.1.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];

[assembly:SecurityPermission(SecurityAction::RequestMinimum, UnmanagedCode = true)];
