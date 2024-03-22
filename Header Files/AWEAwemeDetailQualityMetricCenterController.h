//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAwemeDetailQualityMetricCenterController : AWEAwemeNewDetailBaseController <AWEFeedPiPDelegate, AWEFeedControllerProtocol> {
    double _pipDuration;
    double _pipStartTimeStamp;
    double _pipEndTimeStamp;
}

@property (nonatomic) double pipDuration;
@property (nonatomic) double pipStartTimeStamp;
@property (nonatomic) double pipEndTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)getCurrentPlayTime;
- (void)p_appDidBecomeActive:(id)arg0;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)detailCellViewController:(id)arg0 awemeModel:(id)arg1 playerPlayTime:(double)arg2 canPlayTime:(double)arg3 totalTime:(double)arg4;
- (void)detailCellViewController:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)p_addObserversAndNotifications;
- (void)pip_init;
- (void)pip_updateStatus;
- (void)handleFeedAutoPlayNextNotification:(id)arg0;
- (void)pip_stopPiPIfActive;
- (void)pip_playWhenTableViewDidEndDisplay;
- (void)pip_updateProgress:(id)arg0 playTime:(double)arg1 totalTime:(double)arg2;
- (void)pip_dismissMixPanel;
- (void)setPipStartTimeStamp:(double)arg0;
- (void)trackEnterSmallWindowMode;
- (void)setPipEndTimeStamp:(double)arg0;
- (double)pipEndTimeStamp;
- (double)pipStartTimeStamp;
- (void)setPipDuration:(double)arg0;
- (void)trackCloseSmallWindowModeWithEventType:(id)arg0;
- (void)trackSmallWindowModeDurationWithDuration:(id)arg0 enterMethod:(id)arg1;
- (void)pip_playPre;
- (void)trackPiPVideoWithEvent:(id)arg0;
- (void)pip_playNext;
- (void)p_pipUpdateStatus;
- (void)p_pipUpdatePregress:(id)arg0 playTime:(double)arg1 totalTime:(double)arg2;
- (void)pip_playWithIndex:(long long)arg0;
- (void)p_pipPlayWhenTableViewDidEndDisplay;
- (void)pip_serviceWillStart:(id)arg0;
- (void)pip_serviceDidStart:(id)arg0;
- (void)pip_service:(id)arg0 willStopForRestore:(BOOL)arg1;
- (void)pip_service:(id)arg0 didStopForRestore:(BOOL)arg1;
- (void)pip_service:(id)arg0 restoreFromForeground:(BOOL)arg1;
- (void)pip_service:(id)arg0 failedToStartWithError:(id)arg1;
- (void)pip_service:(id)arg0 didTransToNewSize:(struct CGSize { double x0; double x1; })arg1;
- (void)pip_service:(id)arg0 seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (void)pip_service:(id)arg0 isPlaying:(BOOL)arg1;
- (void)pip_service:(id)arg0 getPlayerContext:(id)arg1;
- (void)pip_service:(id)arg0 unbindPlayerContext:(id)arg1;
- (void)pip_service:(id)arg0 bindPlayerContext:(id)arg1;
- (void)pip_servicePreBtnClicked:(id)arg0;
- (void)pip_servicePlayBtnClicked:(id)arg0;
- (void)pip_serviceNextBtnClicked:(id)arg0;
- (void)pip_service:(id)arg0 triggeredWithType:(unsigned long long)arg1 ToScene:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (id)videoController;
- (double)pipDuration;

@end
