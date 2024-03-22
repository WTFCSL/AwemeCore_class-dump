//
//     Generated by private class-dump
//

@class NSObject, BDPUniqueID, NSMapTable;
@protocol OS_dispatch_semaphore;

@interface BDPAppPageManager : NSObject {
    BOOL _autoCreateEnable;
    BDPUniqueID *_uniqueID;
    NSMapTable *_preloadPages;
    NSMapTable *_viewsById;
    NSMapTable *_viewsByStr;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMapTable *preloadPages;
@property (retain, nonatomic) NSMapTable *viewsById;
@property (retain, nonatomic) NSMapTable *viewsByStr;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) BOOL autoCreateEnable;

- (void)setupObserver;
- (id)preloadPages;
- (void)setPreloadPages:(id)arg0;
- (id)appPageWithID:(long long)arg0;
- (id)appPageWithPath:(id)arg0;
- (void)removePageIfNeed:(id)arg0;
- (void)releaseTerminatedPreloadAppPage:(id)arg0;
- (id)viewsById;
- (id)viewsByStr;
- (id)createAppPageForType:(id)arg0 caller:(id)arg1;
- (void)createBackupAppPageIfNeeded:(id)arg0;
- (BOOL)autoCreateEnable;
- (long long)preloadViewDelaySeconds;
- (BOOL)canPreloadPageForType:(id)arg0;
- (void)prepareAppPageIfNeed:(id)arg0 forType:(id)arg1;
- (void)setAutoCreateEnable:(BOOL)arg0;
- (void)handleReloadAppPageNotification;
- (void)handlePreloadAppPageTerminated:(id)arg0;
- (void)preparePreloadAppPageIfNeed:(id)arg0;
- (id)fpPage;
- (void)addAppPage:(id)arg0;
- (id)appPagesWithIDs:(id)arg0;
- (id)dequeueAppPageForRenderType:(id)arg0;
- (void)setAutoCreateAppPageEnable:(BOOL)arg0;
- (void)setViewsById:(id)arg0;
- (void)setViewsByStr:(id)arg0;
- (id)sem;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (unsigned long long)pageCount;
- (void)setSem:(id)arg0;
- (void)dealloc;
- (id)initWithUniqueID:(id)arg0;

@end
