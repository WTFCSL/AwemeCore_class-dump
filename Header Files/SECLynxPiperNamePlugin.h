//
//     Generated by private class-dump
//

@class NSString;

@interface SECLynxPiperNamePlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPluginInit;
- (void)lynx:(id)arg0 piperWillInvoke:(id)arg1;
- (long long)priority;

@end
