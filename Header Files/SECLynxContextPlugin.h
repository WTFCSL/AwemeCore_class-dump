//
//     Generated by private class-dump
//

@class NSString;

@interface SECLynxContextPlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)arg0 didLoadContext:(id)arg1;
- (void)lynxWillInitWithContext:(id)arg0;
- (void)lynxViewWillDealloc:(id)arg0;
- (void)lynxBridge:(id)arg0 prepareInvokerContext:(id)arg1;
- (void)onLynxPiperResponsed:(id)arg0;
- (id)sessionContextWithMethod:(id)arg0 module:(id)arg1 session:(id)arg2 inLynx:(id)arg3;
- (id)generateFrameworkAPIContextFrom:(id)arg0 andPage:(id)arg1;
- (id)fixMissingBPEAExtra:(id)arg0 message:(id)arg1 withAPIContext:(id)arg2 andPage:(id)arg3;

@end
