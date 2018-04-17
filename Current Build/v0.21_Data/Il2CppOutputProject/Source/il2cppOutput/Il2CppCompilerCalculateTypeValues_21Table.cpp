#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t2527703222;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.ComponentModel.AttributeCollection/AttributeEntry[]
struct AttributeEntryU5BU5D_t1277003190;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1347122889;
// System.Configuration.IConfigurationSystem
struct IConfigurationSystem_t1184708823;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t2806961458;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Net.Cache.RequestCache
struct RequestCache_t3669488992;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t587568667;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3075152201;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t2786897858;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1151641153;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t687896682;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Diagnostics.EventLogImpl
struct EventLogImpl_t2387799702;
// System.Diagnostics.SystemDiagnosticsSection
struct SystemDiagnosticsSection_t3552941008;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.Diagnostics.TraceFilter
struct TraceFilter_t4153521180;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t120437468;
// System.Diagnostics.EventLog
struct EventLog_t3406173750;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2114213153;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DIAGNOSTICSCONFIGURATIONHANDLER_T2074484573_H
#define DIAGNOSTICSCONFIGURATIONHANDLER_T2074484573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler
struct  DiagnosticsConfigurationHandler_t2074484573  : public RuntimeObject
{
public:
	// System.Diagnostics.TraceImplSettings System.Diagnostics.DiagnosticsConfigurationHandler::configValues
	TraceImplSettings_t2527703222 * ___configValues_0;
	// System.Collections.IDictionary System.Diagnostics.DiagnosticsConfigurationHandler::elementHandlers
	RuntimeObject* ___elementHandlers_1;

public:
	inline static int32_t get_offset_of_configValues_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t2074484573, ___configValues_0)); }
	inline TraceImplSettings_t2527703222 * get_configValues_0() const { return ___configValues_0; }
	inline TraceImplSettings_t2527703222 ** get_address_of_configValues_0() { return &___configValues_0; }
	inline void set_configValues_0(TraceImplSettings_t2527703222 * value)
	{
		___configValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___configValues_0), value);
	}

	inline static int32_t get_offset_of_elementHandlers_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t2074484573, ___elementHandlers_1)); }
	inline RuntimeObject* get_elementHandlers_1() const { return ___elementHandlers_1; }
	inline RuntimeObject** get_address_of_elementHandlers_1() { return &___elementHandlers_1; }
	inline void set_elementHandlers_1(RuntimeObject* value)
	{
		___elementHandlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementHandlers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATIONHANDLER_T2074484573_H
#ifndef INSTANCE_T2576538215_H
#define INSTANCE_T2576538215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory/Instance
struct  Instance_t2576538215  : public RuntimeObject
{
public:

public:
};

struct Instance_t2576538215_StaticFields
{
public:
	// System.Boolean System.Diagnostics.ConfigurationManagerInternalFactory/Instance::SetConfigurationSystemInProgress
	bool ___SetConfigurationSystemInProgress_0;

public:
	inline static int32_t get_offset_of_SetConfigurationSystemInProgress_0() { return static_cast<int32_t>(offsetof(Instance_t2576538215_StaticFields, ___SetConfigurationSystemInProgress_0)); }
	inline bool get_SetConfigurationSystemInProgress_0() const { return ___SetConfigurationSystemInProgress_0; }
	inline bool* get_address_of_SetConfigurationSystemInProgress_0() { return &___SetConfigurationSystemInProgress_0; }
	inline void set_SetConfigurationSystemInProgress_0(bool value)
	{
		___SetConfigurationSystemInProgress_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCE_T2576538215_H
#ifndef TRACEUTILS_T3440840616_H
#define TRACEUTILS_T3440840616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceUtils
struct  TraceUtils_t3440840616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEUTILS_T3440840616_H
#ifndef CONFIGURATIONMANAGERINTERNALFACTORY_T3227791327_H
#define CONFIGURATIONMANAGERINTERNALFACTORY_T3227791327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory
struct  ConfigurationManagerInternalFactory_t3227791327  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONMANAGERINTERNALFACTORY_T3227791327_H
#ifndef EVENTLOGIMPL_T2387799702_H
#define EVENTLOGIMPL_T2387799702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogImpl
struct  EventLogImpl_t2387799702  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGIMPL_T2387799702_H
#ifndef ARRAYSUBSETENUMERATOR_T1645376885_H
#define ARRAYSUBSETENUMERATOR_T1645376885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArraySubsetEnumerator
struct  ArraySubsetEnumerator_t1645376885  : public RuntimeObject
{
public:
	// System.Array System.ComponentModel.ArraySubsetEnumerator::array
	RuntimeArray * ___array_0;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::total
	int32_t ___total_1;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t1645376885, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_total_1() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t1645376885, ___total_1)); }
	inline int32_t get_total_1() const { return ___total_1; }
	inline int32_t* get_address_of_total_1() { return &___total_1; }
	inline void set_total_1(int32_t value)
	{
		___total_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t1645376885, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSUBSETENUMERATOR_T1645376885_H
#ifndef ATTRIBUTECOLLECTION_T4221220734_H
#define ATTRIBUTECOLLECTION_T4221220734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t4221220734  : public RuntimeObject
{
public:
	// System.Attribute[] System.ComponentModel.AttributeCollection::_attributes
	AttributeU5BU5D_t1575011174* ____attributes_2;
	// System.ComponentModel.AttributeCollection/AttributeEntry[] System.ComponentModel.AttributeCollection::_foundAttributeTypes
	AttributeEntryU5BU5D_t1277003190* ____foundAttributeTypes_4;
	// System.Int32 System.ComponentModel.AttributeCollection::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ____attributes_2)); }
	inline AttributeU5BU5D_t1575011174* get__attributes_2() const { return ____attributes_2; }
	inline AttributeU5BU5D_t1575011174** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(AttributeU5BU5D_t1575011174* value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_2), value);
	}

	inline static int32_t get_offset_of__foundAttributeTypes_4() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ____foundAttributeTypes_4)); }
	inline AttributeEntryU5BU5D_t1277003190* get__foundAttributeTypes_4() const { return ____foundAttributeTypes_4; }
	inline AttributeEntryU5BU5D_t1277003190** get_address_of__foundAttributeTypes_4() { return &____foundAttributeTypes_4; }
	inline void set__foundAttributeTypes_4(AttributeEntryU5BU5D_t1277003190* value)
	{
		____foundAttributeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____foundAttributeTypes_4), value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct AttributeCollection_t4221220734_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t4221220734 * ___Empty_0;
	// System.Collections.Hashtable System.ComponentModel.AttributeCollection::_defaultAttributes
	Hashtable_t1853889766 * ____defaultAttributes_1;
	// System.Object System.ComponentModel.AttributeCollection::internalSyncObject
	RuntimeObject * ___internalSyncObject_3;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ___Empty_0)); }
	inline AttributeCollection_t4221220734 * get_Empty_0() const { return ___Empty_0; }
	inline AttributeCollection_t4221220734 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(AttributeCollection_t4221220734 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}

	inline static int32_t get_offset_of__defaultAttributes_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ____defaultAttributes_1)); }
	inline Hashtable_t1853889766 * get__defaultAttributes_1() const { return ____defaultAttributes_1; }
	inline Hashtable_t1853889766 ** get_address_of__defaultAttributes_1() { return &____defaultAttributes_1; }
	inline void set__defaultAttributes_1(Hashtable_t1853889766 * value)
	{
		____defaultAttributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultAttributes_1), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_3() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ___internalSyncObject_3)); }
	inline RuntimeObject * get_internalSyncObject_3() const { return ___internalSyncObject_3; }
	inline RuntimeObject ** get_address_of_internalSyncObject_3() { return &___internalSyncObject_3; }
	inline void set_internalSyncObject_3(RuntimeObject * value)
	{
		___internalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T4221220734_H
#ifndef EVENTLOGINSTALLER_T17168626_H
#define EVENTLOGINSTALLER_T17168626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogInstaller
struct  EventLogInstaller_t17168626  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGINSTALLER_T17168626_H
#ifndef TRACEIMPLSETTINGS_T2527703222_H
#define TRACEIMPLSETTINGS_T2527703222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t2527703222  : public RuntimeObject
{
public:
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_0;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t1347122889 * ___Listeners_2;

public:
	inline static int32_t get_offset_of_AutoFlush_0() { return static_cast<int32_t>(offsetof(TraceImplSettings_t2527703222, ___AutoFlush_0)); }
	inline bool get_AutoFlush_0() const { return ___AutoFlush_0; }
	inline bool* get_address_of_AutoFlush_0() { return &___AutoFlush_0; }
	inline void set_AutoFlush_0(bool value)
	{
		___AutoFlush_0 = value;
	}

	inline static int32_t get_offset_of_IndentSize_1() { return static_cast<int32_t>(offsetof(TraceImplSettings_t2527703222, ___IndentSize_1)); }
	inline int32_t get_IndentSize_1() const { return ___IndentSize_1; }
	inline int32_t* get_address_of_IndentSize_1() { return &___IndentSize_1; }
	inline void set_IndentSize_1(int32_t value)
	{
		___IndentSize_1 = value;
	}

	inline static int32_t get_offset_of_Listeners_2() { return static_cast<int32_t>(offsetof(TraceImplSettings_t2527703222, ___Listeners_2)); }
	inline TraceListenerCollection_t1347122889 * get_Listeners_2() const { return ___Listeners_2; }
	inline TraceListenerCollection_t1347122889 ** get_address_of_Listeners_2() { return &___Listeners_2; }
	inline void set_Listeners_2(TraceListenerCollection_t1347122889 * value)
	{
		___Listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___Listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEIMPLSETTINGS_T2527703222_H
#ifndef CONFIGURATIONSETTINGS_T822951835_H
#define CONFIGURATIONSETTINGS_T822951835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSettings
struct  ConfigurationSettings_t822951835  : public RuntimeObject
{
public:

public:
};

struct ConfigurationSettings_t822951835_StaticFields
{
public:
	// System.Configuration.IConfigurationSystem System.Configuration.ConfigurationSettings::config
	RuntimeObject* ___config_0;
	// System.Object System.Configuration.ConfigurationSettings::lockobj
	RuntimeObject * ___lockobj_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t822951835_StaticFields, ___config_0)); }
	inline RuntimeObject* get_config_0() const { return ___config_0; }
	inline RuntimeObject** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(RuntimeObject* value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t822951835_StaticFields, ___lockobj_1)); }
	inline RuntimeObject * get_lockobj_1() const { return ___lockobj_1; }
	inline RuntimeObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(RuntimeObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSETTINGS_T822951835_H
#ifndef TRACELISTENERCOLLECTION_T1347122889_H
#define TRACELISTENERCOLLECTION_T1347122889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListenerCollection
struct  TraceListenerCollection_t1347122889  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Diagnostics.TraceListenerCollection::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(TraceListenerCollection_t1347122889, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENERCOLLECTION_T1347122889_H
#ifndef DEFAULTCONFIG_T1013547162_H
#define DEFAULTCONFIG_T1013547162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DefaultConfig
struct  DefaultConfig_t1013547162  : public RuntimeObject
{
public:

public:
};

struct DefaultConfig_t1013547162_StaticFields
{
public:
	// System.Configuration.DefaultConfig System.Configuration.DefaultConfig::instance
	DefaultConfig_t1013547162 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DefaultConfig_t1013547162_StaticFields, ___instance_0)); }
	inline DefaultConfig_t1013547162 * get_instance_0() const { return ___instance_0; }
	inline DefaultConfig_t1013547162 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DefaultConfig_t1013547162 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCONFIG_T1013547162_H
#ifndef SWITCH_T4228844028_H
#define SWITCH_T4228844028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t4228844028  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_0;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_1;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_2;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_3;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(Switch_t4228844028, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(Switch_t4228844028, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_switchValueString_2() { return static_cast<int32_t>(offsetof(Switch_t4228844028, ___switchValueString_2)); }
	inline String_t* get_switchValueString_2() const { return ___switchValueString_2; }
	inline String_t** get_address_of_switchValueString_2() { return &___switchValueString_2; }
	inline void set_switchValueString_2(String_t* value)
	{
		___switchValueString_2 = value;
		Il2CppCodeGenWriteBarrier((&___switchValueString_2), value);
	}

	inline static int32_t get_offset_of_defaultValue_3() { return static_cast<int32_t>(offsetof(Switch_t4228844028, ___defaultValue_3)); }
	inline String_t* get_defaultValue_3() const { return ___defaultValue_3; }
	inline String_t** get_address_of_defaultValue_3() { return &___defaultValue_3; }
	inline void set_defaultValue_3(String_t* value)
	{
		___defaultValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_3), value);
	}
};

struct Switch_t4228844028_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t2806961458 * ___switches_4;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_5;

