/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_AUDIO)

#include "JSHighPass2FilterNode.h"

#include "AudioParam.h"
#include "HighPass2FilterNode.h"
#include "JSAudioParam.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHighPass2FilterNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHighPass2FilterNodeTableValues[4] =
{
    { "cutoff", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHighPass2FilterNodeCutoff), (intptr_t)0 THUNK_GENERATOR(0) },
    { "resonance", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHighPass2FilterNodeResonance), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHighPass2FilterNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHighPass2FilterNodeTable = { 9, 7, JSHighPass2FilterNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHighPass2FilterNodeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHighPass2FilterNodeConstructorTable = { 1, 0, JSHighPass2FilterNodeConstructorTableValues, 0 };
class JSHighPass2FilterNodeConstructor : public DOMConstructorObject {
public:
    JSHighPass2FilterNodeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHighPass2FilterNodeConstructor::s_info = { "HighPass2FilterNodeConstructor", &DOMConstructorObject::s_info, &JSHighPass2FilterNodeConstructorTable, 0 };

JSHighPass2FilterNodeConstructor::JSHighPass2FilterNodeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHighPass2FilterNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHighPass2FilterNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHighPass2FilterNodeConstructor, JSDOMWrapper>(exec, &JSHighPass2FilterNodeConstructorTable, this, propertyName, slot);
}

bool JSHighPass2FilterNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHighPass2FilterNodeConstructor, JSDOMWrapper>(exec, &JSHighPass2FilterNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHighPass2FilterNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHighPass2FilterNodePrototypeTable = { 1, 0, JSHighPass2FilterNodePrototypeTableValues, 0 };
const ClassInfo JSHighPass2FilterNodePrototype::s_info = { "HighPass2FilterNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHighPass2FilterNodePrototypeTable, 0 };

JSObject* JSHighPass2FilterNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHighPass2FilterNode>(exec, globalObject);
}

const ClassInfo JSHighPass2FilterNode::s_info = { "HighPass2FilterNode", &JSAudioNode::s_info, &JSHighPass2FilterNodeTable, 0 };

JSHighPass2FilterNode::JSHighPass2FilterNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HighPass2FilterNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHighPass2FilterNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHighPass2FilterNodePrototype(exec->globalData(), globalObject, JSHighPass2FilterNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSHighPass2FilterNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHighPass2FilterNode, Base>(exec, &JSHighPass2FilterNodeTable, this, propertyName, slot);
}

bool JSHighPass2FilterNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHighPass2FilterNode, Base>(exec, &JSHighPass2FilterNodeTable, this, propertyName, descriptor);
}

JSValue jsHighPass2FilterNodeCutoff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHighPass2FilterNode* castedThis = static_cast<JSHighPass2FilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HighPass2FilterNode* imp = static_cast<HighPass2FilterNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cutoff()));
    return result;
}


JSValue jsHighPass2FilterNodeResonance(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHighPass2FilterNode* castedThis = static_cast<JSHighPass2FilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HighPass2FilterNode* imp = static_cast<HighPass2FilterNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->resonance()));
    return result;
}


JSValue jsHighPass2FilterNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHighPass2FilterNode* domObject = static_cast<JSHighPass2FilterNode*>(asObject(slotBase));
    return JSHighPass2FilterNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSHighPass2FilterNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHighPass2FilterNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, HighPass2FilterNode* impl)
{
    return wrap<JSHighPass2FilterNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
