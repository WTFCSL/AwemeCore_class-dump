//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEFeedDislikeAuthorFilter : NSObject <AWEUserMessage, AWEFeedDislikeFilterProtocol> {
    NSMutableArray *_cachedAuthorInfos;
    NSMutableArray *_cachedAuthorIDs;
}

@property (retain, nonatomic) NSMutableArray *cachedAuthorInfos;
@property (retain, nonatomic) NSMutableArray *cachedAuthorIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)willStartLogin;
- (void)willLogoutWithUserID:(id)arg0;
- (void)didFinishLogout;
- (void)willSwitchAccountWithUserID:(id)arg0;
- (void)addNotifications;
- (double)timeThreshold;
- (id)filterArrayWithModels:(id)arg0;
- (void)dislikeWithModel:(id)arg0 referString:(id)arg1;
- (void)revertDislikeWithModel:(id)arg0 referString:(id)arg1;
- (void)loadCachedInfos;
- (id)whiteSceneList;
- (id)cachedAuthorIDs;
- (id)cachedAuthorInfos;
- (void)storeCachedAuthorInfo;
- (void)willEnterBackground:(id)arg0;
- (BOOL)valideDate:(double)arg0;
- (void)setCachedAuthorInfos:(id)arg0;
- (void)setCachedAuthorIDs:(id)arg0;
- (unsigned long long)capacity;
- (id)init;
- (void).cxx_destruct;
- (id)storeKey;
- (void)dealloc;

@end
