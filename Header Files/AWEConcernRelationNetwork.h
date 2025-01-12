//
//     Generated by private class-dump
//

@interface AWEConcernRelationNetwork : NSObject

+ (void)hideMyPostFromUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)showMyPostToUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)blockUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)topFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)untopFollowingUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)approveUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)rejectUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)unblockUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)hidePostFromUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)unhidePostFromUser:(id)arg0 completion:(id /* block */)arg1;
+ (void)followType:(long long)arg0 context:(id)arg1 completion:(id /* block */)arg2;
+ (void)topOrUntopFollowingUser:(id)arg0 type:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)blockOrHideMyPostUserID:(id)arg0 type:(unsigned long long)arg1 source:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
