//
//     Generated by private class-dump
//

@class NSString, BDUGLuckyCountDownPendantInfoModel;

@interface BDUGLuckyCountDownPendantModel : BDUGLuckyJSONModel {
    NSString *_token;
    BDUGLuckyCountDownPendantInfoModel *_timerComponent;
    long long _totalTime;
}

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDUGLuckyCountDownPendantInfoModel *timerComponent;
@property (nonatomic) long long totalTime;

- (id)timerComponent;
- (void)setTimerComponent:(id)arg0;
- (long long)totalTime;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (void)setTotalTime:(long long)arg0;

@end