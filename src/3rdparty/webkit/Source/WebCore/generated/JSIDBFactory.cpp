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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBFactory.h"

#include "ExceptionCode.h"
#include "IDBFactory.h"
#include "IDBRequest.h"
#include "JSDOMBinding.h"
#include "JSIDBRequest.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBFactory);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBFactoryTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBFactoryConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBFactoryTable = { 2, 1, JSIDBFactoryTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBFactoryConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBFactoryConstructorTable = { 1, 0, JSIDBFactoryConstructorTableValues, 0 };
class JSIDBFactoryConstructor : public DOMConstructorObject {
public:
    JSIDBFactoryConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBFactoryConstructor::s_info = { "IDBFactoryConstructor", &DOMConstructorObject::s_info, &JSIDBFactoryConstructorTable, 0 };

JSIDBFactoryConstructor::JSIDBFactoryConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSIDBFactoryPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBFactoryConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBFactoryConstructor, JSDOMWrapper>(exec, &JSIDBFactoryConstructorTable, this, propertyName, slot);
}

bool JSIDBFactoryConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBFactoryConstructor, JSDOMWrapper>(exec, &JSIDBFactoryConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBFactoryPrototypeTableValues[2] =
{
    { "open", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBFactoryPrototypeFunctionOpen), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBFactoryPrototypeTable = { 2, 1, JSIDBFactoryPrototypeTableValues, 0 };
const ClassInfo JSIDBFactoryPrototype::s_info = { "IDBFactoryPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBFactoryPrototypeTable, 0 };

JSObject* JSIDBFactoryPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBFactory>(exec, globalObject);
}

bool JSIDBFactoryPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSIDBFactoryPrototypeTable, this, propertyName, slot);
}

bool JSIDBFactoryPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSIDBFactoryPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSIDBFactory::s_info = { "IDBFactory", &JSDOMWrapper::s_info, &JSIDBFactoryTable, 0 };

JSIDBFactory::JSIDBFactory(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBFactory> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBFactory::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBFactoryPrototype(exec->globalData(), globalObject, JSIDBFactoryPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSIDBFactory::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBFactory, Base>(exec, &JSIDBFactoryTable, this, propertyName, slot);
}

bool JSIDBFactory::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBFactory, Base>(exec, &JSIDBFactoryTable, this, propertyName, descriptor);
}

JSValue jsIDBFactoryConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBFactory* domObject = static_cast<JSIDBFactory*>(asObject(slotBase));
    return JSIDBFactory::getConstructor(exec, domObject->globalObject());
}

JSValue JSIDBFactory::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBFactoryConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBFactoryPrototypeFunctionOpen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBFactory::s_info))
        return throwVMTypeError(exec);
    JSIDBFactory* castedThis = static_cast<JSIDBFactory*>(asObject(thisValue));
    IDBFactory* imp = static_cast<IDBFactory*>(castedThis->impl());
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    const String& name(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->open(scriptContext, name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBFactory* impl)
{
    return wrap<JSIDBFactory>(exec, globalObject, impl);
}

IDBFactory* toIDBFactory(JSC::JSValue value)
{
    return value.inherits(&JSIDBFactory::s_info) ? static_cast<JSIDBFactory*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
