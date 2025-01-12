//
//     Generated by private class-dump
//

@class NSString, AFDBottomSnackBarView, AWEUserModel;

@interface AFDBecomeCloseFriendsNotice : NSObject <AFDBottomSnackBarViewDelegate> {
    AFDBottomSnackBarView *_sendMsgSnackBarView;
    AWEUserModel *_userModel;
}

@property (retain, nonatomic) AFDBottomSnackBarView *sendMsgSnackBarView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showCloseFriendsNoticeWithUser:(id)arg0 status:(long long)arg1;
- (void)didClickedSnackBar;
- (id)sendMsgSnackBarView;
- (void)showBecomeCloseFriendsSnackBar:(id)arg0;
- (void)showCloseFriendsNoticeWithUser:(id)arg0 status:(long long)arg1 isOnTabBarHomePage:(BOOL)arg2;
- (void)didClickedTipsButton;
- (void)setSendMsgSnackBarView:(id)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;

@end
