//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedConcernGoodsCardMonitor : NSObject {
    id /* block */ _fpsCallback;
    NSMutableArray *_fpsRecords;
    NSObject<OS_dispatch_queue> *_sampleQueue;
}

@property (copy, nonatomic) id /* block */ fpsCallback;
@property (retain, nonatomic) NSMutableArray *fpsRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;

+ (BOOL)collectEnabled;
+ (id)settings;

- (void)setFpsCallback:(id /* block */)arg0;
- (id /* block */)fpsCallback;
- (void)setSampleQueue:(id)arg0;
- (void)startFPSMonitor;
- (id)getFeedGoodsCardFPSMonitorData;
- (void)setFpsRecords:(id)arg0;
- (id)sampleQueue;
- (id)fpsRecords;
- (void)clearMonitorData;
- (id)init;
- (void).cxx_destruct;
- (id)stop;
- (void)start;
- (void)stopMonitor;

@end
