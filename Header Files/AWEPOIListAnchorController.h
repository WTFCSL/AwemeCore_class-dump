//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, UIViewController;
@protocol AWEPOIFeedPlayerManagerProtocol;

@interface AWEPOIListAnchorController : NSObject <BDXPopupEventProtocol, AWEPOIFeedPlayerManagerDatasource, BDXContainerLifecycleProtocol> {
    BOOL _isShowingListAnchorFiveScreen;
    BOOL _isFullScreen;
    BOOL _isPopupVCAppear;
    BOOL _hideFeedInteraction;
    BOOL _isNearbyBackAction;
    id<AWEPOIFeedPlayerManagerProtocol> _feedManager;
    AWEAwemeModel *_aweme;
    NSDictionary *_routerParams;
    long long _initialHeightPercent;
    double _offset;
    UIViewController *_popUpVC;
}

@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) long long initialHeightPercent;
@property (nonatomic) double offset;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isPopupVCAppear;
@property (nonatomic) BOOL hideFeedInteraction;
@property (weak, nonatomic) UIViewController *popUpVC;
@property (nonatomic) BOOL isNearbyBackAction;
@property (retain, nonatomic) id<AWEPOIFeedPlayerManagerProtocol> feedManager;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL isShowingListAnchorFiveScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)arg0;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (void)windowDidBecomeKeyNotification:(id)arg0;
- (void)windowDidResignKeyNotification:(id)arg0;
- (void)popupDidCloseWithContainer:(id)arg0 params:(id)arg1;
- (void)popupDidChangeToStatus:(long long)arg0 withContainer:(id)arg1;
- (BOOL)handlePopupResizeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)popup:(id)arg0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)popup:(id)arg0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 withDuration:(double)arg3;
- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)setFeedManager:(id)arg0;
- (void)handleNearbyCheckOrderUndertake:(id)arg0;
- (BOOL)shouldRelocateVideoViewWithoutShrink;
- (BOOL)shouldResizeVideoWidth:(id)arg0;
- (BOOL)shouldResizeVideoHeight:(id)arg0;
- (void)setupPopupControllerWithSchema:(id)arg0;
- (id)popUpVC;
- (void)setHideFeedInteraction:(BOOL)arg0;
- (void)setIsNearbyBackAction:(BOOL)arg0;
- (BOOL)isWidthVideo:(id)arg0;
- (BOOL)isNearbyBackAction;
- (void)resetFeedState;
- (void)setupPopupControllerWithSchema:(id)arg0 logExtra:(id)arg1;
- (void)setIsShowingListAnchorFiveScreen:(BOOL)arg0;
- (void)setInitialHeightPercent:(long long)arg0;
- (void)setPopUpVC:(id)arg0;
- (void)setIsPopupVCAppear:(BOOL)arg0;
- (long long)initialHeightPercent;
- (double)convertRatioByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)hideFeedInteraction;
- (BOOL)isPopupVCAppear;
- (void)setupPopupControllerWithAnchorInfo:(id)arg0 logExtra:(id)arg1;
- (BOOL)isShowingListAnchorFiveScreen;
- (id)init;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (void)setOffset:(double)arg0;
- (void)applicationWillResignActive;
- (double)offset;
- (id)feedManager;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (void)setIsFullScreen:(BOOL)arg0;

@end
