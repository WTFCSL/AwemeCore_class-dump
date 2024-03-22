//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol AWEHPTabPinTopSnackBarProtocol;

@interface AWEPlayInteractionNearbySnackBarElement : AWEPlayInteractionLeftElement {
    BOOL _isPOIAnchorClicked;
    id<AWEHPTabPinTopSnackBarProtocol> _snackBar;
    long long _actionInPOI;
    NSMutableArray *_subscribeList;
}

@property (retain, nonatomic) id<AWEHPTabPinTopSnackBarProtocol> snackBar;
@property (nonatomic) BOOL isPOIAnchorClicked;
@property (nonatomic) long long actionInPOI;
@property (retain, nonatomic) NSMutableArray *subscribeList;

- (void)setupObserver;
- (id)actionStringWithAction:(long long)arg0;
- (id)subscribeList;
- (void)setSubscribeList:(id)arg0;
- (void)onAwemeDiggNotification:(id)arg0;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)recordAction:(long long)arg0;
- (void)handleLynxBroadcastNotification:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)onAnchorToPOINotification:(id)arg0;
- (void)viewController_didEndDisplaying;
- (id)snackBar;
- (void)setSnackBar:(id)arg0;
- (void)showLifeSnackBarToast:(id)arg0;
- (void)triggerTrackWithActionType:(long long)arg0;
- (BOOL)isPOIAnchorClicked;
- (void)setIsPOIAnchorClicked:(BOOL)arg0;
- (long long)actionInPOI;
- (void)tryShowSnackBarWithAction:(long long)arg0 withResult:(id /* block */)arg1;
- (void)setActionInPOI:(long long)arg0;
- (long long)realPageType;
- (BOOL)shouldAddObserver;
- (void)handleVideoWillLoop:(id)arg0;
- (void)handleJumpNearby:(id)arg0;
- (void)setupLynxObserver;
- (void)hanleGoodsHasDeal;
- (id)snackBarHandle;
- (id)checkActionCanShowBarWithAction:(long long)arg0;
- (id)categoryText;
- (id)willPinTopTabId;
- (BOOL)isFromCurrentAwemeItem:(id)arg0 notification:(id)arg1;
- (void)recordAwemeAction:(long long)arg0;
- (void)addObserverWhenEnterPOI;
- (void)transformActionStatus:(long long)arg0;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)dealloc;
- (void)setupData;

@end
