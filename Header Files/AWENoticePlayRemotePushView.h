//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel, UIButton;
@protocol AWEInnerNotificationContentOperator;

@interface AWENoticePlayRemotePushView : AWENoticePushView <AWEInnerNotificationContent> {
    id<AWEInnerNotificationContentOperator> notificationOperator;
    id /* block */ _cancelBlock;
    id /* block */ _enterBlock;
    UIButton *_cancelBtn;
    UIButton *_enterBtn;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UILabel *_contentLabel;
    UIImageView *_avatarImageView;
    UILabel *_enterLabel;
    NSTimer *_vibrateTimer;
}

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *enterBtn;
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
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (id)vibrateTimer;
- (void)setVibrateTimer:(id)arg0;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:(long long)arg0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)arg0;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)setNotificationOperator:(id)arg0;
- (id)enterBtn;
- (void)setEnterBtn:(id)arg0;
- (void)p_setUpUI;
- (void)setEnterBlock:(id /* block */)arg0;
- (void)p_updateConsecutiveChatStatusWithPushModel:(id)arg0;
- (id /* block */)enterBlock;
- (void)p_doVibrate;
- (void)p_cancel;
- (void)p_enterPlayRemoteRoom;
- (void)p_updatePushViewWithNoticePushForPlayRemote:(id)arg0;
- (void)tryEnterRoom:(id)arg0;
- (void)trackEventShow:(id)arg0;
- (void)trackEventRefuse:(id)arg0;
- (void)configureWithPlayRemotePushModel:(id)arg0;
- (void)p_enterPlayRemoteRoom:(id)arg0;
- (void)p_showDisableToastIfNeeded;
- (id)roomPrivacyStatusForType:(long long)arg0;
- (id)businessType;
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