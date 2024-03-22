//
//     Generated by private class-dump
//

@class HTSLiveAnimationStore, NSString, HTSLiveNativeAnimationScheduler, UIView, NSObject;
@protocol IESLiveMessageOptimizeService, IESLiveFeedDrawerProvider, IESLiveAlphaVideoPlayerDelegate, OS_dispatch_queue, IESLiveURLSchemaHandler;

@interface HTSLiveNotificationsFragment : IESLiveRoomComponent <IESLiveNotificationsProvider, IESLiveActivityVideoPlayerRouter, HTSLiveAnimationReactions, IESLiveMSequenceAnchorRouter> {
    BOOL _isHideComponent;
    HTSLiveAnimationStore *_store;
    HTSLiveNativeAnimationScheduler *_engine;
    UIView *_animationContainer;
    id<IESLiveURLSchemaHandler> _schemaHandler;
    id<IESLiveFeedDrawerProvider> _drawerProvider;
    long long _orientation;
    id<IESLiveMessageOptimizeService> _messageOptimizeService;
    NSObject<OS_dispatch_queue> *_rocketProcessQueue;
    id<IESLiveAlphaVideoPlayerDelegate> _activityAimationVideoPlayer;
}

@property (retain, nonatomic) HTSLiveAnimationStore *store;
@property (retain, nonatomic) HTSLiveNativeAnimationScheduler *engine;
@property (retain, nonatomic) UIView *animationContainer;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) id<IESLiveFeedDrawerProvider> drawerProvider;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isHideComponent;
@property (retain, nonatomic) id<IESLiveMessageOptimizeService> messageOptimizeService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rocketProcessQueue;
@property (retain, nonatomic) id<IESLiveAlphaVideoPlayerDelegate> activityAimationVideoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)showContainer;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (void)hideContainer;
- (void)hideComponent;
- (void)dispatchRocketAnimationWithMessage:(id)arg0;
- (void)dispatchFansClubAnimationWithMessage:(id)arg0;
- (void)dispatchActivityPrizeAnimationWithMessage:(id)arg0;
- (void)dispatchCommonToastWithMessage:(id)arg0;
- (void)dispatchToastWithMessage:(id)arg0;
- (void)setFilterPredicateForNotifyMessage:(id)arg0;
- (void)showComponent;
- (void)setIsHideComponent:(BOOL)arg0;
- (BOOL)isHideComponent;
- (void)enableAnimationQueueConsume:(BOOL)arg0;
- (void)addFakeNotifyMessage:(id)arg0 bgImageUrlList:(id)arg1;
- (id)alphaVideoPlayer;
- (void)startPlayWithConfiguration:(id)arg0;
- (void)setRocketProcessQueue:(id)arg0;
- (void)remakeAnimationContainerConstrants;
- (BOOL)_enableShowNotifications;
- (BOOL)isHonorBuffMessage:(id)arg0;
- (BOOL)checkByMsgProcessFilter:(id)arg0;
- (id)rocketProcessQueue;
- (void)p_dispatchRocketAnimationWithMessage:(id)arg0 userModel:(id)arg1;
- (id)getMessageType:(long long)arg0;
- (id)userTypeForAdminNotification;
- (void)trackLiveShowWithRoomID:(id)arg0 params:(id)arg1 messageType:(id)arg2;
- (void)trackTopMessageWithActionType:(id)arg0 params:(id)arg1 messageType:(id)arg2 extra:(id)arg3;
- (void)p_dispatchFansClubAnimationWithMessage:(id)arg0;
- (void)preloadResourceWithID:(id)arg0 completion:(id /* block */)arg1;
- (id)createParamsWith:(id)arg0;
- (void)trackPrizeNoticeAnimationShowWithParams:(id)arg0;
- (BOOL)isGuestUser:(id)arg0;
- (id)activityAimationVideoPlayer;
- (id)drawerProvider;
- (id)messageOptimizeService;
- (void)setDrawerProvider:(id)arg0;
- (void)setMessageOptimizeService:(id)arg0;
- (void)setActivityAimationVideoPlayer:(id)arg0;
- (void)updateContent;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (id)engine;
- (void)stopPlaying;
- (void)setStore:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (BOOL)isPlaying;
- (void)setEngine:(id)arg0;
- (id)animationContainer;
- (void)setAnimationContainer:(id)arg0;
- (id)userType:(id)arg0;

@end
