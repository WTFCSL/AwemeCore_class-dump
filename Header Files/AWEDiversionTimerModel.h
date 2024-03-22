//
//     Generated by private class-dump
//

@class NSString, AWEDiversionTimerConfigModel;

@interface AWEDiversionTimerModel : AWEBaseApiModel {
    BOOL _finish;
    long long _totalTime;
    double _endTime;
    AWEDiversionTimerConfigModel *_timerConfig;
    NSString *_toast;
}

@property (nonatomic) long long totalTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) AWEDiversionTimerConfigModel *timerConfig;
@property (nonatomic) BOOL finish;
@property (copy, nonatomic) NSString *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (id)timerConfig;
- (void)setTimerConfig:(id)arg0;
- (long long)totalTime;
- (void).cxx_destruct;
- (BOOL)finish;
- (double)endTime;
- (void)setEndTime:(double)arg0;
- (void)setTotalTime:(long long)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)setFinish:(BOOL)arg0;

@end