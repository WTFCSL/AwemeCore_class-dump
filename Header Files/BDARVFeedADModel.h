//
//     Generated by private class-dump
//

@interface BDARVFeedADModel : NSObject {
    long long _adType;
    long long _styleType;
    double _scaleRate;
}

@property (nonatomic) long long adType;
@property (nonatomic) long long styleType;
@property (nonatomic) double scaleRate;

- (id)initWithAdType:(long long)arg0 styleType:(long long)arg1 scaleRate:(double)arg2;
- (void)setStyleType:(long long)arg0;
- (double)scaleRate;
- (void)setScaleRate:(double)arg0;
- (long long)styleType;
- (long long)adType;
- (void)setAdType:(long long)arg0;

@end
