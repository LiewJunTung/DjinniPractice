// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from calculator.djinni

#import <Foundation/Foundation.h>
@class HWCalculator;


@interface HWCalculator : NSObject

+ (nullable HWCalculator *)create;

- (int32_t)summation:(int32_t)number1
             number2:(int32_t)number2;

- (int32_t)multiplication:(int32_t)number1
                  number2:(int32_t)number2;

- (int32_t)subtraction:(int32_t)number1
               number2:(int32_t)number2;

- (int32_t)division:(int32_t)number1
            number2:(int32_t)number2;

- (void)printAString:(nonnull NSString *)str;

@end
