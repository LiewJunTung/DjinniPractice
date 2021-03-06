// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from calculator.djinni

#import "HWCalculator+Private.h"
#import "HWCalculator.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface HWCalculator ()

- (id)initWithCpp:(const std::shared_ptr<::calculator::Calculator>&)cppRef;

@end

@implementation HWCalculator {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::calculator::Calculator>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::calculator::Calculator>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable HWCalculator *)create {
    try {
        auto objcpp_result_ = ::calculator::Calculator::create();
        return ::djinni_generated::Calculator::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)summation:(int32_t)number1
             number2:(int32_t)number2 {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->summation(::djinni::I32::toCpp(number1),
                                                             ::djinni::I32::toCpp(number2));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)multiplication:(int32_t)number1
                  number2:(int32_t)number2 {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->multiplication(::djinni::I32::toCpp(number1),
                                                                  ::djinni::I32::toCpp(number2));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)subtraction:(int32_t)number1
               number2:(int32_t)number2 {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->subtraction(::djinni::I32::toCpp(number1),
                                                               ::djinni::I32::toCpp(number2));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)division:(int32_t)number1
            number2:(int32_t)number2 {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->division(::djinni::I32::toCpp(number1),
                                                            ::djinni::I32::toCpp(number2));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)printAString:(nonnull NSString *)str {
    try {
        _cppRefHandle.get()->print_a_string(::djinni::String::toCpp(str));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Calculator::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Calculator::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<HWCalculator>(cpp);
}

}  // namespace djinni_generated

@end
