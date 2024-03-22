//
//     Generated by private class-dump
//

@class IESLiveInteractLinkMicMatchSuccessPanelConfig, UIImageView, IESLiveGCDTimer, UIView, UILabel, UIButton;
@protocol IESLiveInteractLinkMicMatchSuccessPanelDelegate;

@interface IESLiveInteractLinkMicMatchSuccessPanel : UIView {
    id<IESLiveInteractLinkMicMatchSuccessPanelDelegate> _delegate;
    IESLiveInteractLinkMicMatchSuccessPanelConfig *_config;
    UIView *_containerView;
    UIButton *_cancelButton;
    UIImageView *_avatarView;
    UIImageView *_genderIcon;
    UILabel *_nameLabel;
    UIView *_tagViewsContainer;
    UIView *_buttonsContainer;
    UIButton *_rematchButton;
    UIButton *_confirmButton;
    UIView *_centerContainerView;
    UIView *_linkUsersContainerView;
    IESLiveGCDTimer *_timer;
}

@property (weak, nonatomic) id<IESLiveInteractLinkMicMatchSuccessPanelDelegate> delegate;
@property (retain, nonatomic) IESLiveInteractLinkMicMatchSuccessPanelConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *tagViewsContainer;
@property (retain, nonatomic) UIView *buttonsContainer;
@property (retain, nonatomic) UIButton *rematchButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *centerContainerView;
@property (retain, nonatomic) UIView *linkUsersContainerView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)setButtonsContainer:(id)arg0;
- (id)buttonsContainer;
- (id)centerContainerView;
- (void)setCenterContainerView:(id)arg0;
- (void)p_stopTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1 config:(id)arg2;
- (void)setGenderIcon:(id)arg0;
- (id)genderIcon;
- (id)p_getProperSubStringWithEmojiString:(id)arg0 limitLength:(long long)arg1;
- (id)tagViewsContainer;
- (void)setTagViewsContainer:(id)arg0;
- (double)properHeight;
- (void)didShowSuccessPanel;
- (void)willHideSuccessPanel;
- (void)p_didTapCancelButton;
- (void)p_didTapRematchButton;
- (void)setRematchButton:(id)arg0;
- (void)p_didTapConfirmButton;
- (id)rematchButton;
- (id)linkUsersContainerView;
- (void)setLinkUsersContainerView:(id)arg0;
- (id)p_buildLinkUsersContainerViewWithLinkUsers:(id)arg0;
- (id)p_buildTagContainerViewWithTags:(id)arg0;
- (id)timer;
- (void)setCancelButton:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)config;
- (void)updateWithConfig:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (id)containerView;
- (id)nameLabel;
- (void)setDelegate:(id)arg0;
- (void)setupConstraints;
- (void)setNameLabel:(id)arg0;
- (void)setupViews;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
