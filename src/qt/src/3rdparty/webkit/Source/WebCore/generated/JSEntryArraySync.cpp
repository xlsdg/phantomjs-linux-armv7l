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

#if ENABLE(FILE_SYSTEM)

#include "JSEntryArraySync.h"

#include "EntryArraySync.h"
#include "EntrySync.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEntrySync.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSEntryArraySync);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntryArraySyncTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryArraySyncLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntryArraySyncConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntryArraySyncTable = { 5, 3, JSEntryArraySyncTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntryArraySyncConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntryArraySyncConstructorTable = { 1, 0, JSEntryArraySyncConstructorTableValues, 0 };
class JSEntryArraySyncConstructor : public DOMConstructorObject {
public:
    JSEntryArraySyncConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSEntryArraySyncConstructor::s_info = { "EntryArraySyncConstructor", &DOMConstructorObject::s_info, &JSEntryArraySyncConstructorTable, 0 };

JSEntryArraySyncConstructor::JSEntryArraySyncConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSEntryArraySyncPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSEntryArraySyncConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntryArraySyncConstructor, JSDOMWrapper>(exec, &JSEntryArraySyncConstructorTable, this, propertyName, slot);
}

bool JSEntryArraySyncConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEntryArraySyncConstructor, JSDOMWrapper>(exec, &JSEntryArraySyncConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSEntryArraySyncPrototypeTableValues[2] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsEntryArraySyncPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSEntryArraySyncPrototypeTable = { 2, 1, JSEntryArraySyncPrototypeTableValues, 0 };
static const HashTable* getJSEntryArraySyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEntryArraySyncPrototypeTable);
}

const ClassInfo JSEntryArraySyncPrototype::s_info = { "EntryArraySyncPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSEntryArraySyncPrototypeTable };

JSObject* JSEntryArraySyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEntryArraySync>(exec, globalObject);
}

bool JSEntryArraySyncPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSEntryArraySyncPrototypeTable(exec), this, propertyName, slot);
}

bool JSEntryArraySyncPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSEntryArraySyncPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSEntryArraySyncTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSEntryArraySyncTable);
}

const ClassInfo JSEntryArraySync::s_info = { "EntryArraySync", &JSDOMWrapper::s_info, 0, getJSEntryArraySyncTable };

JSEntryArraySync::JSEntryArraySync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<EntryArraySync> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSEntryArraySync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSEntryArraySyncPrototype(exec->globalData(), globalObject, JSEntryArraySyncPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSEntryArraySync::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSEntryArraySyncTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<EntryArraySync*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSEntryArraySync, Base>(exec, getJSEntryArraySyncTable(exec), this, propertyName, slot);
}

bool JSEntryArraySync::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSEntryArraySyncTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<EntryArraySync*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    return getStaticValueDescriptor<JSEntryArraySync, Base>(exec, getJSEntryArraySyncTable(exec), this, propertyName, descriptor);
}

bool JSEntryArraySync::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<EntryArraySync*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsEntryArraySyncLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntryArraySync* castedThis = static_cast<JSEntryArraySync*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EntryArraySync* imp = static_cast<EntryArraySync*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsEntryArraySyncConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSEntryArraySync* domObject = static_cast<JSEntryArraySync*>(asObject(slotBase));
    return JSEntryArraySync::getConstructor(exec, domObject->globalObject());
}

void JSEntryArraySync::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<EntryArraySync*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSEntryArraySync::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEntryArraySyncConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEntryArraySyncPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEntryArraySync::s_info))
        return throwVMTypeError(exec);
    JSEntryArraySync* castedThis = static_cast<JSEntryArraySync*>(asObject(thisValue));
    EntryArraySync* imp = static_cast<EntryArraySync*>(castedThis->impl());
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSEntryArraySync::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSEntryArraySync* thisObj = static_cast<JSEntryArraySync*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<EntryArraySync*>(thisObj->impl())->item(index));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, EntryArraySync* impl)
{
    return wrap<JSEntryArraySync>(exec, globalObject, impl);
}

EntryArraySync* toEntryArraySync(JSC::JSValue value)
{
    return value.inherits(&JSEntryArraySync::s_info) ? static_cast<JSEntryArraySync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
