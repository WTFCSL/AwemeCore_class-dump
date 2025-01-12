//
//     Generated by private class-dump
//

@class NSMutableDictionary, XIGDanmakuItemDescriptor, AWEDanmakuMaskLayer, NSMutableArray, AWEDanmakuInputController, UIView, AWEDanmakuFlowTrackLayer, AWEPlayInteractionLandScapeDanmakuViewModel, NSString, NSMutableOrderedSet, AWEPlayInteractionDanmakuPlayer, AWEAwemeModel, UIImageView;
@protocol AWEPlayInteractionLandScapeDanmakuControllerDelegate, AWECommentInputViewManagerProtocol;

@interface AWEPlayInteractionLandScapeDanmakuController : NSObject <XIGDanmakuPlayerTimeSynchronizer, AWEPlayInteractionDanmakuControllerViewModelDelegate, XIGDanmakuPlayerDelegate, AWEPlayInteractionLandScapeDanmakuViewModelDelegate, AWECommentInputViewManagerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWEPlayInteractionDanmakuPlayerDelegate, AWEPlayInteractionDanmakuPlayerDelegate, AWEDanmakuUnitViewRecognizeHandleDelegate, AWEDanmakuItemViewDelegate, AWEDanmakuInputControllerDelegate, AWEPlayInteractionLandscapeDanmakuControllerProtocol> {
    BOOL _hasReceiveMaskInfo;
    BOOL _hasTrackFirstDanmakuShow;
    BOOL _danmakuPostPauseVideoPlay;
    BOOL _hasSetMask;
    BOOL _hasShowComment;
    BOOL _stopByReset;
    BOOL _isAuthorIdentityChecked;
    UIView *_danmakuContainView;
    NSString *_enterFrom;
    NSString *_previousPage;
    AWEAwemeModel *_model;
    id<AWEPlayInteractionLandScapeDanmakuControllerDelegate> _delegate;
    AWEPlayInteractionDanmakuPlayer *_danmakuPlayer;
    AWEPlayInteractionLandScapeDanmakuViewModel *_viewModel;
    AWEDanmakuFlowTrackLayer *_flowTrackLayer;
    NSMutableArray *_postDanmaKuIds;
    id<AWECommentInputViewManagerProtocol> _danmakuInputViewManager;
    AWEDanmakuInputController *_replyInputController;
    double _currentDanmakuRate;
    XIGDanmakuItemDescriptor *_currentSelectDanmaku;
    double _danmakuInputViewClickTime;
    double _danmakuInputViewPostTime;
    NSMutableOrderedSet *_displayedDanmakuIdList;
    NSMutableArray *_videoTimeList;
    long long _danmakuPlayCount;
    long long _danmakuDropCount;
    NSMutableDictionary *_playTypeDic;
    AWEDanmakuMaskLayer *_maskLayer;
    UIImageView *_selectDanmakuImage;
    double _previousSVGStartTime;
}

@property (retain, nonatomic) UIView *danmakuContainView;
@property (retain, nonatomic) AWEPlayInteractionDanmakuPlayer *danmakuPlayer;
@property (retain, nonatomic) AWEPlayInteractionLandScapeDanmakuViewModel *viewModel;
@property (retain, nonatomic) AWEDanmakuFlowTrackLayer *flowTrackLayer;
@property (retain, nonatomic) NSMutableArray *postDanmaKuIds;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> danmakuInputViewManager;
@property (retain, nonatomic) AWEDanmakuInputController *replyInputController;
@property (nonatomic) double currentDanmakuRate;
@property (retain, nonatomic) XIGDanmakuItemDescriptor *currentSelectDanmaku;
@property (nonatomic) BOOL hasTrackFirstDanmakuShow;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) double danmakuInputViewClickTime;
@property (nonatomic) double danmakuInputViewPostTime;
@property (retain, nonatomic) NSMutableOrderedSet *displayedDanmakuIdList;
@property (retain, nonatomic) NSMutableArray *videoTimeList;
@property (nonatomic) long long danmakuPlayCount;
@property (nonatomic) long long danmakuDropCount;
@property (retain, nonatomic) NSMutableDictionary *playTypeDic;
@property (retain, nonatomic) AWEDanmakuMaskLayer *maskLayer;
@property (retain, nonatomic) UIImageView *selectDanmakuImage;
@property (nonatomic) double previousSVGStartTime;
@property (nonatomic) BOOL hasSetMask;
@property (nonatomic) BOOL hasShowComment;
@property (nonatomic) BOOL stopByReset;
@property (nonatomic) BOOL isAuthorIdentityChecked;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionLandScapeDanmakuControllerDelegate> delegate;
@property (nonatomic) BOOL hasReceiveMaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)getSVGHandleQueue;

