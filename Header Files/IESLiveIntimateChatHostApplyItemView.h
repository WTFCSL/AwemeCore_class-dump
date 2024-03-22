//
//     Generated by private class-dump
//

@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveIntimateChatHostApplyItemView : UIView {
    BOOL _enabled;
    UIImageView *_iconImageView;
    UIImageView<IESLiveWebPPlayer> *_animationView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (nonatomic) BOOL enabled;

- (void)didSetAttachingDIContext;
- (void)renderStatus:(long long)arg0;
- (void)p_animateWithResourceName:(id)arg0;
- (void)renderLinkerUserState:(long long)arg0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg0;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
