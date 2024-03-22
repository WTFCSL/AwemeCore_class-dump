//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HGRunningThreadProtector : NSObject {
    BOOL _enabled;
    id /* block */ _crashHandler;
    NSMutableDictionary *_callbackMap;
}

@property (retain) NSMutableDictionary *callbackMap;
@property BOOL enabled;
@property (copy) id /* block */ crashHandler;

+ (id)sharedInstance;

- (id)registCurrentThread:(id /* block */)arg0;
- (void)unregistCurrentThread;
- (id)callbackMap;
- (void)setCallbackMap:(id)arg0;
- (void)unregistThread:(id)arg0;
- (void)notify:(id)arg0 type:(id)arg1 thread:(unsigned int)arg2;
- (id /* block */)crashHandler;
- (void)setCrashHandler:(id /* block */)arg0;
- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)notify:(id)arg0;
- (void)setEnabled:(BOOL)arg0;

@end
