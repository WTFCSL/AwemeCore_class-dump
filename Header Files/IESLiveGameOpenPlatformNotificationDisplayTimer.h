//
//     Generated by private class-dump
//

@class NSObject, IESLiveGCDTimer;
@protocol OS_dispatch_queue;

@interface IESLiveGameOpenPlatformNotificationDisplayTimer : NSObject {
    IESLiveGCDTimer *_minDisplayTimer;
    IESLiveGCDTimer *_maxDisplayTimer;
    NSObject<OS_dispatch_queue> *_noticeQueue;
    double _minDisplayTime;
    double _maxDisplayTime;
    id /* block */ _onMinDisplayTimerFiredBlock;
    id /* block */ _onMaxDisplayTimerFiredBlock;
}

@property (retain, nonatomic) IESLiveGCDTimer *minDisplayTimer;
@property (retain, nonatomic) IESLiveGCDTimer *maxDisplayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noticeQueue;
@property (nonatomic) double minDisplayTime;
@property (nonatomic) double maxDisplayTime;
@property (copy, nonatomic) id /* block */ onMinDisplayTimerFiredBlock;
@property (copy, nonatomic) id /* block */ onMaxDisplayTimerFiredBlock;

+ (id)defaultTimer;
+ (id)timerWithMinDisplayTime:(double)arg0 maxDisplayTime:(double)arg1;

- (void)onMaxDisplayTimeFired:(id /* block */)arg0;
- (void)onMinDisplayTimeFired:(id /* block */)arg0;
- (void)setMinDisplayTime:(double)arg0;
- (void)setMaxDisplayTime:(double)arg0;
- (void)setOnMinDisplayTimerFiredBlock:(id /* block */)arg0;
- (void)setOnMaxDisplayTimerFiredBlock:(id /* block */)arg0;
- (id)maxDisplayTimer;
- (void)setMaxDisplayTimer:(id)arg0;
- (double)maxDisplayTime;
- (id)noticeQueue;
- (id /* block */)onMaxDisplayTimerFiredBlock;
- (id)minDisplayTimer;
- (void)setMinDisplayTimer:(id)arg0;
- (double)minDisplayTime;
- (id /* block */)onMinDisplayTimerFiredBlock;
- (void)setNoticeQueue:(id)arg0;
- (void)schedule;
- (void).cxx_destruct;
- (void)invalidate;

@end
