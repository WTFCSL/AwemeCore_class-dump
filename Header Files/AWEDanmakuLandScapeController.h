//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, AWEDanmakuBaseContext, UIView;
@protocol AWEPlayInteractionLandScapeDanmakuControllerDelegate, AWECommentInputViewManagerProtocol, AWEDanmakuBaseControllerProtocol, AWEDanmakuBaseLandScapeControllerProtocol;

@interface AWEDanmakuLandScapeController : NSObject <AWEDanmakuBaseControllerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWECommentInputViewManagerDelegate, AWEPlayInteractionLandscapeDanmakuControllerProtocol> {
    BOOL _hasReceiveMaskInfo;
    BOOL _danmakuPostPauseVideoPlay;
    BOOL _isAuthorIdentityChecked;
    UIView *_danmakuContainView;
    NSString *_enterFrom;
    NSString *_previousPage;
    AWEAwemeModel *_model;
    id<AWEPlayInteractionLandScapeDanmakuControllerDelegate> _delegate;
    id<AWEDanmakuBaseControllerProtocol, AWEDanmakuBaseLandScapeControllerProtocol> _baseController;
    id<AWECommentInputViewManagerProtocol> _danmakuInputViewManager;
    double _inputViewDidShowTime;
    double _inputViewWillShowTime;
    AWEDanmakuBaseContext *_danmakuContext;
}

@property (retain, nonatomic) id<AWEDanmakuBaseControllerProtocol, AWEDanmakuBaseLandScapeControllerProtocol> baseController;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> danmakuInputViewManager;
@property (retain, nonatomic) UIView *danmakuContainView;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) double inputViewDidShowTime;
@property (nonatomic) double inputViewWillShowTime;
@property (nonatomic) BOOL isAuthorIdentityChecked;
@property (retain, nonatomic) AWEDanmakuBaseContext *danmakuContext;
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
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realMediaFrame;
- (void)danmakuButtonClicked:(id)arg0;
- (void)addObserve;
- (void)setUI;
- (id)danmakuContext;
- (void)onMaskInfoUpdate:(id)arg0 pts:(unsigned long long)arg1;
- (BOOL)isCurrentModelSupportMask;
- (long long)videoPlayState;
- (double)currentPlayRate;
- (BOOL)shouldHandleDanmaKuTap:(id)arg0;
- (void)showLoginPageWithBackVertical;
- (void)reportWithDanmakuModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setDanmakuContext:(id)arg0;
- (BOOL)isDanmakuShowing;
- (void)pauseDanmakuPlayer;
- (void)trackDanmakuPlayResult;
- (void)trackDanmakuImpression;
- (BOOL)shouldReceiveDanmakuMaskInfo;
- (BOOL)hasReceiveMaskInfo;
- (void)pauseDanmakuForFPSOptIfNeed;
- (void)resumeDanmakuForFPSOptIfNeed;
- (void)handleCurrentVideoSpeedChange;
- (void)clearDanmakuMaskIfNeed;
- (BOOL)canShowDanmakuView;
- (id)danmakuContainView;
- (void)updateDanmakuWithVideoStatus:(BOOL)arg0;
- (void)onPlayerWillLoopPlaying;
- (void)handleProgressSliderTouchEnded;
- (id)currentDanmakuCount;
- (void)refreshDanmakuWithShieldWordChange;
- (void)clearDanmakuMask;
- (void)updateDanmaKuStyle;
- (id)allVisibleViews;
- (void)resumeDanmakuPlayer;
- (id)getCurrentDanmakuStylesInfo;
- (void)stopDanmakuPlayer;
- (void)setHasReceiveMaskInfo:(BOOL)arg0;
- (id)danmakuInputViewManager;
- (double)inputViewDidShowTime;
- (double)inputViewWillShowTime;
- (void)setInputViewDidShowTime:(double)arg0;
- (void)setInputViewWillShowTime:(double)arg0;
- (void)setDanmakuInputViewManager:(id)arg0;
- (void)showDanmakuIfNeed;
- (id)baseController;
- (void)setDanmakuPostPauseVideoPlay:(BOOL)arg0;
- (void)sendDanmukuContent;
- (BOOL)danmakuPostPauseVideoPlay;
- (void)setDanmakuContainView:(id)arg0;
- (void)setBaseController:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)playerController;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (double)videoDuration;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)updateModel:(id)arg0;
- (double)currentTimeInterval;

@end
