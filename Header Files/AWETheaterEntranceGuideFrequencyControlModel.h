//
//     Generated by private class-dump
//

@interface AWETheaterEntranceGuideFrequencyControlModel : AWEBaseApiModel {
    long long _dayInterval;
    long long _maxCountInDayInterval;
    long long _maxCountInInstall;
}

@property (nonatomic) long long dayInterval;
@property (nonatomic) long long maxCountInDayInterval;
@property (nonatomic) long long maxCountInInstall;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setDayInterval:(long long)arg0;
- (long long)maxCountInDayInterval;
- (void)setMaxCountInDayInterval:(long long)arg0;
- (long long)maxCountInInstall;
- (void)setMaxCountInInstall:(long long)arg0;
- (long long)dayInterval;

@end
