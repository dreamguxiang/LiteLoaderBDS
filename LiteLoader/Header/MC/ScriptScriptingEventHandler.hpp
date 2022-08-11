// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptScriptingEventHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSCRIPTINGEVENTHANDLER
public:
    class ScriptScriptingEventHandler& operator=(class ScriptScriptingEventHandler const &) = delete;
    ScriptScriptingEventHandler(class ScriptScriptingEventHandler const &) = delete;
    ScriptScriptingEventHandler() = delete;
#endif


public:
    /*0*/ virtual ~ScriptScriptingEventHandler();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct BeforeWatchdogTerminateEvent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSCRIPTINGEVENTHANDLER
#endif

//private:
    MCAPI bool _handleWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemEvents>) const;


private:


};