//
//     Generated by private class-dump
//

@protocol AWELeftSideBarRevisitUserCacheManagerProtocol <NSObject>

- (void)updateAwemeIDsWithFollowingUserID:(id)arg0 items:(id)arg1;
- (id)awemeIDsWithFollowingUserID:(id)arg0;
- (BOOL)isUnreadWithFollowingUserID:(id)arg0 item:(id)arg1;
- (id)diffNotExistAwemeIDsWithUser:(id)arg0 diffTargetItems:(id)arg1 responseItems:(id)arg2;
- (void)updateNotExistAwemeIDsWithUser:(id)arg0 itemIdList:(id)arg1 completion:(id /* block */)arg2;

@end