- (BOOL)custom_commentInputViewCustomSendAction:(id)arg0;
- (BOOL)custom_commentInputViewShouldReturn:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (BOOL)isAuthorIdentityChecked;
- (void)setIsAuthorIdentityChecked:(BOOL)arg0;
- (id)enterFrom;
- (double)currentPlayTime;
- (id)aAWEPadModuleAdapter;
- (void)changeDanmakuMaskTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)danmakuButtonClicked:(id)arg0;
- (double)playPercent;
- (void)didDroppedDanmakus:(id)arg0;
- (void)willDispatchDanmaku:(id)arg0;
- (void)addDisplayingDanmaku:(id)arg0;
- (void)didDisplayDanmaku:(id)arg0 inContainerView:(id)arg1;
- (void)didEndDisplayDanmaku:(id)arg0 inContainerView:(id)arg1;
- (void)didTappedDanmaku:(id)arg0 inContainerView:(id)arg1;
- (void)pauseDisplayingDanmakuByID:(id)arg0;
- (void)resumeDisplayingDanmakuByID:(id)arg0;
- (void)addObserve;
- (void)onMaskInfoUpdate:(id)arg0 pts:(unsigned long long)arg1;
- (double)currentPlayRate;
- (BOOL)shouldHandleDanmaKuTap:(id)arg0;
- (void)reportWithDanmakuModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (BOOL)isDanmakuShowing;
- (void)pauseDanmakuPlayer;
- (void)trackDanmakuPlayResult;
- (void)trackDanmakuImpression;
- (BOOL)hasReceiveMaskInfo;
- (void)pauseDanmakuForFPSOptIfNeed;
- (void)resumeDanmakuForFPSOptIfNeed;
- (void)handleCurrentVideoSpeedChange;
- (void)clearDanmakuMaskIfNeed;
- (BOOL)canShowDanmakuView;
- (id)danmakuContainView;
- (void)setStopByReset:(BOOL)arg0;
- (void)updateDanmakuWithVideoStatus:(BOOL)arg0;
- (BOOL)stopByReset;
- (void)onPlayerWillLoopPlaying;
- (void)showLoginPageWithBackVertical:(id /* block */)arg0;
- (void)handleProgressSliderTouchEnded;
- (id)currentDanmakuCount;
- (void)refreshDanmakuWithShieldWordChange;
- (void)clearDanmakuMask;
- (void)updateDanmaKuStyle;
- (id)allVisibleViews;
- (id)danmakuPlayer;
- (void)setDanmakuPlayer:(id)arg0;
- (BOOL)isDanmakuViewShowing;
- (id)generateDanmakusWithData:(id)arg0;
- (id)postDanmaKuIds;
- (void)setHasTrackFirstDanmakuShow:(BOOL)arg0;
- (double)currentDanmakuRate;
- (void)setCurrentDanmakuRate:(double)arg0;
- (void)setCurrentSelectDanmaku:(id)arg0;
- (id)displayedDanmakuIdList;
- (id)videoTimeList;
- (void)setDanmakuDropCount:(long long)arg0;
- (void)setDanmakuPlayCount:(long long)arg0;
- (id)playTypeDic;
- (void)resumeDanmakuPlayer;
- (id)getCurrentDanmakuStylesInfo;
- (id)currentSelectDanmaku;
- (long long)danmakuPlayCount;
- (BOOL)hasTrackFirstDanmakuShow;
- (void)trackFirstDanmakuShow:(id)arg0;
- (void)setDisplayedDanmakuIdList:(id)arg0;
- (void)setVideoTimeList:(id)arg0;
- (void)trackOfficialDanmakuShowIfNeed:(id)arg0;
- (long long)danmakuDropCount;
- (void)updateAllDisplayingDanmakuAlpha;
- (id)flowTrackLayer;
- (void)stopDanmakuPlayer;
- (void)refreshDanmakuLayOut;
- (void)didTappedDanmakuBaseAction:(id)arg0;
- (void)didTappedDanmaku:(id)arg0;
- (void)didTappedDanmakuDiggNumView:(id)arg0;
- (void)setHasReceiveMaskInfo:(BOOL)arg0;
- (void)setPreviousSVGStartTime:(double)arg0;
- (void)transfromSVGToImage:(id)arg0;
- (void)setDanmakuMaskSVGImage:(id)arg0;
- (id)createDanmakuMaskLayer;
- (id)getMaskTargetView;
- (void)caculateContentLayerSize;
- (void)setHasSetMask:(BOOL)arg0;
- (BOOL)hasSetMask;
- (double)previousSVGStartTime;
- (id)selectDanmakuImage;
- (void)setSelectDanmakuImage:(id)arg0;
- (void)didReceivedNewData:(id)arg0;
- (void)didReceivedAppendData:(id)arg0;
- (id)currentDanmakuPlayer;
- (BOOL)canHandleDanmaKuTap:(id)arg0;
- (void)handleDanmakuViewTap:(id)arg0;
- (void)handleDanmakuDigViewTap:(id)arg0;
- (double)danmakuTotalLifeTime;
- (double)danmakuSpeedFactor;
- (void)setFlowTrackLayer:(id)arg0;
- (void)setPostDanmaKuIds:(id)arg0;
- (void)setPlayTypeDic:(id)arg0;
- (void)trackDanmakuSendSuccess:(id)arg0 extraParams:(id)arg1;
- (void)setDanmakuInputViewClickTime:(double)arg0;
- (long long)danmakuOffsetTimeMS;
- (id)replyInputController;
- (double)danmakuInputViewClickTime;
- (void)danmakuInputController:(id)arg0 postDanmakuWithInputModel:(id)arg1;
- (long long)danmakuInputOffsetTimeMS;
- (void)setReplyInputController:(id)arg0;
- (id)danmakuInputViewManager;
- (void)setDanmakuInputViewManager:(id)arg0;
- (void)showDanmakuIfNeed;
- (void)setDanmakuPostPauseVideoPlay:(BOOL)arg0;
- (void)sendDanmukuContent;
- (BOOL)danmakuPostPauseVideoPlay;
- (void)setDanmakuContainView:(id)arg0;
- (BOOL)hasShowComment;
- (void)setHasShowComment:(BOOL)arg0;
- (void)resumeSelectedDanmaViewIfNeed;
- (void)setDanmakuInputViewPostTime:(double)arg0;
- (void)startLoadDanmakuPlayerIfNeeded;
- (void)highLightDanmakuWithTappedDanmaku:(id)arg0;
- (void)danmakuSupportMaskAction:(id)arg0;
- (id)getCommentContextWith:(id)arg0;
- (double)danmakuInputViewPostTime;
- (void)danmakuInputViewDidHide;
- (void)deleteDanmakuByID:(id)arg0;
- (void)replyWithDanmakuModel:(id)arg0;
- (void)trackDanmakuEggShow:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)playerController;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (double)currentTime;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;
- (void)updateModel:(id)arg0;
- (double)currentTimeInterval;

@end
