//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveChatChannelAnimationQueueManager, NSNumber;

@interface IESLiveChatChannelAnimationController : NSObject <IESLiveAutoRotateAction, HTSLiveMessageSubscriber> {
    BOOL _isActive;
    BOOL _enableChannelAssets;
    NSNumber *_currentChatChannelID;
    HTSEventContext *_trackContext;
    IESLiveChatChannelAnimationQueueManager *_queueManager;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveChatChannelAnimationQueueManager *queueManager;
@property (nonatomic) BOOL enableChannelAssets;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSNumber *currentChatChannelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)willAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)enableChannelAssets;
- (id)currentChatChannelID;
- (void)setCurrentChatChannelID:(id)arg0;
- (id)initWithDIContext:(id)arg0 trackContext:(id)arg1;
- (void)handleChatChannelGreetEmoticonModel:(id)arg0;
- (void)setEnableChannelAssets:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (BOOL)isActive;
- (void)messageReceived:(id)arg0;
- (id)queueManager;
- (void)setQueueManager:(id)arg0;

@end