//
//     Generated by private class-dump
//

@class NSHashTable, NSString, NSRecursiveLock;

@interface PIALifeCycleService : NSObject <PIALifeCycleService> {
    NSRecursiveLock *_locker;
    NSHashTable *_list;
}

@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSHashTable *list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)locker;
- (void)setLocker:(id)arg0;
- (id)initService;
- (void)onOpenScheme:(id)arg0;
- (void)engine:(id)arg0 onLoadStart:(id)arg1;
- (void)engine:(id)arg0 onURLChange:(id)arg1;
- (void)onNavigationCommit:(id)arg0;
- (void)engine:(id)arg0 onLoadFinish:(id)arg1;
- (void)onEngineDestroy:(id)arg0;
- (BOOL)registerLifeCycleReceiver:(Class)arg0;
- (void).cxx_destruct;
- (id)list;
- (void)setList:(id)arg0;

@end