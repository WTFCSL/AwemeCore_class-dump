//
//     Generated by private class-dump
//

@class NSObject, NSString, BDTuringConfig, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDTuringEventService : NSObject {
    BDTuringConfig *_config;
    NSString *_subtype;
    NSString *_sharkLogId;
    long long _type;
    NSMutableArray *_touchEvents;
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _lastSamplingTimeInterval;
}

@property (retain, nonatomic) NSMutableArray *touchEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) double lastSamplingTimeInterval;
@property (retain) BDTuringConfig *config;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *sharkLogId;
@property (nonatomic) long long type;

+ (id)sharedInstance;

- (void)collectEvent:(id)arg0 data:(id)arg1;
- (id)fetchTouchEvents;
- (void)h5CollectEvent:(id)arg0 data:(id)arg1;
- (id)sharkLogId;
- (id)paramCheck:(id)arg0;
- (void)nativeCollectEvent:(id)arg0 data:(id)arg1;
- (double)lastSamplingTimeInterval;
- (void)setLastSamplingTimeInterval:(double)arg0;
- (id)toucheventFromTouch:(id)arg0;
- (void)collectTouchEvents:(id)arg0;
- (void)clearAllTouchEvents;
- (void)collectTouchEventsFromEvent:(id)arg0;
- (void)setSharkLogId:(id)arg0;
- (id)init;
- (id)subtype;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)config;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setSubtype:(id)arg0;
- (void)dealloc;
- (id)touchEvents;
- (void)setTouchEvents:(id)arg0;

@end
