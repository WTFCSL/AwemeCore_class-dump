//
//     Generated by private class-dump
//

@class NSString;

@interface PIAFunctionPluginResourcePreload : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;

- (void)context:(id)arg0 onParseManifestDone:(id)arg1;
- (void)p_tryToPreloadWithResources:(id)arg0 context:(id)arg1;

@end
