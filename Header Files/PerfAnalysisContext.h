//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PerfAnalysisContext : NSObject {
    unsigned long long _appStatus;
    NSMutableDictionary *_resultCache;
    NSObject<OS_dispatch_queue> *_resultQueue;
}

@property (retain, nonatomic) NSMutableDictionary *resultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;

- (id)getImageList;
- (id)getCacheFor:(id)arg0;
- (void)forceSaveResults:(id)arg0;
- (void)sendingData:(id)arg0 index:(long long)arg1;
- (id)resultCache;
- (void)setResultCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setResultQueue:(id)arg0;
- (id)resultQueue;
- (id)url;

@end
