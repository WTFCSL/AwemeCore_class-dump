//
//     Generated by private class-dump
//

@class IESLiveGCDTimer, NSDate;

@interface AWELiveExposedPingElement : AWELiveBaseElement {
    BOOL _hadUploadTime;
    NSDate *_enterDate;
    IESLiveGCDTimer *_timer;
}

@property (retain, nonatomic) NSDate *enterDate;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL hadUploadTime;

- (void)setEnterDate:(id)arg0;
- (id)enterDate;
- (void)viewController_viewDidDisAppear;
- (void)streamPlayer_stop;
- (void)reportPreStreamExpose;
- (void)startReportPreStreamBrowseTime;
- (void)endReportPreStreamBrowseTime;
- (void)setHadUploadTime:(BOOL)arg0;
- (void)reportPerStreamBrowseTimeWithType:(long long)arg0;
- (BOOL)hadUploadTime;
- (void)streamPlayer_firstFrame;
- (id)timer;
- (void)invalidateTimer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)reset;

@end
