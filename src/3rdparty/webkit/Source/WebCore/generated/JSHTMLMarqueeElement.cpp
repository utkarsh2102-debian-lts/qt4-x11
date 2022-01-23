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
#include "JSHTMLMarqueeElement.h"

#include "ExceptionCode.h"
#include "HTMLMarqueeElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLMarqueeElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMarqueeElementTableValues[13] =
{
    { "behavior", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementBehavior), (intptr_t)setJSHTMLMarqueeElementBehavior THUNK_GENERATOR(0) },
    { "bgColor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementBgColor), (intptr_t)setJSHTMLMarqueeElementBgColor THUNK_GENERATOR(0) },
    { "direction", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementDirection), (intptr_t)setJSHTMLMarqueeElementDirection THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementHeight), (intptr_t)setJSHTMLMarqueeElementHeight THUNK_GENERATOR(0) },
    { "hspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementHspace), (intptr_t)setJSHTMLMarqueeElementHspace THUNK_GENERATOR(0) },
    { "loop", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementLoop), (intptr_t)setJSHTMLMarqueeElementLoop THUNK_GENERATOR(0) },
    { "scrollAmount", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementScrollAmount), (intptr_t)setJSHTMLMarqueeElementScrollAmount THUNK_GENERATOR(0) },
    { "scrollDelay", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementScrollDelay), (intptr_t)setJSHTMLMarqueeElementScrollDelay THUNK_GENERATOR(0) },
    { "trueSpeed", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementTrueSpeed), (intptr_t)setJSHTMLMarqueeElementTrueSpeed THUNK_GENERATOR(0) },
    { "vspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementVspace), (intptr_t)setJSHTMLMarqueeElementVspace THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementWidth), (intptr_t)setJSHTMLMarqueeElementWidth THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMarqueeElementTable = { 36, 31, JSHTMLMarqueeElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMarqueeElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMarqueeElementConstructorTable = { 1, 0, JSHTMLMarqueeElementConstructorTableValues, 0 };
class JSHTMLMarqueeElementConstructor : public DOMConstructorObject {
public:
    JSHTMLMarqueeElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLMarqueeElementConstructor::s_info = { "HTMLMarqueeElementConstructor", &DOMConstructorObject::s_info, &JSHTMLMarqueeElementConstructorTable, 0 };

JSHTMLMarqueeElementConstructor::JSHTMLMarqueeElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLMarqueeElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLMarqueeElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMarqueeElementConstructor, JSDOMWrapper>(exec, &JSHTMLMarqueeElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLMarqueeElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMarqueeElementConstructor, JSDOMWrapper>(exec, &JSHTMLMarqueeElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMarqueeElementPrototypeTableValues[3] =
{
    { "start", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLMarqueeElementPrototypeFunctionStart), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stop", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLMarqueeElementPrototypeFunctionStop), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMarqueeElementPrototypeTable = { 5, 3, JSHTMLMarqueeElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLMarqueeElementPrototype::s_info = { "HTMLMarqueeElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLMarqueeElementPrototypeTable, 0 };

JSObject* JSHTMLMarqueeElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMarqueeElement>(exec, globalObject);
}

bool JSHTMLMarqueeElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLMarqueeElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLMarqueeElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLMarqueeElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLMarqueeElement::s_info = { "HTMLMarqueeElement", &JSHTMLElement::s_info, &JSHTMLMarqueeElementTable, 0 };

JSHTMLMarqueeElement::JSHTMLMarqueeElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMarqueeElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLMarqueeElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLMarqueeElementPrototype(exec->globalData(), globalObject, JSHTMLMarqueeElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLMarqueeElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMarqueeElement, Base>(exec, &JSHTMLMarqueeElementTable, this, propertyName, slot);
}

bool JSHTMLMarqueeElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMarqueeElement, Base>(exec, &JSHTMLMarqueeElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLMarqueeElementBehavior(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::behaviorAttr));
    return result;
}


JSValue jsHTMLMarqueeElementBgColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::bgcolorAttr));
    return result;
}


JSValue jsHTMLMarqueeElementDirection(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::directionAttr));
    return result;
}


JSValue jsHTMLMarqueeElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::heightAttr));
    return result;
}


JSValue jsHTMLMarqueeElementHspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsNumber(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr)));
    return result;
}


JSValue jsHTMLMarqueeElementLoop(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->loop());
    return result;
}


JSValue jsHTMLMarqueeElementScrollAmount(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->scrollAmount());
    return result;
}


JSValue jsHTMLMarqueeElementScrollDelay(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->scrollDelay());
    return result;
}


JSValue jsHTMLMarqueeElementTrueSpeed(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::truespeedAttr));
    return result;
}


JSValue jsHTMLMarqueeElementVspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsNumber(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr)));
    return result;
}


JSValue jsHTMLMarqueeElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}


JSValue jsHTMLMarqueeElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMarqueeElement* domObject = static_cast<JSHTMLMarqueeElement*>(asObject(slotBase));
    return JSHTMLMarqueeElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLMarqueeElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLMarqueeElement, Base>(exec, propertyName, value, &JSHTMLMarqueeElementTable, this, slot);
}

void setJSHTMLMarqueeElementBehavior(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::behaviorAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMarqueeElementBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::bgcolorAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMarqueeElementDirection(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::directionAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMarqueeElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLMarqueeElementHspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::hspaceAttr, value.toUInt32(exec));
}


void setJSHTMLMarqueeElementLoop(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setLoop(value.toInt32(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementScrollAmount(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setScrollAmount(value.toInt32(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementScrollDelay(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setScrollDelay(value.toInt32(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementTrueSpeed(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::truespeedAttr, value.toBoolean(exec));
}


void setJSHTMLMarqueeElementVspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::vspaceAttr, value.toUInt32(exec));
}


void setJSHTMLMarqueeElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(thisObject);
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLMarqueeElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMarqueeElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStart(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLMarqueeElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(thisValue));
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());

    imp->start();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStop(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLMarqueeElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLMarqueeElement* castedThis = static_cast<JSHTMLMarqueeElement*>(asObject(thisValue));
    HTMLMarqueeElement* imp = static_cast<HTMLMarqueeElement*>(castedThis->impl());

    imp->stop();
    return JSValue::encode(jsUndefined());
}


}