public:
	inline static int32_t get_offset_of_switches_4() { return static_cast<int32_t>(offsetof(Switch_t4228844028_StaticFields, ___switches_4)); }
	inline List_1_t2806961458 * get_switches_4() const { return ___switches_4; }
	inline List_1_t2806961458 ** get_address_of_switches_4() { return &___switches_4; }
	inline void set_switches_4(List_1_t2806961458 * value)
	{
		___switches_4 = value;
		Il2CppCodeGenWriteBarrier((&___switches_4), value);
	}

	inline static int32_t get_offset_of_s_LastCollectionCount_5() { return static_cast<int32_t>(offsetof(Switch_t4228844028_StaticFields, ___s_LastCollectionCount_5)); }
	inline int32_t get_s_LastCollectionCount_5() const { return ___s_LastCollectionCount_5; }
	inline int32_t* get_address_of_s_LastCollectionCount_5() { return &___s_LastCollectionCount_5; }
	inline void set_s_LastCollectionCount_5(int32_t value)
	{
		___s_LastCollectionCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T4228844028_H
#ifndef TRACEFILTER_T4153521180_H
#define TRACEFILTER_T4153521180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceFilter
struct  TraceFilter_t4153521180  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceFilter::initializeData
	String_t* ___initializeData_0;

public:
	inline static int32_t get_offset_of_initializeData_0() { return static_cast<int32_t>(offsetof(TraceFilter_t4153521180, ___initializeData_0)); }
	inline String_t* get_initializeData_0() const { return ___initializeData_0; }
	inline String_t** get_address_of_initializeData_0() { return &___initializeData_0; }
	inline void set_initializeData_0(String_t* value)
	{
		___initializeData_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEFILTER_T4153521180_H
#ifndef REQUESTCACHEVALIDATOR_T587568667_H
#define REQUESTCACHEVALIDATOR_T587568667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t587568667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T587568667_H
#ifndef REQUESTCACHE_T3669488992_H
#define REQUESTCACHE_T3669488992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t3669488992  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t3669488992_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t3528271667* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t3669488992_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t3528271667* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t3528271667** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t3528271667* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T3669488992_H
#ifndef REQUESTCACHEBINDING_T2614858269_H
#define REQUESTCACHEBINDING_T2614858269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t2614858269  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t3669488992 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t587568667 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_RequestCache_0)); }
	inline RequestCache_t3669488992 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t3669488992 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t3669488992 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t587568667 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t587568667 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t587568667 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T2614858269_H
#ifndef PRIVILEGEDCONFIGURATIONMANAGER_T177498182_H
#define PRIVILEGEDCONFIGURATIONMANAGER_T177498182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PrivilegedConfigurationManager
struct  PrivilegedConfigurationManager_t177498182  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVILEGEDCONFIGURATIONMANAGER_T177498182_H
#ifndef REQUESTCACHEPROTOCOL_T3614465628_H
#define REQUESTCACHEPROTOCOL_T3614465628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t3614465628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T3614465628_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef CONNECTIONMANAGEMENTDATA_T2003128658_H
#define CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3075152201 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_7)); }
	inline Configuration_t2529364143 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2529364143 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2529364143 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_12)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___saveContext_14)); }
	inline SaveContext_t3075152201 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3075152201 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3075152201 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
#ifndef DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#define DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySectionInternal
struct  DefaultProxySectionInternal_t3889414525  : public RuntimeObject
{
public:
	// System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::webProxy
	RuntimeObject* ___webProxy_0;

public:
	inline static int32_t get_offset_of_webProxy_0() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525, ___webProxy_0)); }
	inline RuntimeObject* get_webProxy_0() const { return ___webProxy_0; }
	inline RuntimeObject** get_address_of_webProxy_0() { return &___webProxy_0; }
	inline void set_webProxy_0(RuntimeObject* value)
	{
		___webProxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___webProxy_0), value);
	}
};

struct DefaultProxySectionInternal_t3889414525_StaticFields
{
public:
	// System.Object System.Net.Configuration.DefaultProxySectionInternal::classSyncObject
	RuntimeObject * ___classSyncObject_1;

public:
	inline static int32_t get_offset_of_classSyncObject_1() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525_StaticFields, ___classSyncObject_1)); }
	inline RuntimeObject * get_classSyncObject_1() const { return ___classSyncObject_1; }
	inline RuntimeObject ** get_address_of_classSyncObject_1() { return &___classSyncObject_1; }
	inline void set_classSyncObject_1(RuntimeObject * value)
	{
		___classSyncObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___classSyncObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef CONFIGURATIONSECTIONGROUP_T4179402520_H
#define CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t4179402520  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t2786897858 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1151641153 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t2529364143 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t687896682 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___sections_0)); }
	inline ConfigurationSectionCollection_t2786897858 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t2786897858 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t2786897858 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1151641153 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1151641153 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1151641153 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___config_2)); }
	inline Configuration_t2529364143 * get_config_2() const { return ___config_2; }
	inline Configuration_t2529364143 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t2529364143 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___group_3)); }
	inline SectionGroupInfo_t687896682 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t687896682 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t687896682 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef PERFCOUNTERSECTION_T3884640147_H
#define PERFCOUNTERSECTION_T3884640147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.PerfCounterSection
struct  PerfCounterSection_t3884640147  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerfCounterSection_t3884640147_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.PerfCounterSection::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.PerfCounterSection::_propFileMappingSize
	ConfigurationProperty_t3590861854 * ____propFileMappingSize_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(PerfCounterSection_t3884640147_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propFileMappingSize_16() { return static_cast<int32_t>(offsetof(PerfCounterSection_t3884640147_StaticFields, ____propFileMappingSize_16)); }
	inline ConfigurationProperty_t3590861854 * get__propFileMappingSize_16() const { return ____propFileMappingSize_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propFileMappingSize_16() { return &____propFileMappingSize_16; }
	inline void set__propFileMappingSize_16(ConfigurationProperty_t3590861854 * value)
	{
		____propFileMappingSize_16 = value;
		Il2CppCodeGenWriteBarrier((&____propFileMappingSize_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFCOUNTERSECTION_T3884640147_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t874390736 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t874390736 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef SWITCHELEMENT_T1208244899_H
#define SWITCHELEMENT_T1208244899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElement
struct  SwitchElement_t1208244899  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.Hashtable System.Diagnostics.SwitchElement::_attributes
	Hashtable_t1853889766 * ____attributes_18;

public:
	inline static int32_t get_offset_of__attributes_18() { return static_cast<int32_t>(offsetof(SwitchElement_t1208244899, ____attributes_18)); }
	inline Hashtable_t1853889766 * get__attributes_18() const { return ____attributes_18; }
	inline Hashtable_t1853889766 ** get_address_of__attributes_18() { return &____attributes_18; }
	inline void set__attributes_18(Hashtable_t1853889766 * value)
	{
		____attributes_18 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_18), value);
	}
};

struct SwitchElement_t1208244899_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SwitchElement::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propName
	ConfigurationProperty_t3590861854 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propValue
	ConfigurationProperty_t3590861854 * ____propValue_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SwitchElement_t1208244899_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SwitchElement_t1208244899_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t3590861854 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t3590861854 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propValue_17() { return static_cast<int32_t>(offsetof(SwitchElement_t1208244899_StaticFields, ____propValue_17)); }
	inline ConfigurationProperty_t3590861854 * get__propValue_17() const { return ____propValue_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propValue_17() { return &____propValue_17; }
	inline void set__propValue_17(ConfigurationProperty_t3590861854 * value)
	{
		____propValue_17 = value;
		Il2CppCodeGenWriteBarrier((&____propValue_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENT_T1208244899_H
#ifndef SWITCHLEVELATTRIBUTE_T1978904033_H
#define SWITCHLEVELATTRIBUTE_T1978904033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchLevelAttribute
struct  SwitchLevelAttribute_t1978904033  : public Attribute_t861562559
{
public:
	// System.Type System.Diagnostics.SwitchLevelAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SwitchLevelAttribute_t1978904033, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHLEVELATTRIBUTE_T1978904033_H
#ifndef SOURCEELEMENT_T572173626_H
#define SOURCEELEMENT_T572173626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElement
struct  SourceElement_t572173626  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.Hashtable System.Diagnostics.SourceElement::_attributes
	Hashtable_t1853889766 * ____attributes_21;

public:
	inline static int32_t get_offset_of__attributes_21() { return static_cast<int32_t>(offsetof(SourceElement_t572173626, ____attributes_21)); }
	inline Hashtable_t1853889766 * get__attributes_21() const { return ____attributes_21; }
	inline Hashtable_t1853889766 ** get_address_of__attributes_21() { return &____attributes_21; }
	inline void set__attributes_21(Hashtable_t1853889766 * value)
	{
		____attributes_21 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_21), value);
	}
};

struct SourceElement_t572173626_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SourceElement::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propName
	ConfigurationProperty_t3590861854 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchName
	ConfigurationProperty_t3590861854 * ____propSwitchName_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchValue
	ConfigurationProperty_t3590861854 * ____propSwitchValue_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchType
	ConfigurationProperty_t3590861854 * ____propSwitchType_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propListeners
	ConfigurationProperty_t3590861854 * ____propListeners_20;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t3590861854 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t3590861854 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propSwitchName_17() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____propSwitchName_17)); }
	inline ConfigurationProperty_t3590861854 * get__propSwitchName_17() const { return ____propSwitchName_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSwitchName_17() { return &____propSwitchName_17; }
	inline void set__propSwitchName_17(ConfigurationProperty_t3590861854 * value)
	{
		____propSwitchName_17 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchName_17), value);
	}

	inline static int32_t get_offset_of__propSwitchValue_18() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____propSwitchValue_18)); }
	inline ConfigurationProperty_t3590861854 * get__propSwitchValue_18() const { return ____propSwitchValue_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSwitchValue_18() { return &____propSwitchValue_18; }
	inline void set__propSwitchValue_18(ConfigurationProperty_t3590861854 * value)
	{
		____propSwitchValue_18 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchValue_18), value);
	}

	inline static int32_t get_offset_of__propSwitchType_19() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____propSwitchType_19)); }
	inline ConfigurationProperty_t3590861854 * get__propSwitchType_19() const { return ____propSwitchType_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSwitchType_19() { return &____propSwitchType_19; }
	inline void set__propSwitchType_19(ConfigurationProperty_t3590861854 * value)
	{
		____propSwitchType_19 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchType_19), value);
	}

	inline static int32_t get_offset_of__propListeners_20() { return static_cast<int32_t>(offsetof(SourceElement_t572173626_StaticFields, ____propListeners_20)); }
	inline ConfigurationProperty_t3590861854 * get__propListeners_20() const { return ____propListeners_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propListeners_20() { return &____propListeners_20; }
	inline void set__propListeners_20(ConfigurationProperty_t3590861854 * value)
	{
		____propListeners_20 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENT_T572173626_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef TRACESECTION_T4243885952_H
#define TRACESECTION_T4243885952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSection
struct  TraceSection_t4243885952  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct TraceSection_t4243885952_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TraceSection::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propListeners
	ConfigurationProperty_t3590861854 * ____propListeners_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propAutoFlush
	ConfigurationProperty_t3590861854 * ____propAutoFlush_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propIndentSize
	ConfigurationProperty_t3590861854 * ____propIndentSize_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propUseGlobalLock
	ConfigurationProperty_t3590861854 * ____propUseGlobalLock_19;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(TraceSection_t4243885952_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propListeners_16() { return static_cast<int32_t>(offsetof(TraceSection_t4243885952_StaticFields, ____propListeners_16)); }
	inline ConfigurationProperty_t3590861854 * get__propListeners_16() const { return ____propListeners_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propListeners_16() { return &____propListeners_16; }
	inline void set__propListeners_16(ConfigurationProperty_t3590861854 * value)
	{
		____propListeners_16 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_16), value);
	}

	inline static int32_t get_offset_of__propAutoFlush_17() { return static_cast<int32_t>(offsetof(TraceSection_t4243885952_StaticFields, ____propAutoFlush_17)); }
	inline ConfigurationProperty_t3590861854 * get__propAutoFlush_17() const { return ____propAutoFlush_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propAutoFlush_17() { return &____propAutoFlush_17; }
	inline void set__propAutoFlush_17(ConfigurationProperty_t3590861854 * value)
	{
		____propAutoFlush_17 = value;
		Il2CppCodeGenWriteBarrier((&____propAutoFlush_17), value);
	}

	inline static int32_t get_offset_of__propIndentSize_18() { return static_cast<int32_t>(offsetof(TraceSection_t4243885952_StaticFields, ____propIndentSize_18)); }
	inline ConfigurationProperty_t3590861854 * get__propIndentSize_18() const { return ____propIndentSize_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propIndentSize_18() { return &____propIndentSize_18; }
	inline void set__propIndentSize_18(ConfigurationProperty_t3590861854 * value)
	{
		____propIndentSize_18 = value;
		Il2CppCodeGenWriteBarrier((&____propIndentSize_18), value);
	}

	inline static int32_t get_offset_of__propUseGlobalLock_19() { return static_cast<int32_t>(offsetof(TraceSection_t4243885952_StaticFields, ____propUseGlobalLock_19)); }
	inline ConfigurationProperty_t3590861854 * get__propUseGlobalLock_19() const { return ____propUseGlobalLock_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propUseGlobalLock_19() { return &____propUseGlobalLock_19; }
	inline void set__propUseGlobalLock_19(ConfigurationProperty_t3590861854 * value)
	{
		____propUseGlobalLock_19 = value;
		Il2CppCodeGenWriteBarrier((&____propUseGlobalLock_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESECTION_T4243885952_H
#ifndef EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3578759089_H
#define EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3578759089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct  ExcludeFromCodeCoverageAttribute_t3578759089  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3578759089_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#define CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t446763386  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t2718874744 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t2718874744 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t2718874744 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___list_15)); }
	inline ArrayList_t2718874744 * get_list_15() const { return ___list_15; }
	inline ArrayList_t2718874744 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t2718874744 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removed_16)); }
	inline ArrayList_t2718874744 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t2718874744 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t2718874744 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inherited_17)); }
	inline ArrayList_t2718874744 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t2718874744 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t2718874744 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifndef BROWSABLEATTRIBUTE_T3407396667_H
#define BROWSABLEATTRIBUTE_T3407396667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3407396667  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_3;

public:
	inline static int32_t get_offset_of_browsable_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667, ___browsable_3)); }
	inline bool get_browsable_3() const { return ___browsable_3; }
	inline bool* get_address_of_browsable_3() { return &___browsable_3; }
	inline void set_browsable_3(bool value)
	{
		___browsable_3 = value;
	}
};

