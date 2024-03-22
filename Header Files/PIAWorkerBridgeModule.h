//
//     Generated by private class-dump
//

@class PIAWorkerMessagePort, NSString, NSDictionary, PIAContext;

@interface PIAWorkerBridgeModule : NSObject <JSModule> {
    PIAContext *_context;
    PIAWorkerMessagePort *_port;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) PIAWorkerMessagePort *port;
@property (weak, nonatomic) PIAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (id)initWithParam:(id)arg0;
- (id)getGlobalProps;
- (void)log:(id)arg0 level:(unsigned long long)arg1;
- (void)onReceivedWorkerMessage:(id)arg0;
- (id)getWorkerName;
- (id)getHref;
- (id)getUserAgent;
- (void)postBridgeMessage:(id)arg0;
- (id)getBridgeMessage;
- (void)importScriptsAsync:(id)arg0 resolve:(id /* block */)arg1 reject:(id /* block */)arg2;
- (id)port;
- (void)terminate;
- (void)setPort:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)callback:(id)arg0;
- (id)context;
- (void)trace:(id)arg0;
- (id)getMessage;

@end