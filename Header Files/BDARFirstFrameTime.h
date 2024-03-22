//
//     Generated by private class-dump
//

@class BDARVPlayerContext, BDARVSourceModel, BDARMonitorHandleTimeModel;

@interface BDARFirstFrameTime : NSObject {
    BOOL _hasSendTrack;
    BOOL _isEnterBackground;
    double _duration;
    double _durationNetRequest;
    double _durationViewRender;
    double _durationViewPlayerRender;
    double _videoWidth;
    double _videoHeight;
    BDARVPlayerContext *_context;
    BDARVSourceModel *_source;
    BDARMonitorHandleTimeModel *_monitorTimeModel;
    double _durationLynxTemplateLoad;
    double _durationLaunch;
    double _netRequestBegin;
    double _viewRenderBegin;
    double _viewPlayerRenderBegin;
    double _launchStartBegin;
    double _lynxTemplateBegin;
    double _videoAppear;
}

@property (nonatomic) BOOL isEnterBackground;
@property (nonatomic) double duration;
@property (nonatomic) double durationNetRequest;
@property (nonatomic) double durationViewRender;
@property (nonatomic) double durationLynxTemplateLoad;
@property (nonatomic) double durationViewPlayerRender;
@property (nonatomic) double durationLaunch;
@property (nonatomic) double netRequestBegin;
@property (nonatomic) double viewRenderBegin;
@property (nonatomic) double viewPlayerRenderBegin;
@property (nonatomic) double launchStartBegin;
@property (nonatomic) double lynxTemplateBegin;
@property (nonatomic) double videoAppear;
@property (nonatomic) BOOL hasSendTrack;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (retain, nonatomic) BDARVPlayerContext *context;
@property (weak, nonatomic) BDARVSourceModel *source;
@property (retain, nonatomic) BDARMonitorHandleTimeModel *monitorTimeModel;

- (BOOL)isEnterBackground;
- (void)setMonitorTimeModel:(id)arg0;
- (id)monitorTimeModel;
- (void)didEnterBackgroundNotification:(id)arg0;
- (void)willEnterForegroundNotification:(id)arg0;
- (void)setIsEnterBackground:(BOOL)arg0;
- (void)setNetRequestBegin:(double)arg0;
- (double)netRequestBegin;
- (void)setDurationNetRequest:(double)arg0;
- (void)setLynxTemplateBegin:(double)arg0;
- (double)lynxTemplateBegin;
- (void)setDurationLynxTemplateLoad:(double)arg0;
- (void)setViewRenderBegin:(double)arg0;
- (double)viewRenderBegin;
- (void)setDurationViewRender:(double)arg0;
- (void)setViewPlayerRenderBegin:(double)arg0;
- (double)viewPlayerRenderBegin;
- (void)setDurationViewPlayerRender:(double)arg0;
- (double)launchStartBegin;
- (double)durationNetRequest;
- (void)setLaunchStartBegin:(double)arg0;
- (double)durationLaunch;
- (double)durationLynxTemplateLoad;
- (double)durationViewRender;
- (id)monitorCategoryData;
- (id)monitorExtraData;
- (void)setDurationLaunch:(double)arg0;
- (void)netRequestStart:(BOOL)arg0;
- (void)lynxTemplateLoad:(BOOL)arg0;
- (void)viewRenderStart:(BOOL)arg0;
- (void)launchStart:(BOOL)arg0;
- (BOOL)hasSendTrack;
- (void)setHasSendTrack:(BOOL)arg0;
- (double)videoAppear;
- (void)setVideoAppear:(double)arg0;
- (double)durationViewPlayerRender;
- (void)viewPlayerRenderStart:(BOOL)arg0;
- (id)init;
- (id)source;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setVideoHeight:(double)arg0;
- (double)duration;
- (id)context;
- (double)videoHeight;
- (void)setVideoWidth:(double)arg0;
- (double)videoWidth;
- (void)setSource:(id)arg0;
- (void)setDuration:(double)arg0;
- (void)viewDidDisappear;

@end