struct BrowsableAttribute_t3407396667_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3407396667 * ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3407396667 * ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3407396667 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Yes_0)); }
	inline BrowsableAttribute_t3407396667 * get_Yes_0() const { return ___Yes_0; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(BrowsableAttribute_t3407396667 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___No_1)); }
	inline BrowsableAttribute_t3407396667 * get_No_1() const { return ___No_1; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(BrowsableAttribute_t3407396667 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Default_2)); }
	inline BrowsableAttribute_t3407396667 * get_Default_2() const { return ___Default_2; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(BrowsableAttribute_t3407396667 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3407396667_H
#ifndef ATTRIBUTEENTRY_T1001010863_H
#define ATTRIBUTEENTRY_T1001010863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection/AttributeEntry
struct  AttributeEntry_t1001010863 
{
public:
	// System.Type System.ComponentModel.AttributeCollection/AttributeEntry::type
	Type_t * ___type_0;
	// System.Int32 System.ComponentModel.AttributeCollection/AttributeEntry::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AttributeEntry_t1001010863, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(AttributeEntry_t1001010863, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1001010863_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1001010863_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
#endif // ATTRIBUTEENTRY_T1001010863_H
#ifndef COMPONENTCOLLECTION_T1445440302_H
#define COMPONENTCOLLECTION_T1445440302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1445440302  : public ReadOnlyCollectionBase_t1836743899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1445440302_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t1108123056 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___events_3)); }
	inline EventHandlerList_t1108123056 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t1108123056 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t3620823400_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t3620823400_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef TYPEDELEMENT_T2581589637_H
#define TYPEDELEMENT_T2581589637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TypedElement
struct  TypedElement_t2581589637  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TypedElement::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_17;
	// System.Object System.Diagnostics.TypedElement::_runtimeObject
	RuntimeObject * ____runtimeObject_18;
	// System.Type System.Diagnostics.TypedElement::_baseType
	Type_t * ____baseType_19;

public:
	inline static int32_t get_offset_of__properties_17() { return static_cast<int32_t>(offsetof(TypedElement_t2581589637, ____properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_17() const { return ____properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_17() { return &____properties_17; }
	inline void set__properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_17 = value;
		Il2CppCodeGenWriteBarrier((&____properties_17), value);
	}

	inline static int32_t get_offset_of__runtimeObject_18() { return static_cast<int32_t>(offsetof(TypedElement_t2581589637, ____runtimeObject_18)); }
	inline RuntimeObject * get__runtimeObject_18() const { return ____runtimeObject_18; }
	inline RuntimeObject ** get_address_of__runtimeObject_18() { return &____runtimeObject_18; }
	inline void set__runtimeObject_18(RuntimeObject * value)
	{
		____runtimeObject_18 = value;
		Il2CppCodeGenWriteBarrier((&____runtimeObject_18), value);
	}

	inline static int32_t get_offset_of__baseType_19() { return static_cast<int32_t>(offsetof(TypedElement_t2581589637, ____baseType_19)); }
	inline Type_t * get__baseType_19() const { return ____baseType_19; }
	inline Type_t ** get_address_of__baseType_19() { return &____baseType_19; }
	inline void set__baseType_19(Type_t * value)
	{
		____baseType_19 = value;
		Il2CppCodeGenWriteBarrier((&____baseType_19), value);
	}
};

struct TypedElement_t2581589637_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propTypeName
	ConfigurationProperty_t3590861854 * ____propTypeName_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propInitData
	ConfigurationProperty_t3590861854 * ____propInitData_16;

public:
	inline static int32_t get_offset_of__propTypeName_15() { return static_cast<int32_t>(offsetof(TypedElement_t2581589637_StaticFields, ____propTypeName_15)); }
	inline ConfigurationProperty_t3590861854 * get__propTypeName_15() const { return ____propTypeName_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propTypeName_15() { return &____propTypeName_15; }
	inline void set__propTypeName_15(ConfigurationProperty_t3590861854 * value)
	{
		____propTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____propTypeName_15), value);
	}

	inline static int32_t get_offset_of__propInitData_16() { return static_cast<int32_t>(offsetof(TypedElement_t2581589637_StaticFields, ____propInitData_16)); }
	inline ConfigurationProperty_t3590861854 * get__propInitData_16() const { return ____propInitData_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propInitData_16() { return &____propInitData_16; }
	inline void set__propInitData_16(ConfigurationProperty_t3590861854 * value)
	{
		____propInitData_16 = value;
		Il2CppCodeGenWriteBarrier((&____propInitData_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEMENT_T2581589637_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_15)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef WEBPROXYSCRIPTELEMENT_T477406598_H
#define WEBPROXYSCRIPTELEMENT_T477406598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t477406598  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebProxyScriptElement_t477406598_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t3590861854 * ___downloadTimeoutProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_15() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___downloadTimeoutProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_downloadTimeoutProp_15() const { return ___downloadTimeoutProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_downloadTimeoutProp_15() { return &___downloadTimeoutProp_15; }
	inline void set_downloadTimeoutProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___downloadTimeoutProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___downloadTimeoutProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXYSCRIPTELEMENT_T477406598_H
#ifndef PERFORMANCECOUNTERSELEMENT_T4093363992_H
#define PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4093363992  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerformanceCountersElement_t4093363992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_enabledProp_15() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___enabledProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_15() const { return ___enabledProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_15() { return &___enabledProp_15; }
	inline void set_enabledProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifndef PROXYELEMENT_T3214064751_H
#define PROXYELEMENT_T3214064751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t3214064751  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ProxyElement_t3214064751_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t3590861854 * ___autoDetectProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t3590861854 * ___bypassOnLocalProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t3590861854 * ___proxyAddressProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t3590861854 * ___scriptLocationProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t3590861854 * ___useSystemDefaultProp_20;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___autoDetectProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_autoDetectProp_16() const { return ___autoDetectProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_autoDetectProp_16() { return &___autoDetectProp_16; }
	inline void set_autoDetectProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___autoDetectProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_16), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___bypassOnLocalProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_bypassOnLocalProp_17() const { return ___bypassOnLocalProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassOnLocalProp_17() { return &___bypassOnLocalProp_17; }
	inline void set_bypassOnLocalProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___bypassOnLocalProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_17), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___proxyAddressProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_proxyAddressProp_18() const { return ___proxyAddressProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyAddressProp_18() { return &___proxyAddressProp_18; }
	inline void set_proxyAddressProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___proxyAddressProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_18), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_19() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___scriptLocationProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_scriptLocationProp_19() const { return ___scriptLocationProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_scriptLocationProp_19() { return &___scriptLocationProp_19; }
	inline void set_scriptLocationProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___scriptLocationProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_19), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_20() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___useSystemDefaultProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_useSystemDefaultProp_20() const { return ___useSystemDefaultProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useSystemDefaultProp_20() { return &___useSystemDefaultProp_20; }
	inline void set_useSystemDefaultProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___useSystemDefaultProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T3214064751_H
#ifndef ASSERTSECTION_T2347182250_H
#define ASSERTSECTION_T2347182250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.AssertSection
struct  AssertSection_t2347182250  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AssertSection_t2347182250_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.AssertSection::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propAssertUIEnabled
	ConfigurationProperty_t3590861854 * ____propAssertUIEnabled_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propLogFile
	ConfigurationProperty_t3590861854 * ____propLogFile_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(AssertSection_t2347182250_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propAssertUIEnabled_16() { return static_cast<int32_t>(offsetof(AssertSection_t2347182250_StaticFields, ____propAssertUIEnabled_16)); }
	inline ConfigurationProperty_t3590861854 * get__propAssertUIEnabled_16() const { return ____propAssertUIEnabled_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propAssertUIEnabled_16() { return &____propAssertUIEnabled_16; }
	inline void set__propAssertUIEnabled_16(ConfigurationProperty_t3590861854 * value)
	{
		____propAssertUIEnabled_16 = value;
		Il2CppCodeGenWriteBarrier((&____propAssertUIEnabled_16), value);
	}

	inline static int32_t get_offset_of__propLogFile_17() { return static_cast<int32_t>(offsetof(AssertSection_t2347182250_StaticFields, ____propLogFile_17)); }
	inline ConfigurationProperty_t3590861854 * get__propLogFile_17() const { return ____propLogFile_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propLogFile_17() { return &____propLogFile_17; }
	inline void set__propLogFile_17(ConfigurationProperty_t3590861854 * value)
	{
		____propLogFile_17 = value;
		Il2CppCodeGenWriteBarrier((&____propLogFile_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTSECTION_T2347182250_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#define CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t3857438253  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ConnectionManagementElement_t3857438253_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3590861854 * ___maxConnectionProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___maxConnectionProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maxConnectionProp_17() const { return ___maxConnectionProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maxConnectionProp_17() { return &___maxConnectionProp_17; }
	inline void set_maxConnectionProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maxConnectionProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifndef MODULEELEMENT_T3252950656_H
#define MODULEELEMENT_T3252950656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3252950656  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ModuleElement_t3252950656_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3252950656_H
#ifndef NETSECTIONGROUP_T3270122580_H
#define NETSECTIONGROUP_T3270122580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t3270122580  : public ConfigurationSectionGroup_t4179402520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T3270122580_H
#ifndef IPV6ELEMENT_T180053194_H
#define IPV6ELEMENT_T180053194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t180053194  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct Ipv6Element_t180053194_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_enabledProp_16() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___enabledProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_16() const { return ___enabledProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_16() { return &___enabledProp_16; }
	inline void set_enabledProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T180053194_H
#ifndef WEBREQUESTMODULEELEMENT_T1406085120_H
#define WEBREQUESTMODULEELEMENT_T1406085120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t1406085120  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebRequestModuleElement_t1406085120_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t3590861854 * ___prefixProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_prefixProp_16() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___prefixProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_prefixProp_16() const { return ___prefixProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_prefixProp_16() { return &___prefixProp_16; }
	inline void set_prefixProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___prefixProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___prefixProp_16), value);
	}

	inline static int32_t get_offset_of_typeProp_17() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___typeProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_17() const { return ___typeProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_17() { return &___typeProp_17; }
	inline void set_typeProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENT_T1406085120_H
#ifndef HTTPWEBREQUESTELEMENT_T2801692355_H
#define HTTPWEBREQUESTELEMENT_T2801692355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2801692355  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpWebRequestElement_t2801692355_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3590861854 * ___maximumErrorResponseLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3590861854 * ___maximumResponseHeadersLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3590861854 * ___maximumUnauthorizedUploadLengthProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3590861854 * ___useUnsafeHeaderParsingProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumErrorResponseLengthProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maximumErrorResponseLengthProp_15() const { return ___maximumErrorResponseLengthProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumErrorResponseLengthProp_15() { return &___maximumErrorResponseLengthProp_15; }
	inline void set_maximumErrorResponseLengthProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maximumErrorResponseLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_15), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumResponseHeadersLengthProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_maximumResponseHeadersLengthProp_16() const { return ___maximumResponseHeadersLengthProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumResponseHeadersLengthProp_16() { return &___maximumResponseHeadersLengthProp_16; }
	inline void set_maximumResponseHeadersLengthProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___maximumResponseHeadersLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_16), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumUnauthorizedUploadLengthProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maximumUnauthorizedUploadLengthProp_17() const { return ___maximumUnauthorizedUploadLengthProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumUnauthorizedUploadLengthProp_17() { return &___maximumUnauthorizedUploadLengthProp_17; }
	inline void set_maximumUnauthorizedUploadLengthProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maximumUnauthorizedUploadLengthProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_17), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___useUnsafeHeaderParsingProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_useUnsafeHeaderParsingProp_18() const { return ___useUnsafeHeaderParsingProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useUnsafeHeaderParsingProp_18() { return &___useUnsafeHeaderParsingProp_18; }
	inline void set_useUnsafeHeaderParsingProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___useUnsafeHeaderParsingProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_18), value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2801692355_H
#ifndef BOOLEANSWITCH_T440064918_H
#define BOOLEANSWITCH_T440064918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.BooleanSwitch
struct  BooleanSwitch_t440064918  : public Switch_t4228844028
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANSWITCH_T440064918_H
#ifndef SERVICEPOINTMANAGERELEMENT_T2768640361_H
#define SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t2768640361  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ServicePointManagerElement_t2768640361_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t3590861854 * ___checkCertificateNameProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t3590861854 * ___checkCertificateRevocationListProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t3590861854 * ___dnsRefreshTimeoutProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t3590861854 * ___enableDnsRoundRobinProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t3590861854 * ___expect100ContinueProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t3590861854 * ___useNagleAlgorithmProp_21;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_checkCertificateNameProp_16() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateNameProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateNameProp_16() const { return ___checkCertificateNameProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateNameProp_16() { return &___checkCertificateNameProp_16; }
	inline void set_checkCertificateNameProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateNameProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateNameProp_16), value);
	}

	inline static int32_t get_offset_of_checkCertificateRevocationListProp_17() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateRevocationListProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateRevocationListProp_17() const { return ___checkCertificateRevocationListProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateRevocationListProp_17() { return &___checkCertificateRevocationListProp_17; }
	inline void set_checkCertificateRevocationListProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateRevocationListProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateRevocationListProp_17), value);
	}

	inline static int32_t get_offset_of_dnsRefreshTimeoutProp_18() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___dnsRefreshTimeoutProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_dnsRefreshTimeoutProp_18() const { return ___dnsRefreshTimeoutProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_dnsRefreshTimeoutProp_18() { return &___dnsRefreshTimeoutProp_18; }
	inline void set_dnsRefreshTimeoutProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___dnsRefreshTimeoutProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___dnsRefreshTimeoutProp_18), value);
	}

	inline static int32_t get_offset_of_enableDnsRoundRobinProp_19() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___enableDnsRoundRobinProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_enableDnsRoundRobinProp_19() const { return ___enableDnsRoundRobinProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enableDnsRoundRobinProp_19() { return &___enableDnsRoundRobinProp_19; }
	inline void set_enableDnsRoundRobinProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___enableDnsRoundRobinProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___enableDnsRoundRobinProp_19), value);
	}

	inline static int32_t get_offset_of_expect100ContinueProp_20() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___expect100ContinueProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_expect100ContinueProp_20() const { return ___expect100ContinueProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_expect100ContinueProp_20() { return &___expect100ContinueProp_20; }
	inline void set_expect100ContinueProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___expect100ContinueProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___expect100ContinueProp_20), value);
	}

	inline static int32_t get_offset_of_useNagleAlgorithmProp_21() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___useNagleAlgorithmProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_useNagleAlgorithmProp_21() const { return ___useNagleAlgorithmProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useNagleAlgorithmProp_21() { return &___useNagleAlgorithmProp_21; }
	inline void set_useNagleAlgorithmProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___useNagleAlgorithmProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___useNagleAlgorithmProp_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifndef AUTHENTICATIONMODULEELEMENT_T2289740666_H
#define AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2289740666  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AuthenticationModuleElement_t2289740666_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifndef SOCKADDR_T371844119_H
#define SOCKADDR_T371844119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t371844119 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T371844119_H
#ifndef SOCKADDR_IN_T1317910171_H
#define SOCKADDR_IN_T1317910171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t1317910171 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T1317910171_H
#ifndef SOCKADDR_DL_T1317779094_H
#define SOCKADDR_DL_T1317779094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t1317779094 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t4116647657* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_data_7)); }
	inline ByteU5BU5D_t4116647657* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t4116647657* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
#endif // SOCKADDR_DL_T1317779094_H
#ifndef BYPASSELEMENT_T2358616601_H
#define BYPASSELEMENT_T2358616601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t2358616601  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct BypassElement_t2358616601_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T2358616601_H
#ifndef SOCKETELEMENT_T3329874080_H
#define SOCKETELEMENT_T3329874080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t3329874080  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct SocketElement_t3329874080_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForAcceptProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForConnectProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_16() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForAcceptProp_16() const { return ___alwaysUseCompletionPortsForAcceptProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_16() { return &___alwaysUseCompletionPortsForAcceptProp_16; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForAcceptProp_16), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_17() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForConnectProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForConnectProp_17() const { return ___alwaysUseCompletionPortsForConnectProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForConnectProp_17() { return &___alwaysUseCompletionPortsForConnectProp_17; }
	inline void set_alwaysUseCompletionPortsForConnectProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForConnectProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETELEMENT_T3329874080_H
#ifndef BYPASSONLOCALVALUES_T945670496_H
#define BYPASSONLOCALVALUES_T945670496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t945670496 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t945670496, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSONLOCALVALUES_T945670496_H
#ifndef SYSTEMDIAGNOSTICSSECTION_T3552941008_H
#define SYSTEMDIAGNOSTICSSECTION_T3552941008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SystemDiagnosticsSection
struct  SystemDiagnosticsSection_t3552941008  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct SystemDiagnosticsSection_t3552941008_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SystemDiagnosticsSection::_properties
	ConfigurationPropertyCollection_t2852175726 * ____properties_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propAssert
	ConfigurationProperty_t3590861854 * ____propAssert_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propPerfCounters
	ConfigurationProperty_t3590861854 * ____propPerfCounters_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSources
	ConfigurationProperty_t3590861854 * ____propSources_22;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSharedListeners
	ConfigurationProperty_t3590861854 * ____propSharedListeners_23;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSwitches
	ConfigurationProperty_t3590861854 * ____propSwitches_24;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propTrace
	ConfigurationProperty_t3590861854 * ____propTrace_25;

public:
	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get__properties_19() const { return ____properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier((&____properties_19), value);
	}

	inline static int32_t get_offset_of__propAssert_20() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propAssert_20)); }
	inline ConfigurationProperty_t3590861854 * get__propAssert_20() const { return ____propAssert_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propAssert_20() { return &____propAssert_20; }
	inline void set__propAssert_20(ConfigurationProperty_t3590861854 * value)
	{
		____propAssert_20 = value;
		Il2CppCodeGenWriteBarrier((&____propAssert_20), value);
	}

	inline static int32_t get_offset_of__propPerfCounters_21() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propPerfCounters_21)); }
	inline ConfigurationProperty_t3590861854 * get__propPerfCounters_21() const { return ____propPerfCounters_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propPerfCounters_21() { return &____propPerfCounters_21; }
	inline void set__propPerfCounters_21(ConfigurationProperty_t3590861854 * value)
	{
		____propPerfCounters_21 = value;
		Il2CppCodeGenWriteBarrier((&____propPerfCounters_21), value);
	}

	inline static int32_t get_offset_of__propSources_22() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propSources_22)); }
	inline ConfigurationProperty_t3590861854 * get__propSources_22() const { return ____propSources_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSources_22() { return &____propSources_22; }
	inline void set__propSources_22(ConfigurationProperty_t3590861854 * value)
	{
		____propSources_22 = value;
		Il2CppCodeGenWriteBarrier((&____propSources_22), value);
	}

	inline static int32_t get_offset_of__propSharedListeners_23() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propSharedListeners_23)); }
	inline ConfigurationProperty_t3590861854 * get__propSharedListeners_23() const { return ____propSharedListeners_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSharedListeners_23() { return &____propSharedListeners_23; }
	inline void set__propSharedListeners_23(ConfigurationProperty_t3590861854 * value)
	{
		____propSharedListeners_23 = value;
		Il2CppCodeGenWriteBarrier((&____propSharedListeners_23), value);
	}

	inline static int32_t get_offset_of__propSwitches_24() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propSwitches_24)); }
	inline ConfigurationProperty_t3590861854 * get__propSwitches_24() const { return ____propSwitches_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propSwitches_24() { return &____propSwitches_24; }
	inline void set__propSwitches_24(ConfigurationProperty_t3590861854 * value)
	{
		____propSwitches_24 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitches_24), value);
	}

	inline static int32_t get_offset_of__propTrace_25() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t3552941008_StaticFields, ____propTrace_25)); }
	inline ConfigurationProperty_t3590861854 * get__propTrace_25() const { return ____propTrace_25; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propTrace_25() { return &____propTrace_25; }
	inline void set__propTrace_25(ConfigurationProperty_t3590861854 * value)
	{
		____propTrace_25 = value;
		Il2CppCodeGenWriteBarrier((&____propTrace_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMDIAGNOSTICSSECTION_T3552941008_H
#ifndef AUTODETECTVALUES_T1649618618_H
#define AUTODETECTVALUES_T1649618618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t1649618618 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t1649618618, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTODETECTVALUES_T1649618618_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1161221431  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifndef AUTHENTICATIONMODULESSECTION_T1083221556_H
#define AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1083221556  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct AuthenticationModulesSection_t1083221556_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3590861854 * ___authenticationModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_20() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___authenticationModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_authenticationModulesProp_20() const { return ___authenticationModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_authenticationModulesProp_20() { return &___authenticationModulesProp_20; }
	inline void set_authenticationModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___authenticationModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2249118273_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2249118273_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef IN6_ADDR_T1417766092_H
#define IN6_ADDR_T1417766092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t1417766092 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t1417766092, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T1417766092_H
#ifndef BYPASSELEMENTCOLLECTION_T47326401_H
#define BYPASSELEMENTCOLLECTION_T47326401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t47326401  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T47326401_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef DEFAULTPROXYSECTION_T4167594595_H
#define DEFAULTPROXYSECTION_T4167594595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t4167594595  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct DefaultProxySection_t4167594595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t3590861854 * ___bypassListProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t3590861854 * ___moduleProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t3590861854 * ___proxyProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t3590861854 * ___useDefaultCredentialsProp_24;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_bypassListProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___bypassListProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_bypassListProp_20() const { return ___bypassListProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassListProp_20() { return &___bypassListProp_20; }
	inline void set_bypassListProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___bypassListProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_20), value);
	}

	inline static int32_t get_offset_of_enabledProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___enabledProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_21() const { return ___enabledProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_21() { return &___enabledProp_21; }
	inline void set_enabledProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_21), value);
	}

	inline static int32_t get_offset_of_moduleProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___moduleProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_moduleProp_22() const { return ___moduleProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_moduleProp_22() { return &___moduleProp_22; }
	inline void set_moduleProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___moduleProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_22), value);
	}

	inline static int32_t get_offset_of_proxyProp_23() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___proxyProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_proxyProp_23() const { return ___proxyProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyProp_23() { return &___proxyProp_23; }
	inline void set_proxyProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___proxyProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_23), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_24() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___useDefaultCredentialsProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_useDefaultCredentialsProp_24() const { return ___useDefaultCredentialsProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useDefaultCredentialsProp_24() { return &___useDefaultCredentialsProp_24; }
	inline void set_useDefaultCredentialsProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___useDefaultCredentialsProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T4167594595_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3860227195  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1603642748_H
#define CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1603642748  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct ConnectionManagementSection_t1603642748_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t3590861854 * ___connectionManagementProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_20;

public:
	inline static int32_t get_offset_of_connectionManagementProp_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___connectionManagementProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_connectionManagementProp_19() const { return ___connectionManagementProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_connectionManagementProp_19() { return &___connectionManagementProp_19; }
	inline void set_connectionManagementProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___connectionManagementProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_19), value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier((&___properties_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifndef CONFIGURATIONEXCEPTION_T3515317685_H
#define CONFIGURATIONEXCEPTION_T3515317685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationException
struct  ConfigurationException_t3515317685  : public SystemException_t176217640
{
public:
	// System.String System.Configuration.ConfigurationException::filename
	String_t* ___filename_16;
	// System.Int32 System.Configuration.ConfigurationException::line
	int32_t ___line_17;

public:
	inline static int32_t get_offset_of_filename_16() { return static_cast<int32_t>(offsetof(ConfigurationException_t3515317685, ___filename_16)); }
	inline String_t* get_filename_16() const { return ___filename_16; }
	inline String_t** get_address_of_filename_16() { return &___filename_16; }
	inline void set_filename_16(String_t* value)
	{
		___filename_16 = value;
		Il2CppCodeGenWriteBarrier((&___filename_16), value);
	}

	inline static int32_t get_offset_of_line_17() { return static_cast<int32_t>(offsetof(ConfigurationException_t3515317685, ___line_17)); }
	inline int32_t get_line_17() const { return ___line_17; }
	inline int32_t* get_address_of_line_17() { return &___line_17; }
	inline void set_line_17(int32_t value)
	{
		___line_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONEXCEPTION_T3515317685_H
#ifndef TRACEINTERNAL_T3347261369_H
#define TRACEINTERNAL_T3347261369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceInternal
struct  TraceInternal_t3347261369  : public RuntimeObject
{
public:

public:
};

struct TraceInternal_t3347261369_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::appName
	String_t* ___appName_0;
	// System.Diagnostics.TraceListenerCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::listeners
	TraceListenerCollection_t1347122889 * ___listeners_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::autoFlush
	bool ___autoFlush_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::useGlobalLock
	bool ___useGlobalLock_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::indentSize
	int32_t ___indentSize_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::settingsInitialized
	bool ___settingsInitialized_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::defaultInitialized
	bool ___defaultInitialized_7;
	// System.Object System.Diagnostics.TraceInternal::critSec
	RuntimeObject * ___critSec_8;

public:
	inline static int32_t get_offset_of_appName_0() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___appName_0)); }
	inline String_t* get_appName_0() const { return ___appName_0; }
	inline String_t** get_address_of_appName_0() { return &___appName_0; }
	inline void set_appName_0(String_t* value)
	{
		___appName_0 = value;
		Il2CppCodeGenWriteBarrier((&___appName_0), value);
	}

	inline static int32_t get_offset_of_listeners_1() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___listeners_1)); }
	inline TraceListenerCollection_t1347122889 * get_listeners_1() const { return ___listeners_1; }
	inline TraceListenerCollection_t1347122889 ** get_address_of_listeners_1() { return &___listeners_1; }
	inline void set_listeners_1(TraceListenerCollection_t1347122889 * value)
	{
		___listeners_1 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_1), value);
	}

	inline static int32_t get_offset_of_autoFlush_2() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___autoFlush_2)); }
	inline bool get_autoFlush_2() const { return ___autoFlush_2; }
	inline bool* get_address_of_autoFlush_2() { return &___autoFlush_2; }
	inline void set_autoFlush_2(bool value)
	{
		___autoFlush_2 = value;
	}

	inline static int32_t get_offset_of_useGlobalLock_3() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___useGlobalLock_3)); }
	inline bool get_useGlobalLock_3() const { return ___useGlobalLock_3; }
	inline bool* get_address_of_useGlobalLock_3() { return &___useGlobalLock_3; }
	inline void set_useGlobalLock_3(bool value)
	{
		___useGlobalLock_3 = value;
	}

	inline static int32_t get_offset_of_indentSize_5() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___indentSize_5)); }
	inline int32_t get_indentSize_5() const { return ___indentSize_5; }
	inline int32_t* get_address_of_indentSize_5() { return &___indentSize_5; }
	inline void set_indentSize_5(int32_t value)
	{
		___indentSize_5 = value;
	}

	inline static int32_t get_offset_of_settingsInitialized_6() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___settingsInitialized_6)); }
	inline bool get_settingsInitialized_6() const { return ___settingsInitialized_6; }
	inline bool* get_address_of_settingsInitialized_6() { return &___settingsInitialized_6; }
	inline void set_settingsInitialized_6(bool value)
	{
		___settingsInitialized_6 = value;
	}

	inline static int32_t get_offset_of_defaultInitialized_7() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___defaultInitialized_7)); }
	inline bool get_defaultInitialized_7() const { return ___defaultInitialized_7; }
	inline bool* get_address_of_defaultInitialized_7() { return &___defaultInitialized_7; }
	inline void set_defaultInitialized_7(bool value)
	{
		___defaultInitialized_7 = value;
	}

	inline static int32_t get_offset_of_critSec_8() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_StaticFields, ___critSec_8)); }
	inline RuntimeObject * get_critSec_8() const { return ___critSec_8; }
	inline RuntimeObject ** get_address_of_critSec_8() { return &___critSec_8; }
	inline void set_critSec_8(RuntimeObject * value)
	{
		___critSec_8 = value;
		Il2CppCodeGenWriteBarrier((&___critSec_8), value);
	}
};

