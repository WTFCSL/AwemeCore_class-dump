//
//     Generated by private class-dump
//

@class NSMutableDictionary, HTSEventContext, NSString, IESLiveDynamicGiftPlayer, NSNumber, IESLiveComponentContext;
@protocol IESLiveAnchorABManagerAdapter, IESLiveEffectProcessServiceAdapter, IESLiveInteractServiceAdapter, IESLiveRebornGiftAnimationRouter, HTSLiveStreamPlayerEffectServiceAdapter, IESLiveDynamicEffectService, IESLiveRoomServiceAdapter, IESLiveGiftFullLinkMonitor, IESLiveRevenueInteractModule;

@interface IESLiveDynamicGiftStore : NSObject <IESLiveDynamicGiftActions, HTSLiveSendGiftActions, IESLiveRenderFilterEffectMessageListener> {
    BOOL _isSentBySelf;
    BOOL _isNonInteractiveGiftQueuesFreezing;
    BOOL _isAnchor;
    BOOL _useLynxDIYCard;
    id<IESLiveRoomServiceAdapter> _roomModel;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveDynamicGiftPlayer *_player;
    NSNumber *_dynamicGiftId;
    NSNumber *_dynamicGiftPrice;
    NSMutableDictionary *_captureAssemblyGifts;
    id /* block */ _effectMessageDispatcher;
    id<IESLiveRebornGiftAnimationRouter> _giftAnimationRouter;
    id<IESLiveGiftFullLinkMonitor> _giftFullLinkMonitor;
    id<HTSLiveStreamPlayerEffectServiceAdapter> _effectServiceAdapter;
    id<IESLiveInteractServiceAdapter> _socialInteractAdapter;
    id<IESLiveRevenueInteractModule> _revenueInteractModule;
    id<IESLiveEffectProcessServiceAdapter> _effectProcessing;
    id<IESLiveAnchorABManagerAdapter> _anchorABManager;
    id<IESLiveDynamicEffectService> _dynamicEffectService;
}

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveDynamicGiftPlayer *player;
@property (retain, nonatomic) NSNumber *dynamicGiftId;
@property (retain, nonatomic) NSNumber *dynamicGiftPrice;
@property (nonatomic) BOOL isSentBySelf;
@property (nonatomic) BOOL isNonInteractiveGiftQueuesFreezing;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSMutableDictionary *captureAssemblyGifts;
@property (copy, nonatomic) id /* block */ effectMessageDispatcher;
@property (retain, nonatomic) id<IESLiveRebornGiftAnimationRouter> giftAnimationRouter;
@property (retain, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (retain, nonatomic) id<HTSLiveStreamPlayerEffectServiceAdapter> effectServiceAdapter;
@property (retain, nonatomic) id<IESLiveInteractServiceAdapter> socialInteractAdapter;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) id<IESLiveEffectProcessServiceAdapter> effectProcessing;
@property (retain, nonatomic) id<IESLiveAnchorABManagerAdapter> anchorABManager;
@property (retain, nonatomic) id<IESLiveDynamicEffectService> dynamicEffectService;
@property (nonatomic) BOOL useLynxDIYCard;
@property (readonly, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (id)getComposerNodes;
- (void)removeComposerNodes:(id)arg0 withTag:(id)arg1;
- (void)setComposerNodes:(id)arg0 withTag:(id)arg1;
- (void)appendComposerNodes:(id)arg0 withTag:(id)arg1;
- (id)roomModel;
- (void)setComponentContext:(id)arg0;
- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (void)didGiveGiftWithResponse:(id)arg0;
- (void)didGiveGiftFailed:(id)arg0 error:(id)arg1;
- (id)initWithRoomModel:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (id)revenueInteractModule;
- (void)setRevenueInteractModule:(id)arg0;
- (void)onEffectRenderCallback:(int)arg0 arg1:(int)arg1 arg2:(int)arg2 data:(id)arg3;
- (id /* block */)effectMessageDispatcher;
- (void)setEffectMessageDispatcher:(id /* block */)arg0;
- (BOOL)useLynxDIYCard;
- (void)setUseLynxDIYCard:(BOOL)arg0;
- (BOOL)sendGiftEffectMessageWithParam2:(long long)arg0 param3:(id)arg1;
- (BOOL)appendEffectComposerNodes:(id)arg0 withTag:(id)arg1;
- (BOOL)removeEffectComposerNodes:(id)arg0;
- (void)sendEffectMessageToLynx:(long long)arg0 arg1:(long long)arg1 arg2:(long long)arg2 arg3:(id)arg3;
- (void)startEffectWithRenderOnSingleView:(BOOL)arg0 masterLayerId:(int)arg1 effectMessageDispatcher:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)stopEffectWithCompletion:(id /* block */)arg0;
- (id)giftAnimationRouter;
- (void)setGiftAnimationRouter:(id)arg0;
- (void)recordCaptureAssemblyGiftInfo:(id)arg0;
- (void)trackDynamicGiftOnEndingWithComboCount:(id)arg0;
- (id)currentDynamicGiftId;
- (BOOL)isShowingDynamicGift;
- (id)dynamicGiftPlayer;
- (void)showWebViewConsoleWithDynamicGiftID:(id)arg0;
- (void)showWebViewConsoleWithDynamicGiftAnimationNode:(id)arg0;
- (void)forceQuitWebViewConsole;
- (BOOL)isPlayingAsset;
- (void)endPlayingDynamicGiftOnWebViewConsoleDismiss;
- (BOOL)isSentBySelf;
- (void)setIsSentBySelf:(BOOL)arg0;
- (id)giftFullLinkMonitor;
- (void)setEffectServiceDisable;
- (BOOL)effectServiceEnable;
- (void)resumeNonInteractiveGiftAnimation;
- (void)setGiftFullLinkMonitor:(id)arg0;
- (id)buildDynamicGiftModelWithGiftStruct:(id)arg0;
- (void)setDynamicGiftId:(id)arg0;
- (void)suspendOtherGiftQueueOnInteractiveConsoleDisplay;
- (id)buildDynamicGiftModelWithGiftAnimationNode:(id)arg0;
- (id)dynamicGiftId;
- (void)tr_dynamicGiftEndWebViewWithComboCount:(id)arg0;
- (id)captureAssemblyGifts;
- (id)anchorABManager;
- (void)setEffectEnable:(BOOL)arg0 anchorEffectConfig:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isLegalTags:(id)arg0 nodePaths:(id)arg1;
- (id)converFileURLToLocalPath:(id)arg0;
- (BOOL)useLivecoreInterface;
- (id)effectProcessing;
- (id)dynamicEffectService;
- (void)dispatchEffectMessage:(long long)arg0 arg1:(long long)arg1 arg2:(long long)arg2 arg3:(id)arg3;
- (void)resumeOtherGiftQueueOnDynamicGiftFinish;
- (id)convertEffectModelList:(id)arg0;
- (id)effectServiceAdapter;
- (id)socialInteractAdapter;
- (BOOL)isEnableAnchorLocalEffectScene:(unsigned long long)arg0 socialScene:(unsigned long long)arg1;
- (id)convertEffectModel:(id)arg0;
- (id)_obtainAssetListWithDynamicGift:(id)arg0 startIndex:(long long)arg1;
- (id)_obtainAssetListWithRequiredAssets:(id)arg0;
- (void)setDynamicGiftPrice:(id)arg0;
- (BOOL)isNonInteractiveGiftQueuesFreezing;
- (void)setIsNonInteractiveGiftQueuesFreezing:(BOOL)arg0;
- (id)dynamicGiftPrice;
- (void)suspendNonInteractiveGiftAnimation;
- (void)setCaptureAssemblyGifts:(id)arg0;
- (void)setEffectServiceAdapter:(id)arg0;
- (void)setSocialInteractAdapter:(id)arg0;
- (void)setEffectProcessing:(id)arg0;
- (void)setAnchorABManager:(id)arg0;
- (void)setDynamicEffectService:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setPlayer:(id)arg0;
- (id)player;

@end