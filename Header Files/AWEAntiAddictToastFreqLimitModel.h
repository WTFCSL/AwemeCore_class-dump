//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictToastFreqLimitModel : MTLModel <MTLJSONSerializing> {
    long long _oncePerXDays;
    long long _noClickPeriod;
}

@property (nonatomic) long long oncePerXDays;
@property (nonatomic) long long noClickPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)oncePerXDays;
- (long long)noClickPeriod;
- (void)setOncePerXDays:(long long)arg0;
- (void)setNoClickPeriod:(long long)arg0;
- (BOOL)isValid;

@end
