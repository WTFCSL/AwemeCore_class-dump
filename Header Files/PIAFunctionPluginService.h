//
//     Generated by private class-dump
//

@class NSString, PIABiMapTable;

@interface PIAFunctionPluginService : NSObject <PIAFunctionPluginService> {
    PIABiMapTable *_pluginsMap;
}

@property (retain, nonatomic) PIABiMapTable *pluginsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)engine:(id)arg0 onLoadStart:(id)arg1;
- (void)engine:(id)arg0 onURLChange:(id)arg1;
- (void)onNavigationCommit:(id)arg0;
- (void)engine:(id)arg0 onLoadFinish:(id)arg1;
- (void)onEngineDestroy:(id)arg0;
- (void)engine:(id)arg0 onFetchManifestDone:(id)arg1 error:(id)arg2 URL:(id)arg3;
- (void)context:(id)arg0 onParseManifestDone:(id)arg1;
- (void)willFetchManifestWithContext:(id)arg0;
- (BOOL)registerFunctionPlugin:(Class)arg0;
- (id)getPluginInstance:(Class)arg0 engine:(id)arg1;
- (void)setPluginsMap:(id)arg0;
- (void).cxx_destruct;
- (id)pluginsMap;

@end
