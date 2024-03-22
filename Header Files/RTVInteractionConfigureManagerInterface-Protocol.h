//
//     Generated by private class-dump
//

@class RTVInteractionSetting;

@protocol RTVInteractionConfigureManagerInterface <NSObject>

@property (readonly, nonatomic) RTVInteractionSetting *interactionSettings;

- (BOOL)supportInviteOutsideUser;
- (BOOL)isSupportFeedShare;
- (double)defaultVoipVoiceVolume;
- (double)defaultFeedVideoPlayVolume;
- (double)defaultGamePlayVolume;
- (BOOL)enableNarrowView;
- (BOOL)preloadPlayerEnable;
- (BOOL)enableFeedShareMsgDoubleSend;
- (BOOL)enableFeedShareMsgDoubleReceive;
- (BOOL)shouldShowFeedTogetherPIP;
- (BOOL)disableJumpToIMWhenSendMsg;
- (BOOL)enableFeedShareExitPopConfirm;
- (BOOL)enableNarrowOptimize;
- (BOOL)enableVolumeSetting;
- (BOOL)enableEffectEmojiFullScreen;
- (BOOL)isInteractiveFusion;
- (id)interactionSettings;

@end
