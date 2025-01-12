//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEProfileAwemeUnreadCacheManager : NSObject <AWEUserMessage, AWEProfileAwemeUnreadCacheManagerProtocol> {
    NSMutableDictionary *_memoryCacheMap;
}

@property (retain, nonatomic) NSMutableDictionary *memoryCacheMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setMemoryCacheMap:(id)arg0;
- (id)memoryCacheMap;
- (void)p_clearCache;
- (BOOL)isItemUnreadWithUserID:(id)arg0 item:(id)arg1;
- (void)p_videoStartPlaySucceed:(id)arg0;
- (id)getItemIDsWithUserID:(id)arg0;
- (void)p_markReadStatusWithUser:(id)arg0 itemIdList:(id)arg1 completion:(id /* block */)arg2;
- (void)storeItemIDsWithUserID:(id)arg0 items:(id)arg1;
- (void)p_uploadUserVideosReadStatusWithType:(unsigned long long)arg0 itemIdList:(id)arg1 completion:(id /* block */)arg2;
- (id)diffCacheItemsNotExistStatusWithUser:(id)arg0 diffTargetItems:(id)arg1 responseItems:(id)arg2;
- (void)updateCacheItemsNotExistStatusWithUser:(id)arg0 itemIdList:(id)arg1 completion:(id /* block */)arg2;
- (void)diffAndUpdateCacheItemsNotExistStatusWithUser:(id)arg0 diffTargetItems:(id)arg1 responseItems:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
