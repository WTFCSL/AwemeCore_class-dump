//
//     Generated by private class-dump
//

@class NSLock, NSString, UIViewController;

@interface AWEPlayInteractionLikeElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEGuestModeMessage> {
    BOOL _isSuperLike;
    unsigned long long _likeActionStatus;
    unsigned long long _superLikeActionStatus;
    NSString *_pageTypeString;
    UIViewController *_viewController;
    id /* block */ _teenModeLikeAction;
    NSLock *_diggLock;
}

@property (retain, nonatomic) NSLock *diggLock;
@property (nonatomic) unsigned long long likeActionStatus;
@property (nonatomic) unsigned long long superLikeActionStatus;
@property (nonatomic) BOOL isSuperLike;
@property (copy, nonatomic) NSString *pageTypeString;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ teenModeLikeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)onVideoPlayerViewDoubleClicked:(id)arg0;
- (id)pageTypeString;
- (void)onLikeButtonClicked:(id)arg0;
- (void)setPageTypeString:(id)arg0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5 inFollowFeed:(BOOL)arg6 ignoreUnlogin:(BOOL)arg7 animationBlock:(id /* block */)arg8;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)onAwemeDiggNotification:(id)arg0;
- (id)diggLock;
- (void)setDiggLock:(id)arg0;
- (BOOL)feedDoubleClickGuideLogin;
- (void)guestDidDiggAweme:(id)arg0 isUndigg:(BOOL)arg1;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 successedBlock:(id /* block */)arg4 diggOriginItem:(BOOL)arg5 enterMethod:(id)arg6 inFollowFeed:(BOOL)arg7 ignoreUnlogin:(BOOL)arg8 extraParams:(id)arg9 animationBlock:(id /* block */)arg10;
- (void)onLikeButtonClicked:(id)arg0 extraInfo:(id)arg1;
- (unsigned long long)likeActionStatus;
- (BOOL)isSuperLike;
- (unsigned long long)superLikeActionStatus;
- (void)onVideoPlayerViewDoubleClickedAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)interaction_onLikeButtonLongPressSuperLike:(id)arg0;
- (void)stratTracker;
- (void)onAwemeDiggBatchCancelNotification:(id)arg0;
- (void)onAwemeMusicNotificaton:(id)arg0;
- (void)onAwemeSuperLikeNotification:(id)arg0;
- (void)setSuperLikeActionStatus:(unsigned long long)arg0;
- (void)trackSuperLikeEventWithExtra:(id)arg0;
- (void)setIsSuperLike:(BOOL)arg0;
- (void)guest_onLikeButtonClicked:(id)arg0 extraInfo:(id)arg1;
- (void)trackLikeEventType:(long long)arg0 enterMethod:(id)arg1 triggerLogin:(BOOL)arg2;
- (void)setLikeActionStatus:(unsigned long long)arg0;
- (void)trackLikeEventType:(long long)arg0 enterMethod:(id)arg1 triggerLogin:(BOOL)arg2 diggStatusUnchange:(BOOL)arg3;
- (void)trackLikeEventType:(long long)arg0 enterMethod:(id)arg1 triggerLogin:(BOOL)arg2 diggStatusUnchange:(BOOL)arg3 extraDict:(id)arg4;
- (void)guest_onVideoPlayerViewDoubleClickedAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 successedBlock:(id /* block */)arg4 diggOriginItem:(BOOL)arg5 enterMethod:(id)arg6;
- (id /* block */)teenModeLikeAction;
- (void)addTabNameToExtraData:(id)arg0;
- (void)addPreviousPageToExtraData:(id)arg0;
- (void)addHomepageUserIDToExtraData:(id)arg0;
- (void)addSafeControlExtraData:(id)arg0;
- (void)trackLikeWithResponse:(id)arg0 error:(id)arg1 awemeType:(long long)arg2;
- (void)processCloseFriendsModelAfterDigged;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5 inFollowFeed:(BOOL)arg6;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 successedBlock:(id /* block */)arg4 diggOriginItem:(BOOL)arg5 enterMethod:(id)arg6 inFollowFeed:(BOOL)arg7;
- (void)guest_diggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 successedBlock:(id /* block */)arg4 diggOriginItem:(BOOL)arg5 enterMethod:(id)arg6 inFollowFeed:(BOOL)arg7 ignoreUnlogin:(BOOL)arg8 extraParams:(id)arg9 animationBlock:(id /* block */)arg10;
- (void)interactor_onLikeButtonClicked:(id)arg0 extraInfo:(id)arg1;
- (void)trackLikeEventType:(long long)arg0 enterMethod:(id)arg1;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5;
- (void)setTeenModeLikeAction:(id /* block */)arg0;
- (id)init;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)dealloc;

@end