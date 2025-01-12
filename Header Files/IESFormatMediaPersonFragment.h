//
//     Generated by private class-dump
//

@class AVAudioPlayer, NSString, IESFormatMediaPersonAvatarView;

@interface IESFormatMediaPersonFragment : IESFormatComponentBase <IESFormatConversationLifeCycle, IESFormatSwitchInteractionModeAnimationManagerDelegate, IESFormatMediaPersonService, IESFormatInteractionModeManagementServiceDelegate> {
    BOOL _isCalledDigitalHumanThinking;
    IESFormatMediaPersonAvatarView *_avatarView;
    AVAudioPlayer *_player;
    unsigned long long _animationState;
    unsigned long long _animationTransitionState;
}

@property (retain, nonatomic) IESFormatMediaPersonAvatarView *avatarView;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (nonatomic) unsigned long long animationState;
@property (nonatomic) unsigned long long animationTransitionState;
@property (nonatomic) BOOL isCalledDigitalHumanThinking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)formatConversationUserDidStartThinkingWithContext:(id)arg0;
- (void)formatConversationUserDidStartSpeakingWithContext:(id)arg0;
- (void)formatConversationDigitalHumanDidStartThinkingWithContext:(id)arg0;
- (void)formatConversationDigitalHumanDidStartSpeakingWithContext:(id)arg0;
- (void)formatConversationDigitalHumanDidFinishSpeakingWithContext:(id)arg0;
- (void)componentMount;
- (void)componentUnmount;
- (void)interactionModeManagementService:(id)arg0 didSwitchDigitalHumanInteractionModeFrom:(long long)arg1 to:(long long)arg2;
- (void)setupListingToThinkingTransitionCallBack;
- (void)switchAnimationToListening;
- (BOOL)isCalledDigitalHumanThinking;
- (void)switchAnimationToThinking;
- (void)setIsCalledDigitalHumanThinking:(BOOL)arg0;
- (void)switchAnimationToSpeaking;
- (void)p_switchToTextMode;
- (void)p_switchToAudioMode;
- (void)resetAnimationIfNeed;
- (void)animationFromSpeakingToListening;
- (void)animationFromThinkingToListening;
- (void)animationFromListeningToThinking;
- (void)animationFromSpeakingToThinking;
- (void)animationFromThinkingToSpeaking;
- (unsigned long long)animationTransitionState;
- (void)setAnimationTransitionState:(unsigned long long)arg0;
- (unsigned long long)animationState;
- (void)setAnimationState:(unsigned long long)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;
- (id)avatarContainerView;
- (void)renderView;
- (void)vibrate;
- (void)playSound;

@end
