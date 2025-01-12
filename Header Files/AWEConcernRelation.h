//
//     Generated by private class-dump
//

@interface AWEConcernRelation : NSObject

+ (void)follow:(id)arg0 completion:(id /* block */)arg1;
+ (void)approve:(id)arg0 approveCompletion:(id /* block */)arg1 followCompletion:(id /* block */)arg2;
+ (void)reject:(id)arg0 completion:(id /* block */)arg1;
+ (void)rejectWithNotice:(id)arg0 userID:(id)arg1 completion:(id /* block */)arg2;
+ (void)hideMyPostFromUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)showMyPostToUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)hideHerPost:(id)arg0 completion:(id /* block */)arg1;
+ (void)unhideHerPost:(id)arg0 completion:(id /* block */)arg1;
+ (void)block:(id)arg0 completion:(id /* block */)arg1;
+ (void)blockUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)unblock:(id)arg0 completion:(id /* block */)arg1;
+ (void)unfollow:(id)arg0 completion:(id /* block */)arg1;
+ (void)removeFans:(id)arg0 completion:(id /* block */)arg1;
+ (void)topFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)untopFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)dislike:(id)arg0 completion:(id /* block */)arg1;
+ (void)closeFriends:(id)arg0 completion:(id /* block */)arg1;
+ (void)unCloseFriends:(id)arg0 completion:(id /* block */)arg1;
+ (id)requireLogin;
+ (id)approveWithUserID:(id)arg0;
+ (id)rejectWithUserID:(id)arg0;
+ (id)handleFollowRequestWithNotice:(id)arg0;
+ (id)blockWithUserID:(id)arg0;
+ (void)taskSource:(id)arg0 completion:(id /* block */)arg1;
+ (void)taskSource:(id)arg0 completion:(id /* block */)arg1;
+ (id)blockWithUser:(id)arg0;
+ (id)unblockWithUserID:(id)arg0;
+ (id)hideMyPostWithUserID:(id)arg0;
+ (id)showMyPostToUserID:(id)arg0;
+ (id)hideHerPostWithUserID:(id)arg0;
+ (id)unhideHerPostWithUserID:(id)arg0;
+ (void)follow:(id)arg0 completionWithErrorToastControl:(id /* block */)arg1;
+ (id)getLoginContextWithUserID:(id)arg0 fromPageType:(long long)arg1;
+ (id)checkFollowRequestOnAir:(id)arg0;
+ (id)requireLoginWithLoginContext:(id)arg0;
+ (id)commitFollowWithContext:(id)arg0 followType:(long long)arg1;
+ (id)configErrorDescription:(id)arg0;
+ (void)tryRevertFollowStatus:(id)arg0 task:(id)arg1 error:(id)arg2;
+ (void)tryRevertUnfollowStatus:(id)arg0 task:(id)arg1;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (void)uploadfollowParams:(id)arg0 isDebug:(BOOL)arg1;
+ (id)awe_enterFromMapDictionary;
+ (long long)awe_prePageTypeForRecommendCardWithContext:(id)arg0;
+ (BOOL)awe_isFromFamiliarItem:(id)arg0;
+ (long long)awe_prePageTypeWithEnterFrom:(id)arg0;
+ (id)awe_enterFromRecommendMapDictionary;
+ (long long)awe_prePageTypeWithContext:(id)arg0;
+ (id)topWithUserID:(id)arg0;
+ (id)untopWithUserID:(id)arg0;

- (id)aAWERelationDOUYINHTSAdapter;

@end
