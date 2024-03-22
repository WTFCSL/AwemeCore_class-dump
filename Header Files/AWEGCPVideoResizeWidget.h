//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEAwemePlayInteractionPanelControllerProtocol, AWEAwemePlayInteractionPlayDelegate;

@interface AWEGCPVideoResizeWidget : IESGCPBaseWidget <IESGCPAudienceDetailActions, IESGCPAudienceDetailNavigationActions, AWEAwemePlayInteractionPanelControllerPortraitStrategyProtocol> {
    BOOL _videoShrinkByGameDetail;
    BOOL _isFullScreen;
    BOOL _videoShrinkFullCompleted;
    id<AWEAwemePlayInteractionPanelControllerProtocol> _panelController;
    id<AWEAwemePlayInteractionPlayDelegate> _interactionController;
}

@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate> interactionController;
@property (nonatomic) BOOL videoShrinkByGameDetail;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL videoShrinkFullCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)portraitVideoResizeStrategy;
- (BOOL)isImageAlbum;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)audienceDetailVCFullHalfScreenStatusDidChange:(BOOL)arg0;
- (void)gameDetailVC_viewWillAppear:(BOOL)arg0 gameDetailVC:(id)arg1;
- (void)gameDetailVC_viewWillDisAppear:(BOOL)arg0 gameDetailVC:(id)arg1;
- (void)willOpenGameDetailView;
- (void)gameDetailProgress:(double)arg0;
- (void)willCloseGameDetailView;
- (void)widgetBindService;
- (void)gameDetailNavigationVC_viewWillDisappear:(BOOL)arg0;
- (void)setVideoShrinkFullCompleted:(BOOL)arg0;
- (void)changeVideoWhenShowGameDetailPanel:(BOOL)arg0;
- (BOOL)videoShrinkByGameDetail;
- (void)setVideoShrinkByGameDetail:(BOOL)arg0;
- (BOOL)videoShrinkFullCompleted;
- (void)changeVideoWhenGameDetailPanelShow;
- (void)gameDetailPanelMoveProgress:(double)arg0;
- (void)changeVideoWhenGameDetailPanelHide;
- (id)initWithScene:(long long)arg0;
- (BOOL)isFullScreen;
- (void)setPanelController:(id)arg0;
- (void).cxx_destruct;
- (void)setInteractionController:(id)arg0;
- (id)interactionController;
- (id)panelController;
- (void)pause:(BOOL)arg0;
- (void)setIsFullScreen:(BOOL)arg0;

@end