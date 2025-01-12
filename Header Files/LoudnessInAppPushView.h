//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;
@protocol AWEInnerNotificationContentOperator;

@interface LoudnessInAppPushView : UIView <AWEInnerNotificationContent> {
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)viewDidDisappearWithReason:(long long)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)view;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
