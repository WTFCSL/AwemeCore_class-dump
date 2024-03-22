//
//     Generated by private class-dump
//

@class PuzzleHybridContainer, NSString, NSDictionary, UIView, NSMutableArray, IESECLiveRandomDelayTimer;
@protocol IESECLivePluginLayoutView, IESECLiveShortTouchItem;

@interface IESECLiveCouponWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber, IESECLiveCouponRouter> {
    BOOL _isHorizontalOrientation;
    PuzzleHybridContainer *_animationView;
    UIView<IESECLivePluginLayoutView> *_shortTouchIconView;
    NSDictionary *_couponEntranceData;
    NSString *_applyCouponID;
    NSString *_previewCouponID;
    NSMutableArray *_subscribers;
    IESECLiveRandomDelayTimer *_peakReduce;
    id<IESECLiveShortTouchItem> _currentShortTouchItem;
    NSDictionary *_shortTouchCouponInfo;
}

@property (retain, nonatomic) PuzzleHybridContainer *animationView;
@property (retain, nonatomic) UIView<IESECLivePluginLayoutView> *shortTouchIconView;
@property (nonatomic) BOOL isHorizontalOrientation;
@property (copy, nonatomic) NSDictionary *couponEntranceData;
@property (copy, nonatomic) NSString *applyCouponID;
@property (copy, nonatomic) NSString *previewCouponID;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveShortTouchItem> currentShortTouchItem;
@property (retain, nonatomic) NSDictionary *shortTouchCouponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeXBridgeEvent:(id)arg0 callback:(id /* block */)arg1;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)didShowShopCart:(BOOL)arg0;
- (void)didHideShopCart:(BOOL)arg0;
- (void)widgetOrientationWillChange:(long long)arg0;
- (id)peakReduce;
- (void)setPeakReduce:(id)arg0;
- (void)p_constructMessage;
- (void)asyncReceivedLynxEvent:(id)arg0 withParams:(id)arg1;
- (long long)autoApplyCouponType;
- (void)refreshCouponInfoWhenAutoApplySuccess:(id)arg0;
- (void)openApplyCouponViewWithCouponID:(id)arg0;
- (void)openApplyCouponViewWithCouponID:(id)arg0 params:(id)arg1;
- (void)p_removeAllCoupon;
- (void)setIsHorizontalOrientation:(BOOL)arg0;
- (BOOL)isHorizontalOrientation;
- (void)p_removeMiniCouponView;
- (void)showCouponEntranceIfNeeded;
- (id)applyCouponID;
- (void)setApplyCouponID:(id)arg0;
- (BOOL)shouldShowCouponEntrance;
- (id)shortTouchCouponInfo;
- (BOOL)shouldAutoApplyCoupon;
- (BOOL)hasCouponInLiveRoom;
- (id)lynxRoomParams;
- (id)dialogURLString;
- (void)showLynxDialogViewWithURLString:(id)arg0 params:(id)arg1;
- (void)p_setupAutoApplyCouponID;
- (void)openApplyCouponViewIfNeeded;
- (void)p_setupPreviewCouponID;
- (void)requestCouponEntrance:(BOOL)arg0;
- (void)setShortTouchCouponInfo:(id)arg0;
- (void)setPreviewCouponID:(id)arg0;
- (void)p_removeCouponView;
- (id)previewCouponID;
- (void)loadCouponEntranceLynxView;
- (id)lynxViewWithURLString:(id)arg0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setShortTouchIconView:(id)arg0;
- (id)shortTouchIconView;
- (id)entryURLString;
- (void)receivedLynxEvent:(id)arg0 withParams:(id)arg1;
- (void)showCouponEntrance:(id)arg0;
- (id)currentShortTouchItem;
- (void)p_updateCouponInfo:(id)arg0;
- (id)couponEntranceData;
- (BOOL)needShowCouponEntrance:(id)arg0;
- (void)showCouponEntranceWithOutAnimation:(id)arg0;
- (void)setCurrentShortTouchItem:(id)arg0;
- (void)refreshShortTouchData:(id)arg0;
- (void)startShowIconAnimation:(id)arg0 callback:(id /* block */)arg1;
- (void)setCouponEntranceData:(id)arg0;
- (id)lynxURLConfig;
- (void).cxx_destruct;
- (id)subscribers;
- (void)messageReceived:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)iconURLString;
- (void)setSubscribers:(id)arg0;

@end
