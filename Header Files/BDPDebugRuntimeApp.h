//
//     Generated by private class-dump
//

@class NSString;

@interface BDPDebugRuntimeApp : BDPDebugRuntime

@property (readonly, copy, nonatomic) NSString *bdp_pluginIdentifier;

+ (void)bootstrapLaunch;
+ (id)debugRuntimeWithUniqueID:(id)arg0;

- (void)updateUniqueID:(id)arg0;
- (id)bdp_pluginIdentifier;
- (void)bdp_loadPluginServiceIfNeededWithPluginID:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)pluginState:(id)arg0;
- (id)bdp_lock;
- (void)setCompletion:(id /* block */)arg0 forKey:(id)arg1;
- (void)setPluginState:(id)arg0 state:(unsigned long long)arg1;
- (void)callAndRemoveAllCompletions:(id)arg0 jsException:(id)arg1 error:(id)arg2;
- (void)setBdp_pluginIdentifier:(id)arg0;
- (id)bdp_pluginsState;
- (id)bdp_pendingCompletions;
- (BOOL)isPluginServiceLoaded:(id)arg0;
- (void)buildContextApp;
- (void)setupAppContext;
- (id)init;

@end
