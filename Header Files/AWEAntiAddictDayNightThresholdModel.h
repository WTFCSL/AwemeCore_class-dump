//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictDayNightThresholdModel : MTLModel <MTLJSONSerializing> {
    long long _dayBegin;
    long long _dayEnd;
}

@property (nonatomic) long long dayBegin;
@property (nonatomic) long long dayEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDayBegin:(long long)arg0 dayEnd:(long long)arg1;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)dayBegin;
- (void)setDayBegin:(long long)arg0;
- (void)setDayEnd:(long long)arg0;
- (long long)dayEnd;
- (BOOL)isValid;

@end
