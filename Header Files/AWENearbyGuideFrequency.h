//
//     Generated by private class-dump
//

@interface AWENearbyGuideFrequency : AWEBaseApiModel {
    long long _dayRange;
    long long _guideTimes;
    long long _maxGuideTimes;
}

@property (nonatomic) long long dayRange;
@property (nonatomic) long long guideTimes;
@property (nonatomic) long long maxGuideTimes;

+ (BOOL)automaticallyDefaultMapping;

- (long long)maxGuideTimes;
- (long long)guideTimes;
- (long long)dayRange;
- (void)setDayRange:(long long)arg0;
- (void)setGuideTimes:(long long)arg0;
- (void)setMaxGuideTimes:(long long)arg0;

@end
