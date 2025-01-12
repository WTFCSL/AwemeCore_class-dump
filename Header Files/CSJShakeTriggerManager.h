//
//     Generated by private class-dump
//

@class NSLock, NSMapTable;

@interface CSJShakeTriggerManager : NSObject {
    NSMapTable *_trackerContainers;
    NSLock *_trackerLock;
}

@property (retain, nonatomic) NSMapTable *trackerContainers;
@property (retain, nonatomic) NSLock *trackerLock;

+ (void)startAccelerometerWithDataSource:(id)arg0;
+ (void)stopAccelerometerWithDataSource:(id)arg0;
+ (void)acceleroMotionActionWithDataSource:(id)arg0;
+ (BOOL)validShakeWithContainer:(id)arg0;
+ (void)_csj_safeShakeTriggerDelegateWithDataSource:(id)arg0;
+ (void)unlock;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (void)lock;
+ (id)manager;

- (void)registerWithContainerView:(id)arg0 dataSource:(id)arg1;
- (void)unregisterWithDataSource:(id)arg0;
- (void)setTrackerContainers:(id)arg0;
- (void)setTrackerLock:(id)arg0;
- (id)trackerLock;
- (id)trackerContainers;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copy;

@end
