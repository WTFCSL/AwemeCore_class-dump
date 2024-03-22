//
//     Generated by private class-dump
//

@class NSString;

@interface PIAFunctionPluginPrefetch : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;

- (void)onEngineDestroy:(id)arg0;
- (void)context:(id)arg0 onParseManifestDone:(id)arg1;
- (void)willFetchManifestWithContext:(id)arg0;
- (void)injectBridgeWithContext:(id)arg0 instance:(id)arg1;

@end