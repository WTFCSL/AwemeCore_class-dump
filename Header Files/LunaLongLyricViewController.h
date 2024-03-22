//
//     Generated by private class-dump
//

@class _TtC21AWEMusicStreamingImpl13LongLyricView, NSString, CADisplayLink, AWEMusicDSPEventModel, UIView, AWEMusicFeedViewModel, _TtC21AWEMusicStreamingImpl23LunaLongLyricDataSource;
@protocol MusicService;

@interface LunaLongLyricViewController : AWEMiniLunaBaseViewController <AWEMusicStreamingImpl.LongLyricViewDelegate, AWEMusicServiceDelegate, AWEMusicDispatchLunaV2Protocol, AWEMusicStreamingImpl.BNSnackBarShowing, LunaLongLyricTransitionInnerContextProvider> {
    BOOL _isShowing;
    id<MusicService> _musicService;
    AWEMusicDSPEventModel *_eventModel;
    _TtC21AWEMusicStreamingImpl13LongLyricView *_longLyricView;
    _TtC21AWEMusicStreamingImpl23LunaLongLyricDataSource *_longLyricDataSource;
    CADisplayLink *_displayLink;
    AWEMusicFeedViewModel *_previousModel;
    double _previousCardAppearTimestamp;
    NSString *_previousReportPageStatusID;
}

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl13LongLyricView *longLyricView;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl23LunaLongLyricDataSource *longLyricDataSource;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AWEMusicFeedViewModel *previousModel;
@property (nonatomic) double previousCardAppearTimestamp;
@property (copy, nonatomic) NSString *previousReportPageStatusID;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long snackBarBottomAlignment;
@property (readonly, nonatomic) double bottomBarHeight;
@property (readonly, nonatomic) UIView *targetView;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setIsShowing:(BOOL)arg0;
- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)onDidPrev:(id)arg0;
- (void)onDidNext:(id)arg0 isManual:(BOOL)arg1 isFinished:(BOOL)arg2;
- (void)onStartPlay:(id)arg0;
- (long long)snackBarBottomAlignment;
- (void)longLyricViewTapped;
- (void)longLyricSeekTime:(id)arg0 seekTo:(double)arg1;
- (void)longLyricViewSceneImageDidLoad;
- (void)longLyricViewPlayButtonTapped;
- (void)longLyricViewCollectButtonTappedWithCollectButton:(id)arg0;
- (void)longLyricRetryViewTappedWithLonglyricView:(id)arg0;
- (void)longLyricViewBeginDragging;
- (id)longLyricTitle;
- (id)longLyricSubTitle;
- (void)longLyricViewLoadLyricWithLonglyricView:(id)arg0;
- (id)initWithMusicService:(id)arg0;
- (void)onDisplayRefresh;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)eventModel;
- (id)currentMusicModel;
- (void)setEventModel:(id)arg0;
- (id)pageEventParams;
- (void)lunaV2UpdateFinish:(id)arg0 isFromCache:(BOOL)arg1;
- (void)reportCollectEventModel:(id)arg0 isSuccess:(BOOL)arg1 code:(long long)arg2 isRepeatCollect:(BOOL)arg3;
- (void)reportCancelCollectEventModel:(id)arg0 isSuccess:(BOOL)arg1 code:(long long)arg2;
- (void)onLyricInnerTransitionCompletion;
- (void)setLongLyricDataSource:(id)arg0;
- (id)longLyricView;
- (id)longLyricDataSource;
- (void)updateLyricInfo;
- (void)reportMiniStayPage;
- (void)updateLyricStateWithPlaybackTime:(double)arg0;
- (double)previousCardAppearTimestamp;
- (id)previousReportPageStatusID;
- (void)reportPageStatus;
- (void)setPreviousReportPageStatusID:(id)arg0;
- (void)setPreviousCardAppearTimestamp:(double)arg0;
- (void)setPreviousModel:(id)arg0;
- (void)updateLyricOnMusicChange;
- (void)longLyricViewMoreButtonTapped;
- (void)setLongLyricView:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (id)targetView;
- (id)currentItem;
- (BOOL)isShowing;
- (long long)preferredStatusBarStyle;
- (void)hide;
- (id)displayLink;
- (void)viewDidLoad;
- (double)bottomBarHeight;
- (void)showInViewController:(id)arg0;
- (id)previousModel;

@end
