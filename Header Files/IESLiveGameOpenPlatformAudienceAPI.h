//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameOpenPlatformAudienceAPI : IESLiveGameOpenPlatformCommonAPI <IESLiveGameOpenPlatformAudienceOpenAPIServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendAppID:(id)arg0 message:(id)arg1 toAnchorWithExtra:(id)arg2 callback:(id /* block */)arg3;
- (void)requestFollowStatusForAnchorWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestCheckEntranceVisiableWithElemId:(long long)arg0 elemType:(long long)arg1 callback:(id /* block */)arg2;
- (void)requestCheckImInfoWithAppId:(id)arg0 requestID:(id)arg1 adParams:(id)arg2 imExtra:(id)arg3 callback:(id /* block */)arg4;
- (void)requestIsFavoriteGameWithAppId:(id)arg0 callback:(id /* block */)arg1;
- (void)requestaAddGameToFavoritesWithAppId:(id)arg0 callback:(id /* block */)arg1;
- (void)requestExplainCardInfoWithRoomId:(id)arg0 callback:(id /* block */)arg1;

@end
