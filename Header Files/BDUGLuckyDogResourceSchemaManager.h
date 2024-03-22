//
//     Generated by private class-dump
//

@class NSString, BDUGLuckyDogResourceSchemaPopupLockGuard;

@interface BDUGLuckyDogResourceSchemaManager : NSObject <BDUGLuckyRouterIntercepterProtocol> {
    BDUGLuckyDogResourceSchemaPopupLockGuard *_popupQueueLock;
}

@property (weak, nonatomic) BDUGLuckyDogResourceSchemaPopupLockGuard *popupQueueLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preStartupUnionSchemaModule;
+ (long long)intercepterType;
+ (id)sharedInstance;

- (BOOL)canHandleUrl:(id)arg0;
- (id)handleUrl:(id)arg0;
- (BOOL)isMustBeAwakened;
- (void)__startup;
- (void)__handleResourceActionWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)setPopupQueueLock:(id)arg0;
- (id)popupQueueLock;
- (void)__doResourceActionWithURLString:(id)arg0 resourceParams:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;

@end