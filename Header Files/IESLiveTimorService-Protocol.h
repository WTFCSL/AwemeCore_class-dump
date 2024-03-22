//
//     Generated by private class-dump
//

@protocol IESLiveTimorService <NSObject>

- (void)closeTimorViewController:(id)arg0;
- (void)preloadTimorWithURL:(id)arg0 priority:(long long)arg1;
- (void)openTimorWithSchema:(id)arg0 lightScreen:(BOOL)arg1 callBack:(id /* block */)arg2;

@optional

- (BOOL)isAuditingVersion;
- (void)showIronManODRToastWithContent:(id)arg0 onController:(id)arg1;
- (id)ironManTitle;
- (BOOL)isNativeAppScreenRecording;
- (void)updateLiveOpenPlatformAudienceVideoContainer:(id)arg0 status:(long long)arg1;
- (id)timorSchemaCodecWithSchema:(id)arg0 externalParams:(id)arg1;
- (id)timorQueryAndPathFromSchema:(id)arg0;
- (id)replaceIronManSchema:(id)arg0 withNewStartPage:(id)arg1;
- (BOOL)openWithSchema:(id)arg0;
- (id)schemaCodecWithSchema:(id)arg0 scene:(id)arg1 bdpLog:(id)arg2 customParams:(id)arg3;
- (void)addTimorEventListenerForEvent:(id)arg0;
- (void)removeTimorEventListener;
- (void)openTimorWithSchema:(id)arg0 externalParams:(id)arg1 lightScreen:(BOOL)arg2;
- (id)generateIronManSchemaWithAppID:(id)arg0 startPage:(id)arg1;
- (void)updateTimorAnchorConfigIfNeeded;

@end
