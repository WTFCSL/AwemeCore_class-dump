//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMPerformanceTracker : NSObject <AWEIMPerformanceTracker> {
    NSDictionary *_extra;
    NSString *_event;
    NSString *_scene;
    NSMutableDictionary *_trackDictionary;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *trackDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackerWithEvent:(id)arg0 scene:(id)arg1;
+ (id)trackerWithEvent:(id)arg0 scene:(id)arg1 threadSafe:(BOOL)arg2;

- (void)setExtra:(id)arg0;
- (id)trackParams;
- (void)setTrackDictionary:(id)arg0;
- (void)trackReport;
- (id)trackDictionary;
- (void)tickWithMethod:(id)arg0;
- (void)tockWithMethod:(id)arg0;
- (void)p_trackTimestampWithMethod:(id)arg0 timeKey:(id)arg1;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)scene;

@end