//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPzSameTimeShowLimitStrategyDataModel : MTLModel <MTLJSONSerializing> {
    long long _countLimit;
    long long _threshold;
}

@property (nonatomic) long long countLimit;
@property (nonatomic) long long threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)threshold;
- (BOOL)isValid;
- (void)setThreshold:(long long)arg0;
- (void)setCountLimit:(long long)arg0;
- (long long)countLimit;

@end
