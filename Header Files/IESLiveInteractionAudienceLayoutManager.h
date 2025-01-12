//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractionLayoutManagerConfig, IESLiveInteractionLayoutChangePublisher, IESLiveInteractionLayout;
@protocol IESLiveInteractionLayoutManagerDelegate;

@interface IESLiveInteractionAudienceLayoutManager : NSObject <IESLiveInteractionLayoutManager> {
    id<IESLiveInteractionLayoutManagerDelegate> delegate;
    IESLiveInteractionLayout *_prevLayout;
    IESLiveInteractionLayout *_currLayout;
    IESLiveInteractionLayout *_switchingLayout;
    IESLiveInteractionLayoutChangePublisher *_publisher;
    IESLiveInteractionLayoutManagerConfig *_audienceConfig;
}

@property (retain, nonatomic) IESLiveInteractionLayout *prevLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *switchingLayout;
@property (retain, nonatomic) IESLiveInteractionLayoutChangePublisher *publisher;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *audienceConfig;
@property (weak, nonatomic) id<IESLiveInteractionLayoutManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveInteractionLayoutManagerConfig *config;

- (void)didSetAttachingDIContext;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (BOOL)isSwitchingLayout;
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
- (void)p_trackLayoutChangedFrom:(id)arg0 to:(id)arg1;
- (id)audienceConfig;
- (void)setAudienceConfig:(id)arg0;
- (void)trackStartLayoutIfNeeded;
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
- (void)clean;

@end
