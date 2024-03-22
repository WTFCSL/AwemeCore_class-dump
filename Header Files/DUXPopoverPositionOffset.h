//
//     Generated by private class-dump
//

@class NSString;

@interface DUXPopoverPositionOffset : NSObject <ACCDUXPopoverPositionOffsetInstance> {
    unsigned long long _direction;
    unsigned long long _type;
    double _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;

+ (id)offsetWithDirection:(unsigned long long)arg0 type:(unsigned long long)arg1 value:(double)arg2;

- (id)init;
- (double)value;
- (unsigned long long)direction;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setValue:(double)arg0;
- (void)setDirection:(unsigned long long)arg0;

@end