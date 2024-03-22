//
//     Generated by private class-dump
//

@class IESLiveFollowBackPanelView, NSString;

@interface IESLiveFollowBackFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveFollowBackPanelViewDelegate> {
    IESLiveFollowBackPanelView *_panelView;
}

@property (retain, nonatomic) IESLiveFollowBackPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (id)transformFollowStrongGuideToIESLiveFollowBackPanelViewModel:(id)arg0;

- (id)panelView;
- (void)setPanelView:(id)arg0;
- (void)componentBindService;
- (void)componentUnmount;
- (void)cancelDelayDimiss;
- (void)trackPanelViewShowWithUser:(id)arg0 userType:(unsigned long long)arg1;
- (void)dismissFollowGuideWithDelay:(double)arg0;
- (void)dismissFollowGuide;
- (BOOL)checkShownGuideLimitaion;
- (void)showFollowGuideMessageWithContent:(id)arg0;
- (id)transformUserTypeToTrackString:(unsigned long long)arg0;
- (void)onReceivedFollowStrongGuideMessage:(id)arg0;
- (id)trackFollowBackWithRoom:(id)arg0 user:(id)arg1 userType:(unsigned long long)arg2;
- (void)panelViewDidClickButton:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (void)dealloc;
- (void)messageReceived:(id)arg0;

@end
