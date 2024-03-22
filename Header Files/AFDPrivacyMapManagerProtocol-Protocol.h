//
//     Generated by private class-dump
//

@protocol AFDPrivacyMapManagerProtocol <NSObject>

@property (readonly, nonatomic) BOOL disableMarkNameCheck;
@property (readonly, nonatomic) BOOL disableContactCheck;
@property (readonly, nonatomic) BOOL disableBrowserRecordCheck;
@property (readonly, nonatomic) BOOL disableDiggListCheck;
@property (readonly, nonatomic) BOOL disableFavoriteListCheck;
@property (readonly, nonatomic) BOOL disableFamiliarFeedCheck;
@property (readonly, nonatomic) BOOL disableRecommendFeedCheck;
@property (readonly, nonatomic) BOOL disableFamiliarDetailCheck;
@property (readonly, nonatomic) BOOL disableFriendDiggListCheck;
@property (readonly, nonatomic) BOOL disableBrowserRecord;
@property (readonly, nonatomic) BOOL disableProfileVisitor;
@property (readonly, nonatomic) BOOL disableDiggList;
@property (readonly, nonatomic) BOOL disableFriendDiggList;
@property (readonly, nonatomic) BOOL disableFavoriteList;

- (BOOL)disableFriendDiggList;
- (BOOL)enableProfileVisitorFunction;
- (id)filteredUsersForFans:(id)arg0;
- (id)filteredUsersForFollowers:(id)arg0;
- (id)filteredUsersForUserList:(id)arg0 scene:(unsigned long long)arg1;
- (id)filteredRecommendString:(id)arg0 context:(id)arg1;
- (BOOL)isIllegalRecommendString:(id)arg0 context:(id)arg1;
- (void)trackPublishedPermissionChangeResultWithType:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (id)filteredAwemeModelsForHotFeedWithDatasource:(id)arg0;
- (id)filteredAwemeModelsForFamiliarFeedWithDatasource:(id)arg0;
- (id)filteredUsersFromFriendsLikeUsers:(id)arg0 awemeModel:(id)arg1;
- (void)trackSettingsChangeResultWithType:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (BOOL)enableViewerFunction;
- (void)trackSingleFilterWithType:(long long)arg0 errCode:(id)arg1;
- (BOOL)disableContactCheck;
- (BOOL)disableBrowserRecordCheck;
- (BOOL)disableDiggListCheck;
- (BOOL)disableFavoriteListCheck;
- (BOOL)disableFamiliarFeedCheck;
- (BOOL)disableFamiliarDetailCheck;
- (BOOL)disableRecommendFeedCheck;
- (BOOL)disableBrowserRecord;
- (BOOL)disableProfileVisitor;
- (void)filterWithContext:(id)arg0 filterBlock:(id /* block */)arg1;
- (id)filteredUsersFromViewers:(id)arg0 awemeModel:(id)arg1;
- (id)filteredUsersFromLikeUsers:(id)arg0 awemeModel:(id)arg1;
- (id)filteredUsersFromFavoriteUsers:(id)arg0 awemeModel:(id)arg1;
- (id)filteredUsersFromFriendsRecommendViewers:(id)arg0 awemeModel:(id)arg1;
- (id)filteredAwemeModelsForFamiliarDetailFeedWithDatasource:(id)arg0;
- (id)filteredAwemeModelsForPostWorkWithDatasource:(id)arg0 isCurrentLoginUser:(BOOL)arg1;
- (BOOL)canShowProfileVisitorNoticeSetting;
- (id)filteredNoticesWithDatasource:(id)arg0;
- (void)trackSettingsResultWithError:(id)arg0;
- (void)trackSettingsBlockResultWithError:(id)arg0;
- (void)trackSetUserBlockResultWithBlockRequestType:(unsigned long long)arg0 blockRequestSource:(unsigned long long)arg1 error:(id)arg2;
- (void)trackUserBlockListResultWithListType:(long long)arg0 error:(id)arg1 extraDict:(id)arg2;
- (void)trackPrivacyRequestWithServiceName:(id)arg0 type:(id)arg1 error:(id)arg2 extra:(id)arg3;
- (void)trackRecentlyRemovedFollowCardWithError:(id)arg0;
- (BOOL)disableMarkNameCheck;
- (BOOL)disableFriendDiggListCheck;
- (BOOL)disableDiggList;
- (BOOL)disableFavoriteList;

@end