//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPOIFeedPlayerManagerDatasource, AWEAwemeBizPlayVideoProtocol, AWEPOIPlayInteractionVCManagerProtocol, AFDRichContentContainerViewControllerProtocol;

@interface AWEPOIFeedPlayerManager : NSObject <AWEPOIFeedPlayerManagerProtocol, AWEPOIPlayInteractionVCManagerProtocol> {
    BOOL _playerIsPlayingWhenInit;
    BOOL _pauseByPurpose;
    BOOL _notRestoreVideoWhenClose;
    BOOL _hasTriggerEnter;
    id<AWEPOIPlayInteractionVCManagerProtocol> _interactionManager;
    id<AWEAwemeBizPlayVideoProtocol> _feedPlayer;
    id<AFDRichContentContainerViewControllerProtocol> _richContentContainer;
    id<AWEPOIFeedPlayerManagerDatasource> _datasource;
    double _horizontalTopRadio;
    double _initialRatio;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shrinkContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialVideoFrame;
}

@property (nonatomic) double horizontalTopRadio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkContainerFrame;
@property (nonatomic) double initialRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialVideoFrame;
@property (nonatomic) BOOL hasTriggerEnter;
@property (nonatomic) BOOL playerIsPlayingWhenInit;
@property (nonatomic) BOOL pauseByPurpose;
@property (nonatomic) BOOL notRestoreVideoWhenClose;
@property (weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> interactionManager;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> feedPlayer;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;
@property (weak, nonatomic) id<AWEPOIFeedPlayerManagerDatasource> datasource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)richContentContainer;
- (void)setRichContentContainer:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewFrame;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)horizontalTopRadio;
- (void)setHorizontalTopRadio:(double)arg0;
- (void)setFeedPlayer:(id)arg0;
- (void)setPlayerIsPlayingWhenInit:(BOOL)arg0;
- (void)tryHidePauseIcon;
- (BOOL)playerIsPlayingWhenInit;
- (void)tryShowPauseIcon;
- (void)hideInteractionControllerWithAnimation:(BOOL)arg0;
- (void)resumeInteractionControllerWithAnimation:(BOOL)arg0;
- (void)switchPlayStateWithAnimation:(BOOL)arg0;
- (void)playWithAnimation:(BOOL)arg0;
- (void)pauseWithAnimation:(BOOL)arg0;
- (void)setInteractionManager:(id)arg0;
- (void)setPauseByPurpose:(BOOL)arg0;
- (void)resizeVideoWithModalViewRatio:(double)arg0;
- (void)shrinkVideoWhenEnterWithModalViewRatio:(double)arg0 viewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)restoreVideoWhenDismiss;
- (void)forceRestoreVideo;
- (void)resizeVideoWhenIPadFrameChangeTo:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)pauseByPurpose;
- (BOOL)isFeedPlayerPlaying;
- (id)feedPlayer;
- (void)setNotRestoreVideoWhenClose:(BOOL)arg0;
- (BOOL)shouldRelocateVideo;
- (void)relocateVideoWithRatio:(double)arg0;
- (BOOL)hasTriggerEnter;
- (BOOL)shouldResizeVideoWhenModalViewRatioChanged;
- (double)initialRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialVideoFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shrinkContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialContainerFrame;
- (void)setInitialContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setInitialRatio:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFullScreenDisplayContentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setShrinkContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHasTriggerEnter:(BOOL)arg0;
- (void)setInitialVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)awemeContentViewFrameWillChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupWithRatio:(double)arg0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (BOOL)notRestoreVideoWhenClose;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)model;
- (double)screenHeight;
- (id)datasource;
- (void)setDatasource:(id)arg0;
- (id)interactionManager;

@end
