//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, AWEFriendsRadarPushModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEFriendsRadarPushView : UIView <AWEInnerNotificationContent> {
    id<AWEInnerNotificationContentOperator> notificationOperator;
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_rightTipLabel;
    AWEFriendsRadarPushModel *_model;
    NSString *_enterFrom;
    NSString *_trackID;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *rightTipLabel;
@property (retain, nonatomic) AWEFriendsRadarPushModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackID;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)configWithModel:(id)arg0;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:(long long)arg0;
- (BOOL)tapGestureIsEnable:(id)arg0;
- (void)setNotificationOperator:(id)arg0;
- (id)trackEnterFrom;
- (void)__addSubviews;
- (id)rightTipLabel;
- (void)setRightTipLabel:(id)arg0;
- (void)p_configLabel:(id)arg0 text:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 fontWeight:(double)arg4;
- (void)p_trackInnerPushWithActionType:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)trackID;
- (void)setTrackID:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)view;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end