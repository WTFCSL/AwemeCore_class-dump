//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXKVStorageTester, TIMXGCDTimer;

@interface TIMXKVStorageTestTrigger : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    TIMXKVStorageTester *_tester;
    TIMXGCDTimer *_gloableJobTimer;
    TIMXGCDTimer *_userJobTimer;
}

@property (retain, nonatomic) TIMXKVStorageTester *tester;
@property (retain) TIMXGCDTimer *gloableJobTimer;
@property (retain) TIMXGCDTimer *userJobTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (void)setTester:(id)arg0;
- (void)p_userDidLogin:(id)arg0;
- (void)p_userWillLogout:(id)arg0;
- (void)p_runGloableJobIfNecessary;
- (void)setGloableJobTimer:(id)arg0;
- (void)p_runUserJobIfNecessary;
- (void)setUserJobTimer:(id)arg0;
- (void)p_runGloableJob;
- (void)p_runUserJob;
- (id)gloableJobTimer;
- (id)userJobTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tester;
- (id)initWithRootObject:(id)arg0;

@end
