//
//     Generated by private class-dump
//

@class NSTimer, NSString;

@interface AWECommentPrefMonitorSession : NSObject {
    double _beginTime;
    double _uiBeginTime;
    double _uiEndTime;
    double _netBeginTime;
    double _netEndTime;
    double _endTime;
    NSTimer *_timer;
    NSString *_aweme;
    long long _result;
}

@property (nonatomic) double beginTime;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiEndTime;
@property (nonatomic) double netBeginTime;
@property (nonatomic) double netEndTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSString *aweme;
@property (nonatomic) long long result;

- (id)aweme;
- (void)uiBegin;
- (void)uiEnd;
- (void)setAweme:(id)arg0;
- (void)netBegin;
- (void)netEnd;
- (void)setUiBeginTime:(double)arg0;
- (void)setUiEndTime:(double)arg0;
- (void)setNetBeginTime:(double)arg0;
- (void)setNetEndTime:(double)arg0;
- (void)trackWithResult:(long long)arg0;
- (double)uiBeginTime;
- (double)uiEndTime;
- (double)netBeginTime;
- (double)netEndTime;
- (void)end;
- (id)timer;
- (id)init;
- (void)setResult:(long long)arg0;
- (void).cxx_destruct;
- (long long)result;
- (void)setBeginTime:(double)arg0;
- (double)endTime;
- (void)setTimer:(id)arg0;
- (void)timeout;
- (void)clear;
- (void)setEndTime:(double)arg0;
- (double)beginTime;
- (void)handleData;

@end
