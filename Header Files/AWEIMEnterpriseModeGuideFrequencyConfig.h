//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMEnterpriseModeGuideFrequencyConfig : MTLModel <MTLJSONSerializing> {
    long long _intervalHours;
    long long _maxShownTimes;
}

@property (nonatomic) long long intervalHours;
@property (nonatomic) long long maxShownTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIntervalHours:(long long)arg0;
- (long long)intervalHours;
- (long long)maxShownTimes;
- (void)setMaxShownTimes:(long long)arg0;

@end