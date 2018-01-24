// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from fibonacci.djinni

#include "NativeCalculator.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeCalculator::NativeCalculator() : ::djinni::JniInterface<::calculator::Calculator, NativeCalculator>("com/example/juntung1/Calculator$CppProxy") {}

NativeCalculator::~NativeCalculator() = default;


CJNIEXPORT void JNICALL Java_com_example_juntung1_Calculator_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::calculator::Calculator>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_example_juntung1_Calculator_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::calculator::Calculator::create();
        return ::djinni::release(::djinni_generated::NativeCalculator::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_example_juntung1_Calculator_00024CppProxy_native_1summation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_number1, jint j_number2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::calculator::Calculator>(nativeRef);
        auto r = ref->summation(::djinni::I32::toCpp(jniEnv, j_number1),
                                ::djinni::I32::toCpp(jniEnv, j_number2));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_example_juntung1_Calculator_00024CppProxy_native_1multiplication(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_number1, jint j_number2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::calculator::Calculator>(nativeRef);
        auto r = ref->multiplication(::djinni::I32::toCpp(jniEnv, j_number1),
                                     ::djinni::I32::toCpp(jniEnv, j_number2));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_example_juntung1_Calculator_00024CppProxy_native_1subtraction(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_number1, jint j_number2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::calculator::Calculator>(nativeRef);
        auto r = ref->subtraction(::djinni::I32::toCpp(jniEnv, j_number1),
                                  ::djinni::I32::toCpp(jniEnv, j_number2));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_example_juntung1_Calculator_00024CppProxy_native_1division(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_number1, jint j_number2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::calculator::Calculator>(nativeRef);
        auto r = ref->division(::djinni::I32::toCpp(jniEnv, j_number1),
                               ::djinni::I32::toCpp(jniEnv, j_number2));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated