// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from calculator.djinni

package com.example.juntung1;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Calculator {
    public abstract int summation(int number1, int number2);

    public abstract int multiplication(int number1, int number2);

    public abstract int subtraction(int number1, int number2);

    public abstract int division(int number1, int number2);

    public abstract void printAString(String str);

    public static native Calculator create();

    private static final class CppProxy extends Calculator
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public int summation(int number1, int number2)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_summation(this.nativeRef, number1, number2);
        }
        private native int native_summation(long _nativeRef, int number1, int number2);

        @Override
        public int multiplication(int number1, int number2)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_multiplication(this.nativeRef, number1, number2);
        }
        private native int native_multiplication(long _nativeRef, int number1, int number2);

        @Override
        public int subtraction(int number1, int number2)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_subtraction(this.nativeRef, number1, number2);
        }
        private native int native_subtraction(long _nativeRef, int number1, int number2);

        @Override
        public int division(int number1, int number2)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_division(this.nativeRef, number1, number2);
        }
        private native int native_division(long _nativeRef, int number1, int number2);

        @Override
        public void printAString(String str)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_printAString(this.nativeRef, str);
        }
        private native void native_printAString(long _nativeRef, String str);
    }
}
