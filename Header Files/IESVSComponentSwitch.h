//
//     Generated by private class-dump
//

@interface IESVSComponentSwitch : NSObject {
    unsigned long long _value;
}

@property (nonatomic) unsigned long long value;

+ (BOOL)shouldDisableComponent:(unsigned long long)arg0;
+ (id)sharedSwitch;

- (void)shouldOpenSwitch:(BOOL)arg0;
- (unsigned long long)value;
- (void)resetValue;
- (void)setValue:(unsigned long long)arg0;

@end