//
//     Generated by private class-dump
//

@protocol BDPRuntimeLifeCycleMessage <NSObject>

+ (void)runtimeDidCreated:(id)arg0;
+ (void)runningDispatchQueueDidCreated:(id)arg0;
+ (void)runningDispatchQueue:(id)arg0 didSetupWithUniqueID:(id)arg1;
+ (void)runningDispatchQueue:(id)arg0 didStopWithUniqueID:(id)arg1;
+ (void)runtime:(id)arg0 didRenameWithUniqueID:(id)arg1;

@optional

- (void)runtimeDidCreated:(id)arg0;
- (void)runningDispatchQueueDidCreated:(id)arg0;
- (void)runningDispatchQueue:(id)arg0 didSetupWithUniqueID:(id)arg1;
- (void)runningDispatchQueue:(id)arg0 didStopWithUniqueID:(id)arg1;
- (void)runtime:(id)arg0 didRenameWithUniqueID:(id)arg1;
- (void)runningDispatchQueueDidFatalWithUniqueID:(id)arg0;

@end