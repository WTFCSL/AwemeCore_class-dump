//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernRelationServiceImpl : HTSService <AWEConcernRelationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)follow:(id)arg0 completion:(id /* block */)arg1;
+ (void)approve:(id)arg0 approveCompletion:(id /* block */)arg1 followCompletion:(id /* block */)arg2;
+ (void)reject:(id)arg0 completion:(id /* block */)arg1;
+ (void)rejectWithNotice:(id)arg0 userID:(id)arg1 completion:(id /* block */)arg2;
+ (void)hideMyPostFromUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)showMyPostToUser:(id)arg0 completion:(id /* block */)arg1;
+ (long long)convertBlockStatusToHideMyPostStatus:(long long)arg0;
+ (id)convertUserGenderType:(long long)arg0 showGenderStrategy:(unsigned long long)arg1;
+ (void)hideHerPost:(id)arg0 completion:(id /* block */)arg1;
+ (void)unhideHerPost:(id)arg0 completion:(id /* block */)arg1;
+ (long long)convertBlockStatusToHideHerPostStatus:(long long)arg0;
+ (void)block:(id)arg0 completion:(id /* block */)arg1;
+ (void)blockUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)unblock:(id)arg0 completion:(id /* block */)arg1;
+ (void)unfollow:(id)arg0 completion:(id /* block */)arg1;
+ (void)removeFans:(id)arg0 completion:(id /* block */)arg1;
+ (void)topFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)untopFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)dislike:(id)arg0 completion:(id /* block */)arg1;
+ (void)followParamsRegulation:(id)arg0;
+ (void)closeFriends:(id)arg0 completion:(id /* block */)arg1;
+ (void)unCloseFriends:(id)arg0 completion:(id /* block */)arg1;
+ (long long)prePageTypeWithContext:(id)arg0;
+ (long long)prePageTypeWithEnterFrom:(id)arg0;

@end
