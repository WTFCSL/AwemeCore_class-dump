//
//     Generated by private class-dump
//

@class RACSignal, ACCCountDownModel;

@protocol ACCCountDownProvideProtocol <NSObject>

@property (nonatomic) long long delayRecordMode;
@property (retain, nonatomic) ACCCountDownModel *countDownModel;
@property (readonly, nonatomic) RACSignal *dismissCountDownPanelSignal;

- (long long)delayRecordMode;
- (void)setDelayRecordMode:(long long)arg0;
- (id)countDownModel;
- (void)setCountDownModel:(id)arg0;
- (id)dismissCountDownPanelSignal;

@end
