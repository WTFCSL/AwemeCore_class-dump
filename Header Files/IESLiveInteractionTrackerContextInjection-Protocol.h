//
//     Generated by private class-dump
//

@protocol IESLiveInteractionTrackerContextInjection <NSObject>

@property (copy, nonatomic) id /* block */ guestConnectionSuccessInjectionBlock;
@property (copy, nonatomic) id /* block */ guestConnectionOverInjectionBlock;
@property (copy, nonatomic) id /* block */ voiceRoomShowInjectionBlock;
@property (copy, nonatomic) id /* block */ voiceRoomWatchDurationInjectionBlock;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionOverInjectionBlock;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionSuccessInjectionBlock;

- (id /* block */)guestConnectionSuccessInjectionBlock;
- (void)setGuestConnectionSuccessInjectionBlock:(id /* block */)arg0;
- (id /* block */)guestConnectionOverInjectionBlock;
- (void)setGuestConnectionOverInjectionBlock:(id /* block */)arg0;
- (id /* block */)voiceRoomShowInjectionBlock;
- (void)setVoiceRoomShowInjectionBlock:(id /* block */)arg0;
- (id /* block */)voiceRoomWatchDurationInjectionBlock;
- (void)setVoiceRoomWatchDurationInjectionBlock:(id /* block */)arg0;
- (id /* block */)anchorAudienceConnectionOverInjectionBlock;
- (void)setAnchorAudienceConnectionOverInjectionBlock:(id /* block */)arg0;
- (id /* block */)anchorAudienceConnectionSuccessInjectionBlock;
- (void)setAnchorAudienceConnectionSuccessInjectionBlock:(id /* block */)arg0;

@end
