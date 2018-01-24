
```sh
./deps/djinni/src/run --idl ./calculator.djinni \ 
    --java-out ./java/com/example/juntung1 \ 
    --java-package com.example.juntung1 \
    --cpp-out ./cpp \
    --cpp-namespace calculator \
    --jni-out ./jni \
    --ident-jni-class NativeFooBar \
    --ident-jni-file NativeFooBar 
```

## Explaination
* --idl = The path/name of the djinni file
* --java-out = The path for the generated Java files
* --cpp-out = The path for the generated C++ files
* --cpp-namespace = Namespace for the generated C++ files
* --jni-out = The path for the generated JNI files
* ident-jni-class = The style of the JNI classes. FooBar is just the placeholder
  * __Example__
    * Assume that the generated class is Calculator
    * NativeFooBar => NativeCalculator
    * xyzFooBar => xyzCalculator
* ident-jni-file = Same as the example above, but this is for the generated JNI files.


