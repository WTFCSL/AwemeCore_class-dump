//
//     Generated by private class-dump
//

@class NSString, IESLiveCountTimer, IESLiveInteractionLayoutChangePublisher, IESLiveInteractionLayoutManagerConfig, IESLiveInteractionLayout, HTSLiveInteractiveAPI;
@protocol IESLiveInteractionLayoutManagerDelegate;

@interface IESLiveInteractionAnchorLayoutManager : NSObject <IESLiveInteractionLayoutManager> {
    BOOL _isSwitching;
    BOOL _hitSwitchSceneControl;
    id<IESLiveInteractionLayoutManagerDelegate> delegate;
    HTSLiveInteractiveAPI *_api;
    id /* block */ _extraEventBuilderBlock;
    unsigned long long _moduleName;
    IESLiveInteractionLayout *_prevLayout;
    IESLiveInteractionLayout *_currLayout;
    IESLiveInteractionLayout *_switchingLayout;
    long long _hitSwitchSceneCount;
    IESLiveCountTimer *_switchSceneFirstPartTimer;
    IESLiveCountTimer *_switchSceneSecondPartTimer;
    IESLiveInteractionLayoutChangePublisher *_publisher;
    IESLiveInteractionLayoutManagerConfig *_anchorConfig;
}

@property (retain, nonatomic) IESLiveInteractionLayout *prevLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *switchingLayout;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) BOOL hitSwitchSceneControl;
@property (nonatomic) long long hitSwitchSceneCount;
@property (retain, nonatomic) IESLiveCountTimer *switchSceneFirstPartTimer;
@property (retain, nonatomic) IESLiveCountTimer *switchSceneSecondPartTimer;
@property (retain, nonatomic) IESLiveInteractionLayoutChangePublisher *publisher;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *anchorConfig;
@property (retain, nonatomic) HTSLiveInteractiveAPI *api;
@property (copy, nonatomic) id /* block */ extraEventBuilderBlock;
@property (nonatomic) unsigned long long moduleName;
@property (weak, nonatomic) id<IESLiveInteractionLayoutManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *config;

- (void)didSetAttachingDIContext;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setModuleName:(unsigned long long)arg0;
- (void)setAnchorConfig:(id)arg0;
- (id)anchorConfig;
- (BOOL)isSwitchingLayout;
- (void)setIsSwitching:(BOOL)arg0;
- (id)previousLayout;
- (id)currentLayoutFromServer;
- (void)reloadCurrentLayoutWithCompletion:(id /* block */)arg0;
- (void)switchLayout:(id)arg0 completion:(id /* block */)arg1;
- (void)switchLayout:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)switchLayout:(id)arg0 extra:(id)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)switchLayout:(id)arg0 extra:(id)arg1 source:(id)arg2 force:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)switchLayoutFrom:(id)arg0 toLayout:(id)arg1 extra:(id)arg2 source:(id)arg3 force:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)onCurrentLayoutDidChangedUsingBlock:(id /* block */)arg0;
- (id)onCurrentLayoutDidChangedWithSubscriptionUsingBlock:(id /* block */)arg0;
- (void)setupWithInitialLayout:(id)arg0;
- (void)startLayoutWithStartContext:(id)arg0 enterFrom:(id)arg1 source:(id)arg2 completion:(id /* block */)arg3;
- (void)handleReceivedSwitchSceneMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)handleReceivedUILayoutChangedMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)handleReceivedLinkerBaseInfo:(id)arg0;
- (id)switchingLayout;
- (id)prevLayout;
- (id)currLayout;
- (void)setCurrLayout:(id)arg0;
- (void)setPrevLayout:(id)arg0;
- (void)setSwitchingLayout:(id)arg0;
- (void)updateCurrentLayoutTo:(id)arg0 completion:(id /* block */)arg1;
- (void)switchLayoutWithResponseFrom:(id)arg0 to:(id)arg1 extra:(id)arg2 source:(id)arg3 isForce:(BOOL)arg4 completion:(id /* block */)arg5;
- (BOOL)hitSwitchSceneControl;
- (void)hitSwitchSceneFrequency;
- (id)switchSceneFirstPartTimer;
- (void)setSwitchSceneFirstPartTimer:(id)arg0;
- (void)setHitSwitchSceneCount:(long long)arg0;
- (long long)hitSwitchSceneCount;
- (void)setHitSwitchSceneControl:(BOOL)arg0;
- (id)switchSceneSecondPartTimer;
- (void)setSwitchSceneSecondPartTimer:(id)arg0;
- (void)p_handleReceivedMessage:(id)arg0 toLayout:(id)arg1 completion:(id /* block */)arg2;
- (void)p_trackLayoutChangedFrom:(id)arg0 to:(id)arg1;
- (id /* block */)extraEventBuilderBlock;
- (void)onCurrentLayoutCanvasDidUpdatedUsingBlock:(id /* block */)arg0;
- (void)onCurrentLayoutCanvasWillUpdateUsingBlock:(id /* block */)arg0;
- (void)setExtraEventBuilderBlock:(id /* block */)arg0;
- (id)publisher;
- (id)currentLayout;
- (void)dispose;
- (void)setConfig:(id)arg0;
- (void)setPublisher:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (id)eventContext;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (unsigned long long)moduleName;
- (BOOL)isSwitching;
- (id)api;
- (void)clean;
- (void)setApi:(id)arg0;

@end