struct TraceInternal_t3347261369_ThreadStaticFields
{
public:
	// System.Int32 System.Diagnostics.TraceInternal::indentLevel
	int32_t ___indentLevel_4;

public:
	inline static int32_t get_offset_of_indentLevel_4() { return static_cast<int32_t>(offsetof(TraceInternal_t3347261369_ThreadStaticFields, ___indentLevel_4)); }
	inline int32_t get_indentLevel_4() const { return ___indentLevel_4; }
	inline int32_t* get_address_of_indentLevel_4() { return &___indentLevel_4; }
	inline void set_indentLevel_4(int32_t value)
	{
		___indentLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEINTERNAL_T3347261369_H
#ifndef INITSTATE_T1904041753_H
#define INITSTATE_T1904041753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.InitState
struct  InitState_t1904041753 
{
public:
	// System.Int32 System.Diagnostics.InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t1904041753, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T1904041753_H
#ifndef WEBREQUESTMODULESSECTION_T4132732301_H
#define WEBREQUESTMODULESSECTION_T4132732301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t4132732301  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct WebRequestModulesSection_t4132732301_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t3590861854 * ___webRequestModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_20() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___webRequestModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_webRequestModulesProp_20() const { return ___webRequestModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webRequestModulesProp_20() { return &___webRequestModulesProp_20; }
	inline void set_webRequestModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___webRequestModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T4132732301_H
#ifndef REQUESTCACHELEVEL_T1509648360_H
#define REQUESTCACHELEVEL_T1509648360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t1509648360 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t1509648360, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHELEVEL_T1509648360_H
#ifndef TRACEOPTIONS_T3546477972_H
#define TRACEOPTIONS_T3546477972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceOptions
struct  TraceOptions_t3546477972 
{
public:
	// System.Int32 System.Diagnostics.TraceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceOptions_t3546477972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEOPTIONS_T3546477972_H
#ifndef SWITCHELEMENTSCOLLECTION_T2023008279_H
#define SWITCHELEMENTSCOLLECTION_T2023008279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElementsCollection
struct  SwitchElementsCollection_t2023008279  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENTSCOLLECTION_T2023008279_H
#ifndef LISTENERELEMENTSCOLLECTION_T1095146761_H
#define LISTENERELEMENTSCOLLECTION_T1095146761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElementsCollection
struct  ListenerElementsCollection_t1095146761  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENTSCOLLECTION_T1095146761_H
#ifndef LISTENERELEMENT_T3111952272_H
#define LISTENERELEMENT_T3111952272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElement
struct  ListenerElement_t3111952272  : public TypedElement_t2581589637
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propListenerTypeName
	ConfigurationProperty_t3590861854 * ____propListenerTypeName_23;
	// System.Boolean System.Diagnostics.ListenerElement::_allowReferences
	bool ____allowReferences_24;
	// System.Collections.Hashtable System.Diagnostics.ListenerElement::_attributes
	Hashtable_t1853889766 * ____attributes_25;
	// System.Boolean System.Diagnostics.ListenerElement::_isAddedByDefault
	bool ____isAddedByDefault_26;

public:
	inline static int32_t get_offset_of__propListenerTypeName_23() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272, ____propListenerTypeName_23)); }
	inline ConfigurationProperty_t3590861854 * get__propListenerTypeName_23() const { return ____propListenerTypeName_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propListenerTypeName_23() { return &____propListenerTypeName_23; }
	inline void set__propListenerTypeName_23(ConfigurationProperty_t3590861854 * value)
	{
		____propListenerTypeName_23 = value;
		Il2CppCodeGenWriteBarrier((&____propListenerTypeName_23), value);
	}

	inline static int32_t get_offset_of__allowReferences_24() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272, ____allowReferences_24)); }
	inline bool get__allowReferences_24() const { return ____allowReferences_24; }
	inline bool* get_address_of__allowReferences_24() { return &____allowReferences_24; }
	inline void set__allowReferences_24(bool value)
	{
		____allowReferences_24 = value;
	}

	inline static int32_t get_offset_of__attributes_25() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272, ____attributes_25)); }
	inline Hashtable_t1853889766 * get__attributes_25() const { return ____attributes_25; }
	inline Hashtable_t1853889766 ** get_address_of__attributes_25() { return &____attributes_25; }
	inline void set__attributes_25(Hashtable_t1853889766 * value)
	{
		____attributes_25 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_25), value);
	}

	inline static int32_t get_offset_of__isAddedByDefault_26() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272, ____isAddedByDefault_26)); }
	inline bool get__isAddedByDefault_26() const { return ____isAddedByDefault_26; }
	inline bool* get_address_of__isAddedByDefault_26() { return &____isAddedByDefault_26; }
	inline void set__isAddedByDefault_26(bool value)
	{
		____isAddedByDefault_26 = value;
	}
};

