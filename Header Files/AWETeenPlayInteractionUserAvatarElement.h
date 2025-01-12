//
//     Generated by private class-dump
//

@class NSString, UIImageView, LOTAnimationView, UIView;

@interface AWETeenPlayInteractionUserAvatarElement : AWETeenPlayInteractionBaseElement <CAAnimationDelegate> {
    BOOL _isRequesting;
    BOOL _isPlaySubscribe;
    UIImageView *_userAvatarView;
    UIImageView *_xiguaSignView;
    UIView *_subscribePromptView;
    LOTAnimationView *_subscribeAnimationView;
}

@property (retain, nonatomic) UIImageView *userAvatarView;
@property (retain, nonatomic) UIImageView *xiguaSignView;
@property (retain, nonatomic) UIView *subscribePromptView;
@property (retain, nonatomic) LOTAnimationView *subscribeAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlaySubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg0;
- (void)p_subscribe:(BOOL)arg0;
- (id)getTitleAction:(id)arg0;
- (void)p_updateUserAvatar;
- (id)xiguaSignView;
- (id)subscribePromptView;
- (void)p_playSubscribe:(BOOL)arg0;
- (void)p_playUnSubscribe;
- (void)p_showSubscribeGuide;
- (id)subscribeAnimationView;
- (BOOL)isPlaySubscribe;
- (void)setIsPlaySubscribe:(BOOL)arg0;
- (void)onUserAvatarViewClicked;
- (void)onSubscribePromptViewClicked;
- (void)setXiguaSignView:(id)arg0;
- (void)setSubscribePromptView:(id)arg0;
- (void)setSubscribeAnimationView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;

@end
