//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AFDAfterFollowAlertContext;

@interface AFDRemarkNameManager : NSObject <AWEUserMessage, AFDRemarkNameManagerProtocol, AWEAlertProtocol> {
    NSMutableSet *_needShowRemarkEntranceSet;
    NSMutableSet *_remarkEntranceImpressionSet;
    AFDAfterFollowAlertContext *_afterFollowContext;
}

@property (retain, nonatomic) NSMutableSet *needShowRemarkEntranceSet;
@property (retain, nonatomic) NSMutableSet *remarkEntranceImpressionSet;
@property (retain, nonatomic) AFDAfterFollowAlertContext *afterFollowContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showRemarkNamePopupWithUser:(id)arg0 extraDict:(id)arg1;
+ (void)showQuickEditAliasAlertViewWithMobileKey:(id)arg0 currentUser:(id)arg1 enterFrom:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)canShowQuickEditAliasAlertViewWithFollowStatus:(long long)arg0 mobileKey:(id)arg1 userModel:(id)arg2;
+ (void)showQuickEditAliasAlertViewWithMobileKey:(id)arg0 currentUser:(id)arg1 completion:(id /* block */)arg2;
+ (void)showRemarkNamePopupWithUser:(id)arg0 extraDict:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_requestMobileKeyAndShowRemarkNamePopupWithUser:(id)arg0 extraDict:(id)arg1 completion:(id /* block */)arg2;
+ (void)p_showRemarkNamePopupWithUser:(id)arg0 mobileKey:(id)arg1 extraDict:(id)arg2 completion:(id /* block */)arg3;
+ (void)p_showRemarkNamePopupWithUser:(id)arg0 extraDict:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestMobileKeyWithUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)showQuickEditAliasAlertViewWithMobileKey:(id)arg0 currentUser:(id)arg1 extraDict:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)enableVisitNicknameInProfile;
+ (void)trackEditRemarkWithAction:(id)arg0 actionStatus:(id)arg1 user:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4;
+ (void)trackEditRemarksWithParams:(id)arg0;
+ (void)addOneCurrentPV:(id)arg0;
+ (long long)getCurrentPV:(id)arg0;
+ (id)getContactNameByMobileKey:(id)arg0;
+ (void)trackEditRemarkWithAction:(id)arg0 actionStatus:(id)arg1 user:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 addressFill:(BOOL)arg5;
+ (id)p_getPVStorageKey:(id)arg0;
+ (BOOL)enableShowEditAliasEntranceWithUserModel:(id)arg0;
+ (void)showRemarkEntrance:(id)arg0 user:(id)arg1 animated:(BOOL)arg2;
+ (id)generateRemarkNameBtnWithTarget:(id)arg0 action:(SEL)arg1;
+ (BOOL)isContactFriendWithMobileKey:(id)arg0;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShowAtEvent:(long long)arg0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)afterFollowContext;
- (void)setAfterFollowContext:(id)arg0;
- (void)setNeedShowRemarkEntranceSet:(id)arg0;
- (void)setRemarkEntranceImpressionSet:(id)arg0;
- (id)needShowRemarkEntranceSet;
- (id)remarkEntranceImpressionSet;
- (void)p_clearSetData;
- (id)initWithAfterFollowContext:(id)arg0;
- (void)addUserToEntranceShowSetIfNeeded:(id)arg0;
- (BOOL)checkCanShowRemarkEntracneWithUser:(id)arg0 isFollowFromProfile:(BOOL)arg1 showBlock:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end