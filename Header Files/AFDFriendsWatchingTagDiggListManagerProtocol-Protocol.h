//
//     Generated by private class-dump
//

@protocol AFDFriendsWatchingTagDiggListManagerProtocol <NSObject>

+ (id)sharedInstance;

- (void)showDiggListWithModel:(id)arg0 onViewController:(id)arg1 onRequestCompletion:(id /* block */)arg2 onClickSettingBlock:(id /* block */)arg3 onDismissBlock:(id /* block */)arg4;
- (BOOL)isDiggListShowing;
- (BOOL)hasCacheForModel:(id)arg0;
- (id)getUserListCacheByModel:(id)arg0;
- (void)filterUserListWithModel:(id)arg0 OnCompletion:(id /* block */)arg1;
- (void)saveUserListCache:(id)arg0 forModel:(id)arg1;
- (void)handlePrivacyWithType:(unsigned long long)arg0 status:(BOOL)arg1 userID:(id)arg2;
- (BOOL)needFilterdWithUserID:(id)arg0;
- (id)getUserModelsByModel:(id)arg0;
- (void)removeMyInfoFromCacheByModel:(id)arg0;
- (void)filterRemoveLabelUserListWithModel:(id)arg0;
- (void)addUserToCacheByModel:(id)arg0;
- (long long)getDiggCountByModel:(id)arg0;
- (void)saveUserAlias:(id)arg0;
- (id)getUserAlias:(id)arg0;

@end