//
//     Generated by private class-dump
//

@class NSString, PIABiMapTable;

@interface PuzzlePIAPlugin : NSObject <PuzzleKitViewLifeCycleProtocol> {
    PIABiMapTable *_pluginMap;
}

@property (retain, nonatomic) PIABiMapTable *pluginMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedPIAPlugin;

- (void)kitView:(id)arg0 willCreatedWithContext:(id)arg1;
- (void)kitView:(id)arg0 didCreatedWithContext:(id)arg1;
- (void)kitView:(id)arg0 willStartLoadWithRequest:(id)arg1;
- (void)kitViewDidStartLoading:(id)arg0;
- (void)kitView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)kitView:(id)arg0 viewDidLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)kitViewWillDealloc:(id)arg0;
- (BOOL)usePIA:(id)arg0;
- (id)pluginMap;
- (void)setPluginMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