struct ListenerElement_t3111952272_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propFilter
	ConfigurationProperty_t3590861854 * ____propFilter_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propName
	ConfigurationProperty_t3590861854 * ____propName_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propOutputOpts
	ConfigurationProperty_t3590861854 * ____propOutputOpts_22;

public:
	inline static int32_t get_offset_of__propFilter_20() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272_StaticFields, ____propFilter_20)); }
	inline ConfigurationProperty_t3590861854 * get__propFilter_20() const { return ____propFilter_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propFilter_20() { return &____propFilter_20; }
	inline void set__propFilter_20(ConfigurationProperty_t3590861854 * value)
	{
		____propFilter_20 = value;
		Il2CppCodeGenWriteBarrier((&____propFilter_20), value);
	}

	inline static int32_t get_offset_of__propName_21() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272_StaticFields, ____propName_21)); }
	inline ConfigurationProperty_t3590861854 * get__propName_21() const { return ____propName_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propName_21() { return &____propName_21; }
	inline void set__propName_21(ConfigurationProperty_t3590861854 * value)
	{
		____propName_21 = value;
		Il2CppCodeGenWriteBarrier((&____propName_21), value);
	}

	inline static int32_t get_offset_of__propOutputOpts_22() { return static_cast<int32_t>(offsetof(ListenerElement_t3111952272_StaticFields, ____propOutputOpts_22)); }
	inline ConfigurationProperty_t3590861854 * get__propOutputOpts_22() const { return ____propOutputOpts_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of__propOutputOpts_22() { return &____propOutputOpts_22; }
	inline void set__propOutputOpts_22(ConfigurationProperty_t3590861854 * value)
	{
		____propOutputOpts_22 = value;
		Il2CppCodeGenWriteBarrier((&____propOutputOpts_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENT_T3111952272_H
#ifndef USESYSTEMDEFAULTVALUES_T2711047072_H
#define USESYSTEMDEFAULTVALUES_T2711047072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t2711047072 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t2711047072, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USESYSTEMDEFAULTVALUES_T2711047072_H
#ifndef SOURCELEVELS_T2339259104_H
#define SOURCELEVELS_T2339259104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceLevels
struct  SourceLevels_t2339259104 
{
public:
	// System.Int32 System.Diagnostics.SourceLevels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SourceLevels_t2339259104, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCELEVELS_T2339259104_H
#ifndef FILTERELEMENT_T2356978203_H
#define FILTERELEMENT_T2356978203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.FilterElement
struct  FilterElement_t2356978203  : public TypedElement_t2581589637
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERELEMENT_T2356978203_H
#ifndef SOURCEELEMENTSCOLLECTION_T3236719373_H
#define SOURCEELEMENTSCOLLECTION_T3236719373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElementsCollection
struct  SourceElementsCollection_t3236719373  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENTSCOLLECTION_T3236719373_H
#ifndef SETTINGSSECTION_T1259474535_H
#define SETTINGSSECTION_T1259474535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t1259474535  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct SettingsSection_t1259474535_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3590861854 * ___httpWebRequestProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3590861854 * ___ipv6Prop_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3590861854 * ___performanceCountersProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3590861854 * ___servicePointManagerProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3590861854 * ___webProxyScriptProp_24;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3590861854 * ___socketProp_25;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_20() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___httpWebRequestProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_httpWebRequestProp_20() const { return ___httpWebRequestProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_httpWebRequestProp_20() { return &___httpWebRequestProp_20; }
	inline void set_httpWebRequestProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___httpWebRequestProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___httpWebRequestProp_20), value);
	}

	inline static int32_t get_offset_of_ipv6Prop_21() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___ipv6Prop_21)); }
	inline ConfigurationProperty_t3590861854 * get_ipv6Prop_21() const { return ___ipv6Prop_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_ipv6Prop_21() { return &___ipv6Prop_21; }
	inline void set_ipv6Prop_21(ConfigurationProperty_t3590861854 * value)
	{
		___ipv6Prop_21 = value;
		Il2CppCodeGenWriteBarrier((&___ipv6Prop_21), value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___performanceCountersProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_performanceCountersProp_22() const { return ___performanceCountersProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_performanceCountersProp_22() { return &___performanceCountersProp_22; }
	inline void set_performanceCountersProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___performanceCountersProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___performanceCountersProp_22), value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___servicePointManagerProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_servicePointManagerProp_23() const { return ___servicePointManagerProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_servicePointManagerProp_23() { return &___servicePointManagerProp_23; }
	inline void set_servicePointManagerProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___servicePointManagerProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___servicePointManagerProp_23), value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_24() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___webProxyScriptProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_webProxyScriptProp_24() const { return ___webProxyScriptProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webProxyScriptProp_24() { return &___webProxyScriptProp_24; }
	inline void set_webProxyScriptProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___webProxyScriptProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___webProxyScriptProp_24), value);
	}

	inline static int32_t get_offset_of_socketProp_25() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___socketProp_25)); }
	inline ConfigurationProperty_t3590861854 * get_socketProp_25() const { return ___socketProp_25; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_socketProp_25() { return &___socketProp_25; }
	inline void set_socketProp_25(ConfigurationProperty_t3590861854 * value)
	{
		___socketProp_25 = value;
		Il2CppCodeGenWriteBarrier((&___socketProp_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTION_T1259474535_H
#ifndef EVENTLOG_T3406173750_H
#define EVENTLOG_T3406173750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLog
struct  EventLog_t3406173750  : public Component_t3620823400
{
public:
	// System.String System.Diagnostics.EventLog::source
	String_t* ___source_4;
	// System.Boolean System.Diagnostics.EventLog::doRaiseEvents
	bool ___doRaiseEvents_5;
	// System.Diagnostics.EventLogImpl System.Diagnostics.EventLog::Impl
	EventLogImpl_t2387799702 * ___Impl_6;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(EventLog_t3406173750, ___source_4)); }
	inline String_t* get_source_4() const { return ___source_4; }
	inline String_t** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(String_t* value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_doRaiseEvents_5() { return static_cast<int32_t>(offsetof(EventLog_t3406173750, ___doRaiseEvents_5)); }
	inline bool get_doRaiseEvents_5() const { return ___doRaiseEvents_5; }
	inline bool* get_address_of_doRaiseEvents_5() { return &___doRaiseEvents_5; }
	inline void set_doRaiseEvents_5(bool value)
	{
		___doRaiseEvents_5 = value;
	}

	inline static int32_t get_offset_of_Impl_6() { return static_cast<int32_t>(offsetof(EventLog_t3406173750, ___Impl_6)); }
	inline EventLogImpl_t2387799702 * get_Impl_6() const { return ___Impl_6; }
	inline EventLogImpl_t2387799702 ** get_address_of_Impl_6() { return &___Impl_6; }
	inline void set_Impl_6(EventLogImpl_t2387799702 * value)
	{
		___Impl_6 = value;
		Il2CppCodeGenWriteBarrier((&___Impl_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOG_T3406173750_H
#ifndef MONITORINGDESCRIPTIONATTRIBUTE_T2767822115_H
#define MONITORINGDESCRIPTIONATTRIBUTE_T2767822115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.MonitoringDescriptionAttribute
struct  MonitoringDescriptionAttribute_t2767822115  : public DescriptionAttribute_t874390736
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITORINGDESCRIPTIONATTRIBUTE_T2767822115_H
#ifndef WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#define WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElementCollection
struct  WebRequestModuleElementCollection_t925190782  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifndef SHAREDLISTENERELEMENTSCOLLECTION_T127800851_H
#define SHAREDLISTENERELEMENTSCOLLECTION_T127800851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SharedListenerElementsCollection
struct  SharedListenerElementsCollection_t127800851  : public ListenerElementsCollection_t1095146761
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDLISTENERELEMENTSCOLLECTION_T127800851_H
#ifndef DIAGNOSTICSCONFIGURATION_T1159239597_H
#define DIAGNOSTICSCONFIGURATION_T1159239597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfiguration
struct  DiagnosticsConfiguration_t1159239597  : public RuntimeObject
{
public:

public:
};

struct DiagnosticsConfiguration_t1159239597_StaticFields
{
public:
	// System.Diagnostics.SystemDiagnosticsSection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::configSection
	SystemDiagnosticsSection_t3552941008 * ___configSection_0;
	// System.Diagnostics.InitState modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::initState
	int32_t ___initState_1;

public:
	inline static int32_t get_offset_of_configSection_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t1159239597_StaticFields, ___configSection_0)); }
	inline SystemDiagnosticsSection_t3552941008 * get_configSection_0() const { return ___configSection_0; }
	inline SystemDiagnosticsSection_t3552941008 ** get_address_of_configSection_0() { return &___configSection_0; }
	inline void set_configSection_0(SystemDiagnosticsSection_t3552941008 * value)
	{
		___configSection_0 = value;
		Il2CppCodeGenWriteBarrier((&___configSection_0), value);
	}

	inline static int32_t get_offset_of_initState_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t1159239597_StaticFields, ___initState_1)); }
	inline int32_t get_initState_1() const { return ___initState_1; }
	inline int32_t* get_address_of_initState_1() { return &___initState_1; }
	inline void set_initState_1(int32_t value)
	{
		___initState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATION_T1159239597_H
#ifndef SETTINGSSECTIONINTERNAL_T781171337_H
#define SETTINGSSECTIONINTERNAL_T781171337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSectionInternal
struct  SettingsSectionInternal_t781171337  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Configuration.SettingsSectionInternal::HttpListenerUnescapeRequestUrl
	bool ___HttpListenerUnescapeRequestUrl_1;
	// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SettingsSectionInternal::IPProtectionLevel
	int32_t ___IPProtectionLevel_2;

public:
	inline static int32_t get_offset_of_HttpListenerUnescapeRequestUrl_1() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___HttpListenerUnescapeRequestUrl_1)); }
	inline bool get_HttpListenerUnescapeRequestUrl_1() const { return ___HttpListenerUnescapeRequestUrl_1; }
	inline bool* get_address_of_HttpListenerUnescapeRequestUrl_1() { return &___HttpListenerUnescapeRequestUrl_1; }
	inline void set_HttpListenerUnescapeRequestUrl_1(bool value)
	{
		___HttpListenerUnescapeRequestUrl_1 = value;
	}

	inline static int32_t get_offset_of_IPProtectionLevel_2() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___IPProtectionLevel_2)); }
	inline int32_t get_IPProtectionLevel_2() const { return ___IPProtectionLevel_2; }
	inline int32_t* get_address_of_IPProtectionLevel_2() { return &___IPProtectionLevel_2; }
	inline void set_IPProtectionLevel_2(int32_t value)
	{
		___IPProtectionLevel_2 = value;
	}
};

