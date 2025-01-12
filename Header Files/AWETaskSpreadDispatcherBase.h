//
//     Generated by private class-dump
//

@class NSString, NSMeasurement, NSMutableArray;

@interface AWETaskSpreadDispatcherBase : NSObject <AWETaskSpreadDispatcherProtocol> {
    BOOL _idle;
    NSMutableArray *_metaTasks;
}

@property (class, readonly, nonatomic) NSMeasurement *currentMachTime;

@property (retain, nonatomic) NSMutableArray *metaTasks;
@property (readonly, nonatomic) NSMeasurement *currentMachTime;
@property (nonatomic, getter=isIdle) BOOL idle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentMachTime;
+ (double)currentMachTimeInSeconds;
+ (id)machTimeAfterDelay:(double)arg0;

- (void)setMetaTasks:(id)arg0;
- (id)metaTasks;
- (void)__bindTaskObserver:(id)arg0;
- (void)__updateIdleState;
- (void)removeMetaTask:(id)arg0;
- (id)currentMachTime;
- (void)registToMainScheduler;
- (void)addMetaTask:(id)arg0;
- (void)removeMetaTaskWithFilter:(id /* block */)arg0;
- (void)removeAllMetaTask;
- (id)findMetaTaskWithFilter:(id /* block */)arg0;
- (void)executeMetaTaskWithContext:(id /* block */)arg0;
- (id)init;
- (void)execute;
- (void).cxx_destruct;
- (BOOL)isIdle;
- (void)setIdle:(BOOL)arg0;

@end
