//
//     Generated by private class-dump
//

@class AWETabMallRollBackView, NSString, NSDictionary, UIViewController;
@protocol AWEECMallEntranceHostProtocol;

@interface AWEECNewEntranceRollBackHandler : NSObject <AWETabMallHalfScreenCycleProtocol, AWEECRollBackMallTransitionContextProvider> {
    BOOL _hasMoveToWindow;
    BOOL _needShowLiveWindow;
    BOOL _isHalfScreenShowing;
    UIViewController<AWEECMallEntranceHostProtocol> *_hostVC;
    NSDictionary *_currentRouterParams;
    AWETabMallRollBackView *_rollBackEntrance;
    double _lastActOffset;
    double _scrollDistance;
    NSString *_roomID;
    NSString *_roomPath;
}

@property (weak, nonatomic) UIViewController<AWEECMallEntranceHostProtocol> *hostVC;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (retain, nonatomic) AWETabMallRollBackView *rollBackEntrance;
@property (nonatomic) double lastActOffset;
@property (nonatomic) double scrollDistance;
@property (nonatomic) BOOL hasMoveToWindow;
@property (nonatomic) BOOL needShowLiveWindow;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomPath;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHalfScreenShowing;
- (id)hostVC;
- (void)setHostVC:(id)arg0;
- (BOOL)isDeliveryByConcernSceneWithPageTag:(id)arg0;
- (void)expandRollBack:(BOOL)arg0;
- (id)currentRouterParams;
- (void)setCurrentRouterParams:(id)arg0;
- (void)tryRemedyShowSmallLiveWindow;
- (void)tryRemedyExitRollBackScene;
- (void)tryReleaseRollBackSceneAuto;
- (void)tryRemedyAddRollBackEntrance;
- (void)hostScrollViewDidScroll:(double)arg0;
- (void)handleRouterParams:(id)arg0;
- (void)bindViewHost:(id)arg0;
- (void)p_releaseRollBackEntrenceWithAct:(BOOL)arg0;
- (void)p_tryCloseSmallLiveWindow;
- (void)p_checkRollBackLogicWithParams:(id)arg0;
- (void)p_tryAddRollBackToRealContentView;
- (void)p_tryAddRollBackEntrance;
- (void)p_tryShowSmallLiveWindow;
- (void)p_tryReleaseRollBackSceneWithAct:(BOOL)arg0;
- (void)p_scrollViewDidScroll:(double)arg0;
- (BOOL)p_isDeliveryScene;
- (void)setIsHalfScreenShowing:(BOOL)arg0;
- (void)p_handlerRollBackBtn:(id)arg0;
- (void)p_handleRollBackWindow:(id)arg0;
- (void)setRoomPath:(id)arg0;
- (void)setNeedShowLiveWindow:(BOOL)arg0;
- (id)rollBackEntrance;
- (void)p_trackEventWithBtm:(id)arg0 params:(id)arg1;
- (void)p_notifyOutTransitionContextProvider;
- (BOOL)needShowLiveWindow;
- (id)roomPath;
- (BOOL)hasMoveToWindow;
- (void)setHasMoveToWindow:(BOOL)arg0;
- (void)p_tryAddRollBackToWindow;
- (void)setLastActOffset:(double)arg0;
- (void)didOpenPage:(id)arg0;
- (void)willClosePage:(id)arg0;
- (void)willOpenNextInPage:(id)arg0;
- (void)willAppearAgainForPage:(id)arg0;
- (void)didPage:(id)arg0 switchToFull:(BOOL)arg1;
- (void)didPage:(id)arg0 scrollOffset:(double)arg1;
- (void)taskBannerDidAppear:(id)arg0;
- (void)taskBannerDidDisAppear:(id)arg0;
- (void)taskBannerSizeChanged:(id)arg0;
- (void)setRollBackEntrance:(id)arg0;
- (double)lastActOffset;
- (id)init;
- (void).cxx_destruct;
- (double)scrollDistance;
- (void)dealloc;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setScrollDistance:(double)arg0;

@end
