//
//     Generated by private class-dump
//

@interface AWEPzUnconsumedCoolDownStrategyDataModel : AWEPzStrategyBaseRecordDataModel {
    long long _exitTime;
    long long _countLimit;
}

@property (nonatomic) long long exitTime;
@property (nonatomic) long long countLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;
- (void)setCountLimit:(long long)arg0;
- (long long)countLimit;
- (long long)exitTime;
- (void)setExitTime:(long long)arg0;

@end
