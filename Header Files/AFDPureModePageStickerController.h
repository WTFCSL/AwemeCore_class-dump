//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEVideoInteractiveProtocol;

@interface AFDPureModePageStickerController : AWEBaseController <AFDPureModePageControllerProtocol, AWEVideoInteractiveDelegate, AFDPureModePageStickerControllerProtocol> {
    BOOL _showWithVideoPausing;
    BOOL _isShowingStickers;
    id<AWEVideoInteractiveProtocol> _currentInteractiveContainer;
    id<AWEVideoInteractiveProtocol> _interactiveContainer;
}

@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (nonatomic) BOOL showWithVideoPausing;
@property (nonatomic) BOOL isShowingStickers;
@property (weak, nonatomic) id<AWEVideoInteractiveProtocol> currentInteractiveContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (BOOL)tryToHandleTapStickerInPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)containerDidScroll:(id)arg0;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (void)resumePlaying;
- (BOOL)videoInteractiveViewTapInCenter;
- (void)stickerDoubleTap:(id)arg0;
- (long long)videoScaleType;
- (void)videoInteractiveViewJumpScheme;
- (double)currentPlayerPlaybackTime;
- (BOOL)showWithVideoPausing;
- (void)setShowWithVideoPausing:(BOOL)arg0;
- (BOOL)isShowingStickers;
- (id)interactiveContainer;
- (id)currentInteractiveContainer;
- (void)setCurrentInteractiveContainer:(id)arg0;
- (void)updateVideoStickerView:(id)arg0;
- (void)setInteractiveContainer:(id)arg0;
- (void)makeMaskViewsLayout;
- (void)setIsShowingStickers:(BOOL)arg0;
- (id)configInteractiveContainerVideoInfoDict;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (void)viewDidAppear;
- (void)play;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)isVideoPlaying;
- (id)videoPlayerView;
- (void)viewWillDisappear;

@end
