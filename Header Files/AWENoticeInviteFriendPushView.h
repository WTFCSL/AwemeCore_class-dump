//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel;
@protocol AWEInnerNotificationContentOperator;

@interface AWENoticeInviteFriendPushView : AWENoticePushView <AWEInnerNotificationContent> {
    id<AWEInnerNotificationContentOperator> notificationOperator;
    id /* block */ _cancelBlock;
    id /* block */ _enterBlock;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UILabel *_contentLabel;
    UIImageView *_avatarImageView;
    UILabel *_enterLabel;
    NSTimer *_vibrateTimer;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) NSTimer *vibrateTimer;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)handleTapAction;
- (id)vibrateTimer;
- (void)setVibrateTimer:(id)arg0;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:(long long)arg0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)arg0;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)setNotificationOperator:(id)arg0;
- (void)p_setUpUI;
- (void)setEnterBlock:(id /* block */)arg0;
- (void)p_updateConsecutiveChatStatusWithPushModel:(id)arg0;
- (id /* block */)enterBlock;
- (void)p_enter;
- (void)tansferToRoom:(id)arg0;
- (void)configureWithPushModel:(id)arg0;
- (void)p_updatePushViewWithNoticePushForInviteFriend:(id)arg0;
- (void)p_trackInviteFriendCallingShowWithShowModel:(id)arg0;
- (void)p_doVibrate;
- (void)trackEventEnter:(id)arg0;
- (void)trackEventClick:(id)arg0;
- (void)p_cancel;
- (id)init;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)nameLabel;
- (void)viewDidAppear;
- (void)setCancelBlock:(id /* block */)arg0;
- (id)view;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;
- (id)enterLabel;
- (void)setEnterLabel:(id)arg0;

@end