struct SettingsSectionInternal_t781171337_StaticFields
{
public:
	// System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::instance
	SettingsSectionInternal_t781171337 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337_StaticFields, ___instance_0)); }
	inline SettingsSectionInternal_t781171337 * get_instance_0() const { return ___instance_0; }
	inline SettingsSectionInternal_t781171337 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SettingsSectionInternal_t781171337 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTIONINTERNAL_T781171337_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t1811933861_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
#ifndef TRACESOURCEINFO_T2065837391_H
#define TRACESOURCEINFO_T2065837391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t2065837391  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t1347122889 * ___listeners_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t2065837391, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_levels_1() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t2065837391, ___levels_1)); }
	inline int32_t get_levels_1() const { return ___levels_1; }
	inline int32_t* get_address_of_levels_1() { return &___levels_1; }
	inline void set_levels_1(int32_t value)
	{
		___levels_1 = value;
	}

	inline static int32_t get_offset_of_listeners_2() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t2065837391, ___listeners_2)); }
	inline TraceListenerCollection_t1347122889 * get_listeners_2() const { return ___listeners_2; }
	inline TraceListenerCollection_t1347122889 ** get_address_of_listeners_2() { return &___listeners_2; }
	inline void set_listeners_2(TraceListenerCollection_t1347122889 * value)
	{
		___listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESOURCEINFO_T2065837391_H
#ifndef SOCKADDR_IN6_T2080844659_H
#define SOCKADDR_IN6_T2080844659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t2080844659 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t1417766092  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_addr_4)); }
	inline in6_addr_t1417766092  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t1417766092 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t1417766092  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T2080844659_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef BOOLEANCONVERTER_T941538927_H
#define BOOLEANCONVERTER_T941538927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t941538927  : public TypeConverter_t2249118273
{
public:

public:
};

struct BooleanConverter_t941538927_StaticFields
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::values
	StandardValuesCollection_t2184948248 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(BooleanConverter_t941538927_StaticFields, ___values_2)); }
	inline StandardValuesCollection_t2184948248 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t2184948248 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T941538927_H
#ifndef TRACELISTENER_T3975618648_H
#define TRACELISTENER_T3975618648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListener
struct  TraceListener_t3975618648  : public MarshalByRefObject_t2760389100
{
public:
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::traceOptions
	int32_t ___traceOptions_3;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_4;
	// System.String System.Diagnostics.TraceListener::listenerName
	String_t* ___listenerName_5;
	// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::filter
	TraceFilter_t4153521180 * ___filter_6;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t120437468 * ___attributes_7;
	// System.String System.Diagnostics.TraceListener::initializeData
	String_t* ___initializeData_8;

public:
	inline static int32_t get_offset_of_indentLevel_1() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___indentLevel_1)); }
	inline int32_t get_indentLevel_1() const { return ___indentLevel_1; }
	inline int32_t* get_address_of_indentLevel_1() { return &___indentLevel_1; }
	inline void set_indentLevel_1(int32_t value)
	{
		___indentLevel_1 = value;
	}

	inline static int32_t get_offset_of_indentSize_2() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___indentSize_2)); }
	inline int32_t get_indentSize_2() const { return ___indentSize_2; }
	inline int32_t* get_address_of_indentSize_2() { return &___indentSize_2; }
	inline void set_indentSize_2(int32_t value)
	{
		___indentSize_2 = value;
	}

	inline static int32_t get_offset_of_traceOptions_3() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___traceOptions_3)); }
	inline int32_t get_traceOptions_3() const { return ___traceOptions_3; }
	inline int32_t* get_address_of_traceOptions_3() { return &___traceOptions_3; }
	inline void set_traceOptions_3(int32_t value)
	{
		___traceOptions_3 = value;
	}

	inline static int32_t get_offset_of_needIndent_4() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___needIndent_4)); }
	inline bool get_needIndent_4() const { return ___needIndent_4; }
	inline bool* get_address_of_needIndent_4() { return &___needIndent_4; }
	inline void set_needIndent_4(bool value)
	{
		___needIndent_4 = value;
	}

	inline static int32_t get_offset_of_listenerName_5() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___listenerName_5)); }
	inline String_t* get_listenerName_5() const { return ___listenerName_5; }
	inline String_t** get_address_of_listenerName_5() { return &___listenerName_5; }
	inline void set_listenerName_5(String_t* value)
	{
		___listenerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___listenerName_5), value);
	}

	inline static int32_t get_offset_of_filter_6() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___filter_6)); }
	inline TraceFilter_t4153521180 * get_filter_6() const { return ___filter_6; }
	inline TraceFilter_t4153521180 ** get_address_of_filter_6() { return &___filter_6; }
	inline void set_filter_6(TraceFilter_t4153521180 * value)
	{
		___filter_6 = value;
		Il2CppCodeGenWriteBarrier((&___filter_6), value);
	}

	inline static int32_t get_offset_of_attributes_7() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___attributes_7)); }
	inline StringDictionary_t120437468 * get_attributes_7() const { return ___attributes_7; }
	inline StringDictionary_t120437468 ** get_address_of_attributes_7() { return &___attributes_7; }
	inline void set_attributes_7(StringDictionary_t120437468 * value)
	{
		___attributes_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_7), value);
	}

	inline static int32_t get_offset_of_initializeData_8() { return static_cast<int32_t>(offsetof(TraceListener_t3975618648, ___initializeData_8)); }
	inline String_t* get_initializeData_8() const { return ___initializeData_8; }
	inline String_t** get_address_of_initializeData_8() { return &___initializeData_8; }
	inline void set_initializeData_8(String_t* value)
	{
		___initializeData_8 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENER_T3975618648_H
#ifndef CHARCONVERTER_T747842913_H
#define CHARCONVERTER_T747842913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t747842913  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T747842913_H
#ifndef COLLECTIONCONVERTER_T3078846443_H
#define COLLECTIONCONVERTER_T3078846443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3078846443  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3078846443_H
#ifndef REQUESTCACHEPOLICY_T2923596909_H
#define REQUESTCACHEPOLICY_T2923596909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2923596909  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2923596909, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2923596909_H
#ifndef CULTUREINFOCONVERTER_T81550636_H
#define CULTUREINFOCONVERTER_T81550636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t81550636  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::values
	StandardValuesCollection_t2184948248 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t81550636, ___values_2)); }
	inline StandardValuesCollection_t2184948248 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t2184948248 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T81550636_H
