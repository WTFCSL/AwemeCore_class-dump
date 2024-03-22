//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEMusicFeedService;

@interface AWEMusicStreamingService : HTSService <AWEMusicStreamingService>

@property (readonly, nonatomic) id<AWEMusicFeedService> feedService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMiniLuna;
+ (Class)profileExtensionAreaCardControllerClass;
+ (void)openFullMusicPlayerWithMusicId:(id)arg0 scene:(id)arg1 previousPage:(id)arg2 enterMethod:(id)arg3 extraParams:(id)arg4;
+ (void)openMiniLunaWithTrackID:(id)arg0 userModel:(id)arg1 extraParams:(id)arg2;
+ (void)openMiniLunaWithTrackID:(id)arg0 userModel:(id)arg1 toTab:(unsigned long long)arg2 extraParams:(id)arg3;
+ (void)openMiniLunaWithTrackID:(id)arg0 userModel:(id)arg1 toTab:(unsigned long long)arg2 extraParams:(id)arg3 publicParams:(id)arg4;
+ (void)openMiniLunaPlayerWithService:(id)arg0 targetViewController:(id)arg1 extraParams:(id)arg2 eventServiceCompletion:(id /* block */)arg3;
+ (BOOL)hasOpenedMiniLunaBefore;
+ (void)setHasOpenedMiniLunaBefore;
+ (void)openWithEntranceModes:(id)arg0 userModel:(id)arg1;
+ (void)openWithEntranceModels:(id)arg0 toTab:(unsigned long long)arg1;
+ (void)openPlayer:(id)arg0 title:(id)arg1 eventModel:(id)arg2 queueDelegate:(id)arg3 delegate:(id)arg4;
+ (void)openFullMusicPlayerWithMusicId:(id)arg0 scene:(id)arg1 mustBeSingleSong:(BOOL)arg2 previousPage:(id)arg3 enterMethod:(id)arg4 extraParams:(id)arg5;
+ (id)generateFullMusicPlayerWithMusicId:(id)arg0 scene:(id)arg1 mustBeSingleSong:(BOOL)arg2 previousPage:(id)arg3 enterMethod:(id)arg4 lunaTag:(BOOL)arg5 extraParams:(id)arg6;
+ (void)openPlayerWithService:(id)arg0 eventService:(id)arg1 previousPage:(id)arg2 enterMethod:(id)arg3 extraParams:(id)arg4 disablePopGesture:(BOOL)arg5 dismissBlock:(id /* block */)arg6;
+ (void)shareOpenWithMusicPlayer:(id)arg0 eventService:(id)arg1 musicId:(id)arg2 completion:(id /* block */)arg3;
+ (id)musicIdClipMappingWithOriginalId:(id)arg0;
+ (void)miniShareOpenWithMusicPlayer:(id)arg0 secondaryMusicPlayer:(id)arg1 musicId:(id)arg2 isVideo:(BOOL)arg3 extraParams:(id)arg4 publicParams:(id)arg5 completion:(id /* block */)arg6;
+ (void)batchGetMusicLiteInfosWithIds:(id)arg0 completed:(id /* block */)arg1;
+ (void)batchGetMusicLiteInfosWithIdInfos:(id)arg0 completed:(id /* block */)arg1;
+ (void)reportAudioOverWhenIMToMiniAgainWithMusicService:(id)arg0;
+ (BOOL)isDSPOnTop;
+ (void)addCollectObserver:(id)arg0;
+ (void)requestLyrics:(id)arg0 type:(unsigned long long)arg1 previewStartTime:(double)arg2 previewEndTime:(double)arg3 musicId:(id)arg4 completion:(id /* block */)arg5;
+ (void)changeCollectionModel:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)lunaCollectState:(id)arg0;
+ (void)setLunaCollectState:(BOOL)arg0 forModel:(id)arg1;
+ (BOOL)lunaCopyrightPlayable:(id)arg0;
+ (void)changeLunaCollectionModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)musicShareToStoryExtraInfo;
+ (id)miniLunaShareSchemaConfig;
+ (void)requestOpenPlatformShareIdWithSourceStyleId:(id)arg0 trackId:(id)arg1 completion:(id /* block */)arg2;
+ (id)bgColorOf:(id)arg0;
+ (id)getVideoOrderWithSessionId:(id)arg0 itemId:(id)arg1;
+ (long long)getSongOrderWithSessionId:(id)arg0 musicId:(id)arg1;
+ (BOOL)getIsFromHotMusicListWithSessionId:(id)arg0;
+ (void)shareAsStoryWithAweme:(id)arg0 unmodifiablePublishParams:(id)arg1 enterFrom:(id)arg2 completion:(id /* block */)arg3;
+ (id)personPageRouterParamsString:(id)arg0;
+ (id)aweDomain;
+ (id)buildMusicServiceWithPlayerTrackParams:(id)arg0;
+ (id)openPlayerWithModel:(id)arg0 config:(id)arg1 relatedTrackParams:(id)arg2 playerTrackParams:(id)arg3;
+ (void)openPlayer:(id)arg0 queueDelegate:(id)arg1 config:(id)arg2 relatedTrackParams:(id)arg3;
+ (void)openPlayer:(id)arg0 queueDelegate:(id)arg1 playerDelegate:(id)arg2 config:(id)arg3 relatedTrackParams:(id)arg4;
+ (id)musicPlayerModelFrom:(id)arg0 trackParams:(id)arg1;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2;
+ (void)reportCollectEventModel:(id)arg0 isSuccess:(BOOL)arg1 code:(long long)arg2 isRepeatCollect:(BOOL)arg3;
+ (void)p_reportDspTabShow:(id)arg0 extra:(id)arg1;
+ (void)openWithEntranceModels:(id)arg0 toTab:(unsigned long long)arg1 userModel:(id)arg2;
+ (id)buildGuideServiceWithKey:(id)arg0 enterFrome:(id)arg1;
+ (void)reportCancelCollectEventModel:(id)arg0 isSuccess:(BOOL)arg1 code:(long long)arg2;

- (id)feedService;

@end