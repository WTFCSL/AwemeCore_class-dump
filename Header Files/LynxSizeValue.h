//
//     Generated by private class-dump
//

@interface LynxSizeValue : NSObject {
    unsigned long long _type;
    double _value;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;

+ (id)sizeValueFromCSSString:(id)arg0;

- (double)convertToDevicePtWithFullSize:(double)arg0;
- (id)init;
- (id)initWithType:(unsigned long long)arg0 value:(double)arg1;
- (double)value;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setValue:(double)arg0;

@end
