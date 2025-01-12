//
//     Generated by private class-dump
//

@class IESLiveFrequencyController, HTSEventContext, NSString, IESLiveAudienceMoreToolsApi, NSNumber;
@protocol IESLiveMoreToolsCommonUtilDelegate;

@interface IESLiveMoreToolsCommonUtil : HTSLiveApi <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber> {
    BOOL _isUsingInLandscape;
    BOOL _isRequestingTempStateAreaData;
    BOOL _cornerMarkShowing;
    id<IESLiveMoreToolsCommonUtilDelegate> _delegate;
    NSNumber *_roomId;
    HTSEventContext *_trackContext;
    IESLiveFrequencyController *_frequencyController;
    IESLiveAudienceMoreToolsApi *_api;
}

@property (retain, nonatomic) IESLiveFrequencyController *frequencyController;
@property (retain, nonatomic) IESLiveAudienceMoreToolsApi *api;
@property (nonatomic) BOOL isRequestingTempStateAreaData;
@property (nonatomic) BOOL cornerMarkShowing;
@property (weak, nonatomic) id<IESLiveMoreToolsCommonUtilDelegate> delegate;
@property (retain, nonatomic) NSNumber *roomId;
@property (nonatomic) BOOL isUsingInLandscape;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)frequencyController;
- (void)setFrequencyController:(id)arg0;
- (void)toastWithText:(id)arg0;
- (void)requestCollectGame:(id)arg0 fromType:(id)arg1 liveScene:(id)arg2 anchorID:(id)arg3 callback:(id /* block */)arg4;
- (void)moreToolsReceiveDidEnterRoom:(id)arg0;
- (void)triggerTempStateAreaRequest;
- (void)triggerTempStateAreaCollectList;
- (void)setIsUsingInLandscape:(BOOL)arg0;
- (void)addReachBadgeIconToToolBarWithDuration:(long long)arg0;
- (BOOL)isUsingInLandscape;
- (BOOL)isRequestingTempStateAreaData;
- (BOOL)cornerMarkShowing;
- (void)removeReachBadgeIconToToolBar;
- (void)setCornerMarkShowing:(BOOL)arg0;
- (void)dispatchModel:(id)arg0;
- (void)requestTempStateAreaDataCallBack:(id /* block */)arg0;
- (void)dispatchCollectModel:(id)arg0;
- (void)setIsRequestingTempStateAreaData:(BOOL)arg0;
- (void)logAudiencePlayTogetherEntrance:(id)arg0 andError:(id)arg1;
- (void)loadWebImageWithURL:(id)arg0 callback:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
