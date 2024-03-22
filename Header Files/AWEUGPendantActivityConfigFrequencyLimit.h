//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEUGPendantActivityConfigFrequencyLimit : MTLModel <MTLJSONSerializing> {
    unsigned long long _frequencyLimitType;
    long long _daysWindow;
    long long _maxClose;
    long long _daysNoShow;
}

@property (nonatomic) unsigned long long frequencyLimitType;
@property (nonatomic) long long daysWindow;
@property (nonatomic) long long maxClose;
@property (nonatomic) long long daysNoShow;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)frequencyLimitType;
- (long long)daysWindow;
- (long long)daysNoShow;
- (long long)maxClose;
- (void)setFrequencyLimitType:(unsigned long long)arg0;
- (void)setDaysWindow:(long long)arg0;
- (void)setMaxClose:(long long)arg0;
- (void)setDaysNoShow:(long long)arg0;

@end