#ifndef EVENTLOGTRACELISTENER_T1955492177_H
#define EVENTLOGTRACELISTENER_T1955492177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogTraceListener
struct  EventLogTraceListener_t1955492177  : public TraceListener_t3975618648
{
public:
	// System.Diagnostics.EventLog System.Diagnostics.EventLogTraceListener::event_log
	EventLog_t3406173750 * ___event_log_9;
	// System.String System.Diagnostics.EventLogTraceListener::name
	String_t* ___name_10;

public:
	inline static int32_t get_offset_of_event_log_9() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t1955492177, ___event_log_9)); }
	inline EventLog_t3406173750 * get_event_log_9() const { return ___event_log_9; }
	inline EventLog_t3406173750 ** get_address_of_event_log_9() { return &___event_log_9; }
	inline void set_event_log_9(EventLog_t3406173750 * value)
	{
		___event_log_9 = value;
		Il2CppCodeGenWriteBarrier((&___event_log_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t1955492177, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGTRACELISTENER_T1955492177_H
#ifndef COMPONENTCONVERTER_T118941221_H
#define COMPONENTCONVERTER_T118941221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t118941221  : public ReferenceConverter_t1811933861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T118941221_H
#ifndef ARRAYCONVERTER_T1750795769_H
#define ARRAYCONVERTER_T1750795769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1750795769  : public CollectionConverter_t3078846443
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1750795769_H
#ifndef TEXTWRITERTRACELISTENER_T280110789_H
#define TEXTWRITERTRACELISTENER_T280110789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TextWriterTraceListener
struct  TextWriterTraceListener_t280110789  : public TraceListener_t3975618648
{
public:
	// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::writer
	TextWriter_t3478189236 * ___writer_9;

public:
	inline static int32_t get_offset_of_writer_9() { return static_cast<int32_t>(offsetof(TextWriterTraceListener_t280110789, ___writer_9)); }
	inline TextWriter_t3478189236 * get_writer_9() const { return ___writer_9; }
	inline TextWriter_t3478189236 ** get_address_of_writer_9() { return &___writer_9; }
	inline void set_writer_9(TextWriter_t3478189236 * value)
	{
		___writer_9 = value;
		Il2CppCodeGenWriteBarrier((&___writer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITERTRACELISTENER_T280110789_H
#ifndef DEFAULTTRACELISTENER_T2804304119_H
#define DEFAULTTRACELISTENER_T2804304119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t2804304119  : public TraceListener_t3975618648
{
public:
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_12;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_13;

public:
	inline static int32_t get_offset_of_logFileName_12() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2804304119, ___logFileName_12)); }
	inline String_t* get_logFileName_12() const { return ___logFileName_12; }
	inline String_t** get_address_of_logFileName_12() { return &___logFileName_12; }
	inline void set_logFileName_12(String_t* value)
	{
		___logFileName_12 = value;
		Il2CppCodeGenWriteBarrier((&___logFileName_12), value);
	}

	inline static int32_t get_offset_of_assertUiEnabled_13() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2804304119, ___assertUiEnabled_13)); }
	inline bool get_assertUiEnabled_13() const { return ___assertUiEnabled_13; }
	inline bool* get_address_of_assertUiEnabled_13() { return &___assertUiEnabled_13; }
	inline void set_assertUiEnabled_13(bool value)
	{
		___assertUiEnabled_13 = value;
	}
};

struct DefaultTraceListener_t2804304119_StaticFields
{
public:
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_9;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_10;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_11;

public:
	inline static int32_t get_offset_of_OnWin32_9() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2804304119_StaticFields, ___OnWin32_9)); }
	inline bool get_OnWin32_9() const { return ___OnWin32_9; }
	inline bool* get_address_of_OnWin32_9() { return &___OnWin32_9; }
	inline void set_OnWin32_9(bool value)
	{
		___OnWin32_9 = value;
	}

	inline static int32_t get_offset_of_MonoTracePrefix_10() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2804304119_StaticFields, ___MonoTracePrefix_10)); }
	inline String_t* get_MonoTracePrefix_10() const { return ___MonoTracePrefix_10; }
	inline String_t** get_address_of_MonoTracePrefix_10() { return &___MonoTracePrefix_10; }
	inline void set_MonoTracePrefix_10(String_t* value)
	{
		___MonoTracePrefix_10 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTracePrefix_10), value);
	}

	inline static int32_t get_offset_of_MonoTraceFile_11() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2804304119_StaticFields, ___MonoTraceFile_11)); }
	inline String_t* get_MonoTraceFile_11() const { return ___MonoTraceFile_11; }
	inline String_t** get_address_of_MonoTraceFile_11() { return &___MonoTraceFile_11; }
	inline void set_MonoTraceFile_11(String_t* value)
	{
		___MonoTraceFile_11 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTraceFile_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACELISTENER_T2804304119_H
#ifndef ELEMENTHANDLER_T2521990823_H
#define ELEMENTHANDLER_T2521990823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct  ElementHandler_t2521990823  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTHANDLER_T2521990823_H
#ifndef BYTECONVERTER_T1408362843_H
#define BYTECONVERTER_T1408362843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1408362843  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1408362843_H
#ifndef DELIMITEDLISTTRACELISTENER_T2303506067_H
#define DELIMITEDLISTTRACELISTENER_T2303506067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DelimitedListTraceListener
struct  DelimitedListTraceListener_t2303506067  : public TextWriterTraceListener_t280110789
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELIMITEDLISTTRACELISTENER_T2303506067_H
#ifndef XMLWRITERTRACELISTENER_T2708883810_H
#define XMLWRITERTRACELISTENER_T2708883810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.XmlWriterTraceListener
struct  XmlWriterTraceListener_t2708883810  : public TextWriterTraceListener_t280110789
{
public:
	// System.Text.StringBuilder System.Diagnostics.XmlWriterTraceListener::strBldr
	StringBuilder_t * ___strBldr_10;
	// System.Xml.XmlTextWriter System.Diagnostics.XmlWriterTraceListener::xmlBlobWriter
	XmlTextWriter_t2114213153 * ___xmlBlobWriter_11;
	// System.Boolean System.Diagnostics.XmlWriterTraceListener::shouldRespectFilterOnTraceTransfer
	bool ___shouldRespectFilterOnTraceTransfer_12;

public:
	inline static int32_t get_offset_of_strBldr_10() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t2708883810, ___strBldr_10)); }
	inline StringBuilder_t * get_strBldr_10() const { return ___strBldr_10; }
	inline StringBuilder_t ** get_address_of_strBldr_10() { return &___strBldr_10; }
	inline void set_strBldr_10(StringBuilder_t * value)
	{
		___strBldr_10 = value;
		Il2CppCodeGenWriteBarrier((&___strBldr_10), value);
	}

	inline static int32_t get_offset_of_xmlBlobWriter_11() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t2708883810, ___xmlBlobWriter_11)); }
	inline XmlTextWriter_t2114213153 * get_xmlBlobWriter_11() const { return ___xmlBlobWriter_11; }
	inline XmlTextWriter_t2114213153 ** get_address_of_xmlBlobWriter_11() { return &___xmlBlobWriter_11; }
	inline void set_xmlBlobWriter_11(XmlTextWriter_t2114213153 * value)
	{
		___xmlBlobWriter_11 = value;
		Il2CppCodeGenWriteBarrier((&___xmlBlobWriter_11), value);
	}

	inline static int32_t get_offset_of_shouldRespectFilterOnTraceTransfer_12() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t2708883810, ___shouldRespectFilterOnTraceTransfer_12)); }
	inline bool get_shouldRespectFilterOnTraceTransfer_12() const { return ___shouldRespectFilterOnTraceTransfer_12; }
	inline bool* get_address_of_shouldRespectFilterOnTraceTransfer_12() { return &___shouldRespectFilterOnTraceTransfer_12; }
	inline void set_shouldRespectFilterOnTraceTransfer_12(bool value)
	{
		___shouldRespectFilterOnTraceTransfer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERTRACELISTENER_T2708883810_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (sockaddr_t371844119)+ sizeof (RuntimeObject), sizeof(sockaddr_t371844119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2100[2] = 
{
	sockaddr_t371844119::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t371844119::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (sockaddr_in_t1317910171)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t1317910171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2101[4] = 
{
	sockaddr_in_t1317910171::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (in6_addr_t1417766092)+ sizeof (RuntimeObject), sizeof(in6_addr_t1417766092_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2102[1] = 
{
	in6_addr_t1417766092::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (sockaddr_in6_t2080844659)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2080844659_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2103[6] = 
{
	sockaddr_in6_t2080844659::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (sockaddr_dl_t1317779094)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t1317779094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2104[8] = 
{
	sockaddr_dl_t1317779094::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (DefaultProxySectionInternal_t3889414525), -1, sizeof(DefaultProxySectionInternal_t3889414525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2105[2] = 
{
	DefaultProxySectionInternal_t3889414525::get_offset_of_webProxy_0(),
	DefaultProxySectionInternal_t3889414525_StaticFields::get_offset_of_classSyncObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (SettingsSectionInternal_t781171337), -1, sizeof(SettingsSectionInternal_t781171337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2106[3] = 
{
	SettingsSectionInternal_t781171337_StaticFields::get_offset_of_instance_0(),
	SettingsSectionInternal_t781171337::get_offset_of_HttpListenerUnescapeRequestUrl_1(),
	SettingsSectionInternal_t781171337::get_offset_of_IPProtectionLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (AuthenticationModuleElement_t2289740666), -1, sizeof(AuthenticationModuleElement_t2289740666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2107[2] = 
{
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_properties_15(),
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (AuthenticationModuleElementCollection_t1161221431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (AuthenticationModulesSection_t1083221556), -1, sizeof(AuthenticationModulesSection_t1083221556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2109[2] = 
{
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_properties_19(),
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_authenticationModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (BypassElement_t2358616601), -1, sizeof(BypassElement_t2358616601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2110[2] = 
{
	BypassElement_t2358616601_StaticFields::get_offset_of_properties_15(),
	BypassElement_t2358616601_StaticFields::get_offset_of_addressProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (BypassElementCollection_t47326401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (ConnectionManagementElement_t3857438253), -1, sizeof(ConnectionManagementElement_t3857438253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2112[3] = 
{
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_properties_15(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_addressProp_16(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_maxConnectionProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (ConnectionManagementElementCollection_t3860227195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (ConnectionManagementData_t2003128658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2114[1] = 
{
	ConnectionManagementData_t2003128658::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (ConnectionManagementSection_t1603642748), -1, sizeof(ConnectionManagementSection_t1603642748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2115[2] = 
{
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_connectionManagementProp_19(),
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_properties_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (DefaultProxySection_t4167594595), -1, sizeof(DefaultProxySection_t4167594595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2116[6] = 
{
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_properties_19(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_bypassListProp_20(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_enabledProp_21(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_moduleProp_22(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_proxyProp_23(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_useDefaultCredentialsProp_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (HttpWebRequestElement_t2801692355), -1, sizeof(HttpWebRequestElement_t2801692355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2117[5] = 
{
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumErrorResponseLengthProp_15(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_16(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_17(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_18(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_properties_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (Ipv6Element_t180053194), -1, sizeof(Ipv6Element_t180053194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2118[2] = 
{
	Ipv6Element_t180053194_StaticFields::get_offset_of_properties_15(),
	Ipv6Element_t180053194_StaticFields::get_offset_of_enabledProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (ModuleElement_t3252950656), -1, sizeof(ModuleElement_t3252950656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2119[2] = 
{
	ModuleElement_t3252950656_StaticFields::get_offset_of_properties_15(),
	ModuleElement_t3252950656_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (NetSectionGroup_t3270122580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (PerformanceCountersElement_t4093363992), -1, sizeof(PerformanceCountersElement_t4093363992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2121[2] = 
{
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_enabledProp_15(),
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (ProxyElement_t3214064751), -1, sizeof(ProxyElement_t3214064751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2122[6] = 
{
	ProxyElement_t3214064751_StaticFields::get_offset_of_properties_15(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_autoDetectProp_16(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_bypassOnLocalProp_17(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_proxyAddressProp_18(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_scriptLocationProp_19(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_useSystemDefaultProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (BypassOnLocalValues_t945670496)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2123[4] = 
{
	BypassOnLocalValues_t945670496::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (UseSystemDefaultValues_t2711047072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2124[4] = 
{
	UseSystemDefaultValues_t2711047072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (AutoDetectValues_t1649618618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2125[4] = 
{
	AutoDetectValues_t1649618618::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (ServicePointManagerElement_t2768640361), -1, sizeof(ServicePointManagerElement_t2768640361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2126[7] = 
{
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_properties_15(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateNameProp_16(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateRevocationListProp_17(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_dnsRefreshTimeoutProp_18(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_enableDnsRoundRobinProp_19(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_expect100ContinueProp_20(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_useNagleAlgorithmProp_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (SettingsSection_t1259474535), -1, sizeof(SettingsSection_t1259474535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2127[7] = 
{
	SettingsSection_t1259474535_StaticFields::get_offset_of_properties_19(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_httpWebRequestProp_20(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_ipv6Prop_21(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_performanceCountersProp_22(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_servicePointManagerProp_23(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_webProxyScriptProp_24(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_socketProp_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (SocketElement_t3329874080), -1, sizeof(SocketElement_t3329874080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2128[3] = 
{
	SocketElement_t3329874080_StaticFields::get_offset_of_properties_15(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForAcceptProp_16(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForConnectProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (WebProxyScriptElement_t477406598), -1, sizeof(WebProxyScriptElement_t477406598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2129[2] = 
{
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_downloadTimeoutProp_15(),
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (WebRequestModuleElement_t1406085120), -1, sizeof(WebRequestModuleElement_t1406085120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2130[3] = 
{
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_properties_15(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_prefixProp_16(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_typeProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (WebRequestModuleElementCollection_t925190782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (WebRequestModulesSection_t4132732301), -1, sizeof(WebRequestModulesSection_t4132732301_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2132[2] = 
{
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_properties_19(),
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_webRequestModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (RequestCache_t3669488992), -1, sizeof(RequestCache_t3669488992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2133[1] = 
{
	RequestCache_t3669488992_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (RequestCacheValidator_t587568667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (RequestCacheBinding_t2614858269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2135[2] = 
{
	RequestCacheBinding_t2614858269::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t2614858269::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (RequestCacheLevel_t1509648360)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2136[8] = 
{
	RequestCacheLevel_t1509648360::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (RequestCachePolicy_t2923596909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[1] = 
{
	RequestCachePolicy_t2923596909::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (RequestCacheProtocol_t3614465628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (PrivilegedConfigurationManager_t177498182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (ConfigurationException_t3515317685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2140[2] = 
{
	ConfigurationException_t3515317685::get_offset_of_filename_16(),
	ConfigurationException_t3515317685::get_offset_of_line_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (ConfigurationSettings_t822951835), -1, sizeof(ConfigurationSettings_t822951835_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2141[2] = 
{
	ConfigurationSettings_t822951835_StaticFields::get_offset_of_config_0(),
	ConfigurationSettings_t822951835_StaticFields::get_offset_of_lockobj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (DefaultConfig_t1013547162), -1, sizeof(DefaultConfig_t1013547162_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2142[1] = 
{
	DefaultConfig_t1013547162_StaticFields::get_offset_of_instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (AssertSection_t2347182250), -1, sizeof(AssertSection_t2347182250_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2146[3] = 
{
	AssertSection_t2347182250_StaticFields::get_offset_of__properties_15(),
	AssertSection_t2347182250_StaticFields::get_offset_of__propAssertUIEnabled_16(),
	AssertSection_t2347182250_StaticFields::get_offset_of__propLogFile_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (BooleanSwitch_t440064918), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (DelimitedListTraceListener_t2303506067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (InitState_t1904041753)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2149[4] = 
{
	InitState_t1904041753::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (DiagnosticsConfiguration_t1159239597), -1, sizeof(DiagnosticsConfiguration_t1159239597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2150[2] = 
{
	DiagnosticsConfiguration_t1159239597_StaticFields::get_offset_of_configSection_0(),
	DiagnosticsConfiguration_t1159239597_StaticFields::get_offset_of_initState_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (FilterElement_t2356978203), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (ListenerElementsCollection_t1095146761), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (SharedListenerElementsCollection_t127800851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (ListenerElement_t3111952272), -1, sizeof(ListenerElement_t3111952272_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2154[7] = 
{
	ListenerElement_t3111952272_StaticFields::get_offset_of__propFilter_20(),
	ListenerElement_t3111952272_StaticFields::get_offset_of__propName_21(),
	ListenerElement_t3111952272_StaticFields::get_offset_of__propOutputOpts_22(),
	ListenerElement_t3111952272::get_offset_of__propListenerTypeName_23(),
	ListenerElement_t3111952272::get_offset_of__allowReferences_24(),
	ListenerElement_t3111952272::get_offset_of__attributes_25(),
	ListenerElement_t3111952272::get_offset_of__isAddedByDefault_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (PerfCounterSection_t3884640147), -1, sizeof(PerfCounterSection_t3884640147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2155[2] = 
{
	PerfCounterSection_t3884640147_StaticFields::get_offset_of__properties_15(),
	PerfCounterSection_t3884640147_StaticFields::get_offset_of__propFileMappingSize_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (SourceElementsCollection_t3236719373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (SourceElement_t572173626), -1, sizeof(SourceElement_t572173626_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2157[7] = 
{
	SourceElement_t572173626_StaticFields::get_offset_of__properties_15(),
	SourceElement_t572173626_StaticFields::get_offset_of__propName_16(),
	SourceElement_t572173626_StaticFields::get_offset_of__propSwitchName_17(),
	SourceElement_t572173626_StaticFields::get_offset_of__propSwitchValue_18(),
	SourceElement_t572173626_StaticFields::get_offset_of__propSwitchType_19(),
	SourceElement_t572173626_StaticFields::get_offset_of__propListeners_20(),
	SourceElement_t572173626::get_offset_of__attributes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (SourceLevels_t2339259104)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2158[9] = 
{
	SourceLevels_t2339259104::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (Switch_t4228844028), -1, sizeof(Switch_t4228844028_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2159[6] = 
{
	Switch_t4228844028::get_offset_of_description_0(),
	Switch_t4228844028::get_offset_of_displayName_1(),
	Switch_t4228844028::get_offset_of_switchValueString_2(),
	Switch_t4228844028::get_offset_of_defaultValue_3(),
	Switch_t4228844028_StaticFields::get_offset_of_switches_4(),
	Switch_t4228844028_StaticFields::get_offset_of_s_LastCollectionCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (SwitchElementsCollection_t2023008279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (SwitchElement_t1208244899), -1, sizeof(SwitchElement_t1208244899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2161[4] = 
{
	SwitchElement_t1208244899_StaticFields::get_offset_of__properties_15(),
	SwitchElement_t1208244899_StaticFields::get_offset_of__propName_16(),
	SwitchElement_t1208244899_StaticFields::get_offset_of__propValue_17(),
	SwitchElement_t1208244899::get_offset_of__attributes_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (SwitchLevelAttribute_t1978904033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2162[1] = 
{
	SwitchLevelAttribute_t1978904033::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (SystemDiagnosticsSection_t3552941008), -1, sizeof(SystemDiagnosticsSection_t3552941008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2163[7] = 
{
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__properties_19(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propAssert_20(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propPerfCounters_21(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propSources_22(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propSharedListeners_23(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propSwitches_24(),
	SystemDiagnosticsSection_t3552941008_StaticFields::get_offset_of__propTrace_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (TextWriterTraceListener_t280110789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2164[1] = 
{
	TextWriterTraceListener_t280110789::get_offset_of_writer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (TraceFilter_t4153521180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2165[1] = 
{
	TraceFilter_t4153521180::get_offset_of_initializeData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (TraceInternal_t3347261369), -1, sizeof(TraceInternal_t3347261369_StaticFields), sizeof(TraceInternal_t3347261369_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2166[9] = 
{
	TraceInternal_t3347261369_StaticFields::get_offset_of_appName_0(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_listeners_1(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_autoFlush_2(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_useGlobalLock_3(),
	THREAD_STATIC_FIELD_OFFSET,
	TraceInternal_t3347261369_StaticFields::get_offset_of_indentSize_5(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_settingsInitialized_6(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_defaultInitialized_7(),
	TraceInternal_t3347261369_StaticFields::get_offset_of_critSec_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (TraceListener_t3975618648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2167[8] = 
{
	TraceListener_t3975618648::get_offset_of_indentLevel_1(),
	TraceListener_t3975618648::get_offset_of_indentSize_2(),
	TraceListener_t3975618648::get_offset_of_traceOptions_3(),
	TraceListener_t3975618648::get_offset_of_needIndent_4(),
	TraceListener_t3975618648::get_offset_of_listenerName_5(),
	TraceListener_t3975618648::get_offset_of_filter_6(),
	TraceListener_t3975618648::get_offset_of_attributes_7(),
	TraceListener_t3975618648::get_offset_of_initializeData_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (TraceListenerCollection_t1347122889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2168[1] = 
{
	TraceListenerCollection_t1347122889::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (TraceOptions_t3546477972)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2169[8] = 
{
	TraceOptions_t3546477972::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (TraceSection_t4243885952), -1, sizeof(TraceSection_t4243885952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2170[5] = 
{
	TraceSection_t4243885952_StaticFields::get_offset_of__properties_15(),
	TraceSection_t4243885952_StaticFields::get_offset_of__propListeners_16(),
	TraceSection_t4243885952_StaticFields::get_offset_of__propAutoFlush_17(),
	TraceSection_t4243885952_StaticFields::get_offset_of__propIndentSize_18(),
	TraceSection_t4243885952_StaticFields::get_offset_of__propUseGlobalLock_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (TypedElement_t2581589637), -1, sizeof(TypedElement_t2581589637_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2171[5] = 
{
	TypedElement_t2581589637_StaticFields::get_offset_of__propTypeName_15(),
	TypedElement_t2581589637_StaticFields::get_offset_of__propInitData_16(),
	TypedElement_t2581589637::get_offset_of__properties_17(),
	TypedElement_t2581589637::get_offset_of__runtimeObject_18(),
	TypedElement_t2581589637::get_offset_of__baseType_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (XmlWriterTraceListener_t2708883810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2172[3] = 
{
	XmlWriterTraceListener_t2708883810::get_offset_of_strBldr_10(),
	XmlWriterTraceListener_t2708883810::get_offset_of_xmlBlobWriter_11(),
	XmlWriterTraceListener_t2708883810::get_offset_of_shouldRespectFilterOnTraceTransfer_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (TraceUtils_t3440840616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (ConfigurationManagerInternalFactory_t3227791327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (Instance_t2576538215), -1, sizeof(Instance_t2576538215_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2175[1] = 
{
	Instance_t2576538215_StaticFields::get_offset_of_SetConfigurationSystemInProgress_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (DefaultTraceListener_t2804304119), -1, sizeof(DefaultTraceListener_t2804304119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2176[5] = 
{
	DefaultTraceListener_t2804304119_StaticFields::get_offset_of_OnWin32_9(),
	DefaultTraceListener_t2804304119_StaticFields::get_offset_of_MonoTracePrefix_10(),
	DefaultTraceListener_t2804304119_StaticFields::get_offset_of_MonoTraceFile_11(),
	DefaultTraceListener_t2804304119::get_offset_of_logFileName_12(),
	DefaultTraceListener_t2804304119::get_offset_of_assertUiEnabled_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (DiagnosticsConfigurationHandler_t2074484573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2177[2] = 
{
	DiagnosticsConfigurationHandler_t2074484573::get_offset_of_configValues_0(),
	DiagnosticsConfigurationHandler_t2074484573::get_offset_of_elementHandlers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (ElementHandler_t2521990823), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (EventLog_t3406173750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2179[3] = 
{
	EventLog_t3406173750::get_offset_of_source_4(),
	EventLog_t3406173750::get_offset_of_doRaiseEvents_5(),
	EventLog_t3406173750::get_offset_of_Impl_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (EventLogImpl_t2387799702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (EventLogInstaller_t17168626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (EventLogTraceListener_t1955492177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2182[2] = 
{
	EventLogTraceListener_t1955492177::get_offset_of_event_log_9(),
	EventLogTraceListener_t1955492177::get_offset_of_name_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (MonitoringDescriptionAttribute_t2767822115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (TraceImplSettings_t2527703222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2184[3] = 
{
	TraceImplSettings_t2527703222::get_offset_of_AutoFlush_0(),
	TraceImplSettings_t2527703222::get_offset_of_IndentSize_1(),
	TraceImplSettings_t2527703222::get_offset_of_Listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (TraceSourceInfo_t2065837391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2185[3] = 
{
	TraceSourceInfo_t2065837391::get_offset_of_name_0(),
	TraceSourceInfo_t2065837391::get_offset_of_levels_1(),
	TraceSourceInfo_t2065837391::get_offset_of_listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (ExcludeFromCodeCoverageAttribute_t3578759089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (ArrayConverter_t1750795769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (ArraySubsetEnumerator_t1645376885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2188[3] = 
{
	ArraySubsetEnumerator_t1645376885::get_offset_of_array_0(),
	ArraySubsetEnumerator_t1645376885::get_offset_of_total_1(),
	ArraySubsetEnumerator_t1645376885::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (AttributeCollection_t4221220734), -1, sizeof(AttributeCollection_t4221220734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2189[6] = 
{
	AttributeCollection_t4221220734_StaticFields::get_offset_of_Empty_0(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of__defaultAttributes_1(),
	AttributeCollection_t4221220734::get_offset_of__attributes_2(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of_internalSyncObject_3(),
	AttributeCollection_t4221220734::get_offset_of__foundAttributeTypes_4(),
	AttributeCollection_t4221220734::get_offset_of__index_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (AttributeEntry_t1001010863)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2190[2] = 
{
	AttributeEntry_t1001010863::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AttributeEntry_t1001010863::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (BooleanConverter_t941538927), -1, sizeof(BooleanConverter_t941538927_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2191[1] = 
{
	BooleanConverter_t941538927_StaticFields::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (BrowsableAttribute_t3407396667), -1, sizeof(BrowsableAttribute_t3407396667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2192[4] = 
{
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Yes_0(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_No_1(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Default_2(),
	BrowsableAttribute_t3407396667::get_offset_of_browsable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (ByteConverter_t1408362843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (CharConverter_t747842913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (Component_t3620823400), -1, sizeof(Component_t3620823400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2196[3] = 
{
	Component_t3620823400_StaticFields::get_offset_of_EventDisposed_1(),
	Component_t3620823400::get_offset_of_site_2(),
	Component_t3620823400::get_offset_of_events_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (ComponentConverter_t118941221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2199[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of_values_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
