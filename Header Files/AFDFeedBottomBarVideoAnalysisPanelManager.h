//
//     Generated by private class-dump
//

@class AWEFeedViewedViewBarController, NSString, BDXBridgeEventSubscriber, AWEBinding, AFDLynxPanelConfig, UIViewController;
@protocol BDXPopupContainerProtocol;

@interface AFDFeedBottomBarVideoAnalysisPanelManager : NSObject <BDXContainerLifecycleProtocol, BDXPopupEventProtocol, DUXPopoverDelegate, AFDFeedBottomBarVideoAnalysisPanelManagerProtocol> {
    BOOL _isShowingPopover;
    BOOL _shouldShowViewListAfterClosePanel;
    AWEFeedViewedViewBarController *_barController;
    UIViewController<BDXPopupContainerProtocol> *_lynxContainerVC;
    double _panelHeight;
    BDXBridgeEventSubscriber *_subscriber;
    id /* block */ _progressSyncHandler;
    id /* block */ _imageAlbumProgressSyncHandler;
    id /* block */ _videoPlayHandler;
    AWEBinding *_videoControlBinding;
    AFDLynxPanelConfig *_lynxPanelconfig;
    NSString *_awemeIDTrackedLastTime;
}

@property (retain, nonatomic) UIViewController<BDXPopupContainerProtocol> *lynxContainerVC;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ progressSyncHandler;
@property (copy, nonatomic) id /* block */ imageAlbumProgressSyncHandler;
@property (copy, nonatomic) id /* block */ videoPlayHandler;
@property (retain, nonatomic) AWEBinding *videoControlBinding;
@property (retain, nonatomic) AFDLynxPanelConfig *lynxPanelconfig;
@property (nonatomic) BOOL isShowingPopover;
@property (nonatomic) BOOL shouldShowViewListAfterClosePanel;
@property (retain, nonatomic) NSString *awemeIDTrackedLastTime;
@property (weak, nonatomic) AWEFeedViewedViewBarController *barController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)personalPageBottomBarStyle;
+ (BOOL)isShowingVideoAnalysisPanel;
+ (BOOL)isVideoAnalysisEntranceClickableForModel:(id)arg0;
+ (long long)validDurationForVideoAnalysis;
+ (void)setShowingVideoAnalysisPanel:(BOOL)arg0;
+ (id)authorityStatusForModel:(id)arg0;
+ (BOOL)isVideoCreateTimeValidForModel:(id)arg0;
+ (BOOL)shouldShowVideoAnalysisButtonForModel:(id)arg0;

- (void)popoverDidDisappear:(id)arg0;
- (void)popoverDidAppear:(id)arg0;
- (double)panelHeight;
- (void)panelWillShow;
- (void)setPanelHeight:(double)arg0;
- (void)setupBinding;
- (void)registerLynxBridge;
- (void)popupDidCloseWithContainer:(id)arg0 params:(id)arg1;
- (void)popup:(id)arg0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)popup:(id)arg0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 withDuration:(double)arg3;
- (void)panelDidShow;
- (void)sendEventToLynxContainer:(id)arg0 params:(id)arg1;
- (id)lynxPanelSchema;
- (void)setLynxPanelconfig:(id)arg0;
- (id)generateSchemaParamsWhenOpenPanel;
- (void)setLynxContainerVC:(id)arg0;
- (id)lynxContainerVC;
- (void)trackPopoverShowForModel:(id)arg0;
- (id)lynxPanelconfig;
- (id /* block */)progressSyncHandler;
- (id /* block */)imageAlbumProgressSyncHandler;
- (void)setVideoControlBinding:(id)arg0;
- (id)videoControlBinding;
- (id /* block */)videoPlayHandler;
- (void)unregisterLynxBridge;
- (id)barController;
- (id)generateVVInfoParams;
- (void)handleLynxEvent:(id)arg0 withParams:(id)arg1;
- (void)handleLynxVideoControlEventWithParams:(id)arg0;
- (void)handleLynxVideoSeekEventWithParams:(id)arg0;
- (void)handleLynxImageAlbumSeekEventWithParams:(id)arg0;
- (void)setShouldShowViewListAfterClosePanel:(BOOL)arg0;
- (void)panelDidClose;
- (void)removeBinding;
- (BOOL)shouldShowViewListAfterClosePanel;
- (void)setIsShowingPopover:(BOOL)arg0;
- (id)awemeIDTrackedLastTime;
- (void)setAwemeIDTrackedLastTime:(id)arg0;
- (BOOL)isShowingPopover;
- (void)showVideoAnalysisPanelWithConfig:(id)arg0;
- (void)showPopoverIfNeedWithTargetView:(id)arg0 model:(id)arg1;
- (id)createLynxPanelConfigWithBarController:(id)arg0;
- (void)trackVideoAnalysisShowIfNeed:(id)arg0 enterMethod:(id)arg1;
- (void)trackVideoAnalysisClick:(id)arg0;
- (void)setBarController:(id)arg0;
- (void)setProgressSyncHandler:(id /* block */)arg0;
- (void)setImageAlbumProgressSyncHandler:(id /* block */)arg0;
- (void)setVideoPlayHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)subscriber;
- (void)setSubscriber:(id)arg0;

@end
