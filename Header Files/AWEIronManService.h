//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIronManService : HTSService <AWEIronManService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timorSchemaCodecWithSchema:(id)arg0 scene:(id)arg1 bdpLog:(id)arg2 customParams:(id)arg3;
- (id)sceneFromSchema:(id)arg0;
- (id)locationFromSchema:(id)arg0;
- (id)appIDFromSchema:(id)arg0;
- (id)timorSchemaCodecWithSchema:(id)arg0 appendLog:(id)arg1;
- (id)timorSchemaCodecWithSchema:(id)arg0 externalParams:(id)arg1;
- (void)urlToTimorSchemaWithUrl:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)preloadIronManWithSchemaString:(id)arg0;
- (id)customParamsFromSchema:(id)arg0;
- (id)timorQueryAndPathFromSchema:(id)arg0;
- (id)replaceIronManSchema:(id)arg0 withNewStartPage:(id)arg1;
- (id)generateSchemaWithAppID:(id)arg0 startPage:(id)arg1;
- (void)notifyHostEventDidChangeWithName:(id)arg0 data:(id)arg1;
- (void)notifyHostEventDidChangeWithWithAppID:(id)arg0 eventName:(id)arg1 data:(id)arg2;
- (void)addTimorEventListener:(id)arg0 subscribeEvent:(id)arg1;
- (void)removeTimorEventListener:(id)arg0;
- (long long)matchSettingsListWithWhiteList:(BOOL)arg0 schemaDict:(id)arg1 urlString:(id)arg2;
- (id)schemaCodecWithResultSchema:(id)arg0;
- (BOOL)containsSpecificKeyValueWithList:(id)arg0;
- (void)schemaFromServerWithUrl:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)getDeviceName;

@end
