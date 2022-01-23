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

#if ENABLE(DATALIST)

#include "JSHTMLDataListElement.h"

#include "HTMLCollection.h"
#include "HTMLDataListElement.h"
#include "JSHTMLCollection.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLDataListElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDataListElementTableValues[3] =
{
    { "options", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDataListElementOptions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDataListElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDataListElementTable = { 4, 3, JSHTMLDataListElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDataListElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDataListElementConstructorTable = { 1, 0, JSHTMLDataListElementConstructorTableValues, 0 };
class JSHTMLDataListElementConstructor : public DOMConstructorObject {
public:
    JSHTMLDataListElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLDataListElementConstructor::s_info = { "HTMLDataListElementConstructor", &DOMConstructorObject::s_info, &JSHTMLDataListElementConstructorTable, 0 };

JSHTMLDataListElementConstructor::JSHTMLDataListElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLDataListElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLDataListElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDataListElementConstructor, JSDOMWrapper>(exec, &JSHTMLDataListElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLDataListElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDataListElementConstructor, JSDOMWrapper>(exec, &JSHTMLDataListElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDataListElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDataListElementPrototypeTable = { 1, 0, JSHTMLDataListElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDataListElementPrototype::s_info = { "HTMLDataListElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLDataListElementPrototypeTable, 0 };

JSObject* JSHTMLDataListElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDataListElement>(exec, globalObject);
}

const ClassInfo JSHTMLDataListElement::s_info = { "HTMLDataListElement", &JSHTMLElement::s_info, &JSHTMLDataListElementTable, 0 };

JSHTMLDataListElement::JSHTMLDataListElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDataListElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLDataListElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLDataListElementPrototype(exec->globalData(), globalObject, JSHTMLDataListElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLDataListElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDataListElement, Base>(exec, &JSHTMLDataListElementTable, this, propertyName, slot);
}

bool JSHTMLDataListElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDataListElement, Base>(exec, &JSHTMLDataListElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLDataListElementOptions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLDataListElement* castedThis = static_cast<JSHTMLDataListElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLDataListElement* imp = static_cast<HTMLDataListElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->options()));
    return result;
}


JSValue jsHTMLDataListElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLDataListElement* domObject = static_cast<JSHTMLDataListElement*>(asObject(slotBase));
    return JSHTMLDataListElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSHTMLDataListElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDataListElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(DATALIST)
