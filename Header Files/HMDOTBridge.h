//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDOTBridge : NSObject {
    BOOL _enableBinding;
    NSMutableDictionary *_cachedTraces;
    NSObject<OS_dispatch_queue> *_callbackQeueue;
}

@property BOOL enableBinding;
@property (retain, nonatomic) NSMutableDictionary *cachedTraces;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQeueue;

+ (id)sharedInstance;

- (void)setEnableBinding:(BOOL)arg0;
- (BOOL)enableBinding;
- (id)callbackQeueue;
- (void)enableTraceBinding:(BOOL)arg0;
- (void)registerTrace:(id)arg0 forTraceID:(id)arg1;
- (void)removeTraceID:(id)arg0;
- (id)traceByTraceID:(id)arg0;
- (void)setCallbackQeueue:(id)arg0;
- (id)cachedTraces;
- (void)setCachedTraces:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
