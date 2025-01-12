//
//     Generated by private class-dump
//

@class NSLock, AWEFavoriteFileDataController, NSString;

@interface AWECollectionListCacheManager : NSObject <AWEUserMessage> {
    BOOL _isAvailable;
    NSLock *_lock;
    AWEFavoriteFileDataController *_dataController;
}

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AWEFavoriteFileDataController *dataController;
@property (nonatomic) BOOL isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setDataController:(id)arg0;
- (void)p_ForceUpdateCache;
- (void)updateCollectionListWithCompletion:(id /* block */)arg0;
- (id)getCollectionListDataControllerWithUpdate:(BOOL)arg0;
- (void)remakeCacheByList:(id)arg0 hasMore:(BOOL)arg1 cursor:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)setIsAvailable:(BOOL)arg0;
- (BOOL)isAvailable;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;
- (id)dataController;
- (void)updateCache:(id)arg0;

@end
