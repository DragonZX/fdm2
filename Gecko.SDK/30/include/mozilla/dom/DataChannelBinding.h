/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_DataChannelBinding_h__
#define mozilla_dom_DataChannelBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

class nsDOMDataChannel;

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(RTCDataChannelState, uint32_t)
  Connecting,
  Open,
  Closing,
  Closed
MOZ_END_ENUM_CLASS(RTCDataChannelState)

namespace RTCDataChannelStateValues {
extern const EnumEntry strings[5];
} // namespace RTCDataChannelStateValues



MOZ_BEGIN_ENUM_CLASS(RTCDataChannelType, uint32_t)
  Arraybuffer,
  Blob
MOZ_END_ENUM_CLASS(RTCDataChannelType)

namespace RTCDataChannelTypeValues {
extern const EnumEntry strings[3];
} // namespace RTCDataChannelTypeValues


namespace DataChannelBinding {

  typedef nsDOMDataChannel NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, nsDOMDataChannel* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace DataChannelBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DataChannelBinding_h__
