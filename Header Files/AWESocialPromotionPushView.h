//
//     Generated by private class-dump
//

@class AWESocialPromotionPushViewModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEInnerNotificationContentOperator;

@interface AWESocialPromotionPushView : UIView <AWEInnerNotificationContent> {
    id<AWEInnerNotificationContentOperator> notificationOperator;
    AWESocialPromotionPushViewModel *_noticePushModel;
    UIView *_contentBaseView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_avatarImageView;
    UIImageView *_extAvatarBackground;
    UIImageView *_extAvatarImageView;
    UIButton *_replyButton;
    UILabel *_extTagLabel;
}

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *extAvatarBackground;
@property (retain, nonatomic) UIImageView *extAvatarImageView;
@property (retain, nonatomic) UIButton *replyButton;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) AWESocialPromotionPushViewModel *noticePushModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:(long long)arg0;
- (BOOL)tapGestureIsEnable:(id)arg0;
- (void)setNotificationOperator:(id)arg0;
- (void)setExtTagLabel:(id)arg0;
- (id)extTagLabel;
- (void)setNoticePushModel:(id)arg0;
- (id)noticePushModel;
- (id)contentBaseView;
- (id)extAvatarImageView;
- (void)setContentBaseView:(id)arg0;
- (void)setExtAvatarImageView:(id)arg0;
- (void)__addSubviews;
- (id)extAvatarBackground;
- (void)updateConfigurablePushView:(id)arg0;
- (void)p_trackAction:(id)arg0 extra:(id)arg1;
- (void)configurableLayoutSubViews;
- (void)setExtAvatarBackground:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)view;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)replyButton;
- (void)setReplyButton:(id)arg0;

@end
