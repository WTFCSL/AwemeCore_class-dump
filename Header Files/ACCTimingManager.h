//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ACCTimingManager : NSObject {
    NSMutableDictionary *_timingDict;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *timingDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (id)sharedInstance;

- (double)timeIntervalForKey:(id)arg0;
- (void)cancelTimingForKey:(id)arg0;
- (void)setTimingDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)startTimingForKey:(id)arg0;
- (id)lock;
- (double)stopTimingForKey:(id)arg0;
- (void)setLock:(id)arg0;
- (id)timingDict;

@end
