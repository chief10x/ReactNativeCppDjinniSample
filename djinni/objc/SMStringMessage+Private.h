// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from StringMessage.djinni

#include "string_message.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class SMStringMessage;

namespace djinni_generated {

class StringMessage
{
public:
    using CppType = std::shared_ptr<::stringmessage::StringMessage>;
    using CppOptType = std::shared_ptr<::stringmessage::StringMessage>;
    using ObjcType = SMStringMessage*;

    using Boxed = StringMessage;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

