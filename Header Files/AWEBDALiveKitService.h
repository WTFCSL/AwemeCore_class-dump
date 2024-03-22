//
//     Generated by private class-dump
//

@class NSString;
@protocol IESADLiveToolbarComponentHandler, IESADLiveToolBarCoordinaryAnimationAction;

@interface AWEBDALiveKitService : NSObject <IESLiveToolbarComponentHandler, IESLiveToolBarCoordinaryAnimationAction, IESADLiveKitService> {
    id<IESADLiveToolbarComponentHandler> _toolBarHandler;
    id<IESADLiveToolBarCoordinaryAnimationAction> _toolBarAnimationAction;
}

@property (weak, nonatomic) id<IESADLiveToolbarComponentHandler> toolBarHandler;
@property (weak, nonatomic) id<IESADLiveToolBarCoordinaryAnimationAction> toolBarAnimationAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)followStatus;
- (id)trackContext;
- (id)itemExplicitInfo;
- (id)attachingDIContext;
- (int)businessLive;
- (BOOL)isUnPaiedUserInPayRoom;
- (BOOL)isVSRoom;
- (id)enterFromAdType;
- (id)rawAdParams;
- (void)forceUpdateToOrientation:(long long)arg0;
- (void)showRightBottomViewWithItem:(id)arg0;
- (void)hideRightBottomViewWithItem:(id)arg0;
- (void)willShowCommercialComponentEntrance;
- (void)didShowCommercialComponentEntrance;
- (void)didHideCommercialComponentEntrance;
- (void)addViewElement:(id)arg0;
- (id)liveAnimationCenterController;
- (id)liveToolbarCoordinaryAnimationConfig;
- (BOOL)liveToolbarServerCtrl;
- (BOOL)liveRightBottomOpt;
- (BOOL)liveCooperationPartnerXingtuMergeHandleIm;
- (BOOL)shouldDisableECommerceComponent;
- (BOOL)isSaaS;
- (int)commerceLottery;
- (void)setToolBarHandler:(id)arg0;
- (void)registerHandlerWithItemType:(long long)arg0 handler:(id)arg1;
- (void)setToolBarAnimationAction:(id)arg0;
- (void)addCoordinaryAnimatonItem:(id)arg0 identifier:(id)arg1;
- (void)removeCoordinaryAnimatonItemByIdentifier:(id)arg0;
- (void)requestToAnimateWithIdentifier:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfItemInRoom:(id)arg0;
- (id)toolBarHandler;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (id)toolBarAnimationAction;
- (unsigned long long)animationTriggerState;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (id)createCardItem;
- (id)iesLiveImageWithName:(id)arg0 applyingAlpha:(double)arg1;
- (BOOL)isInnerAD;
- (BOOL)liveRoomAuthHidden;
- (id)createToolbarItem;
- (void)reloadToolbar;
- (void)removeMoreToolsItemWithIdentifier:(id)arg0;
- (id)extraJsonStrWithItem:(id)arg0;
- (id)rootViewController;
- (id)toolbar;
- (void).cxx_destruct;
- (void)removeItemWithIdentifier:(id)arg0;
- (id)requestId;
- (void)insertItem:(id)arg0;
- (id)animationContainer;
- (void)triggerAnimation;
- (BOOL)isClear;
- (id)roomID;
- (id)ownerUserID;

@end
