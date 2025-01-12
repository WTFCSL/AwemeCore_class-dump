//
//     Generated by private class-dump
//

@class NSMutableDictionary, JATNetworkOptTracker, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JATNetworkOpt : NSObject {
    BOOL _isRunning;
    BOOL _isCallbackQueueSerial;
    BOOL _enablePerformance;
    unsigned long long _currentOptType;
    NSMutableDictionary *_allowedPathDict;
    NSMutableArray *_fuzzyAllowedPathArray;
    NSMutableDictionary *_callbackPathDict;
    NSMutableArray *_fuzzyCallbackPathArray;
    NSOperationQueue *_sendSubThreadQueue;
    JATNetworkOptTracker *_tracker;
    NSObject<OS_dispatch_queue> *_callbackSerialQueue;
}

@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL enablePerformance;
@property (retain, nonatomic) NSMutableDictionary *allowedPathDict;
@property (retain, nonatomic) NSMutableArray *fuzzyAllowedPathArray;
@property (retain, nonatomic) NSMutableDictionary *callbackPathDict;
@property (retain, nonatomic) NSMutableArray *fuzzyCallbackPathArray;
@property (retain, nonatomic) NSOperationQueue *sendSubThreadQueue;
@property (retain, nonatomic) JATNetworkOptTracker *tracker;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackSerialQueue;
@property (readonly, nonatomic) unsigned long long currentOptType;
@property (nonatomic) BOOL isCallbackQueueSerial;

+ (id)shared;

- (id)allowedPathDict;
- (id)fuzzyAllowedPathArray;
- (id)callbackPathDict;
- (id)fuzzyCallbackPathArray;
- (void)setEnablePerformance:(BOOL)arg0;
- (void)setIsCallbackQueueSerial:(BOOL)arg0;
- (void)startWithType:(unsigned long long)arg0 concurrentCount:(unsigned long long)arg1;
- (void)setSendSubThreadQueue:(id)arg0;
- (id)sendSubThreadQueue;
- (void)p_hookTTNetworkChromiumBuildJsonHTTPTaskMethod;
- (void)p_hookTTNetworkChromiumBuildBinaryHTTPTaskMethod;
- (BOOL)enablePerformance;
- (BOOL)p_needChangeRequestThreadWithPath:(id)arg0;
- (BOOL)p_needChangeCallbackThreadWithPath:(id)arg0;
- (BOOL)isCallbackQueueSerial;
- (id)callbackSerialQueue;
- (BOOL)p_needChangeRequestThreadWithURLString:(id)arg0;
- (BOOL)p_needChangeCallbackThreadWithURLString:(id)arg0;
- (id)p_customCallbackQueue;
- (void)p_execTaskOnSubThread:(id /* block */)arg0;
- (void)updateAllowedMatchPathList:(id)arg0;
- (void)updateAllowedFuzzyPathList:(id)arg0;
- (void)switchCallbackQueueWitchMatchPathList:(id)arg0;
- (void)switchCallbackQueueWitchFuzzyPathList:(id)arg0;
- (void)enablePerformanceUpload:(BOOL)arg0;
- (void)makeCustomCallbackInSerialQueue;
- (void)startWithType:(unsigned long long)arg0;
- (BOOL)p_needChangeNetworkThreadModelWithURLString:(id)arg0 isMainThread:(BOOL)arg1 autoResume:(BOOL)arg2;
- (unsigned long long)currentOptType;
- (void)setAllowedPathDict:(id)arg0;
- (void)setFuzzyAllowedPathArray:(id)arg0;
- (void)setCallbackPathDict:(id)arg0;
- (void)setFuzzyCallbackPathArray:(id)arg0;
- (void)setCallbackSerialQueue:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
