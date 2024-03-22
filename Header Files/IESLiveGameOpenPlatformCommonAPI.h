//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformCommonAPI : HTSLiveApi <IESLiveGameOpenPlatformCommonOpenAPIServiceInterface, IESLiveGameOpenPlatformFoundationAPIServiceInterface> {
    id<IESLiveRoomService> _room;
    id /* block */ _packExtraMethod;
}

@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ packExtraMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openAPIBaseURL;
- (id /* block */)packExtraMethod;
- (void)buildRequestWithPath:(id)arg0 params:(id)arg1 useBaseURL:(BOOL)arg2 requestMethod:(unsigned long long)arg3 respClass:(Class)arg4 extraConfig:(id)arg5 respCallback:(id /* block */)arg6;
- (void)requestAppStartWithAppId:(id)arg0 source:(long long)arg1 extra:(id)arg2 stampExtra:(id)arg3 cardExtra:(id)arg4 callback:(id /* block */)arg5;
- (void)requestAppStopWithAppId:(id)arg0 startId:(id)arg1 callback:(id /* block */)arg2;
- (void)requestShowAppPanelStatusWithAppId:(id)arg0 roomId:(id)arg1 callback:(id /* block */)arg2;
- (void)requestHideAppPanelStatusWithAppId:(id)arg0 roomId:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithRoom:(id)arg0 DIContext:(id)arg1;
- (void)requestStartGame:(id)arg0 gameID:(int)arg1 roomID:(id)arg2 isInDebugRoom:(BOOL)arg3 launchSource:(unsigned long long)arg4 callback:(id /* block */)arg5;
- (void)requestStopGame:(long long)arg0 appID:(id)arg1;
- (void)trackOpenApiWithUrl:(id)arg0 params:(id)arg1 error:(id)arg2;
- (void)requestAppStartWithAppId:(id)arg0 source:(long long)arg1 extra:(id)arg2 stampExtra:(id)arg3 cardExtra:(id)arg4 openExtra:(id)arg5 callback:(id /* block */)arg6;
- (void)handleHitSharkWithPath:(id)arg0 error:(id)arg1 headerExtra:(id)arg2 callback:(id /* block */)arg3;
- (void)requestAppStopWithAppId:(id)arg0 startId:(id)arg1 extra:(id)arg2 callback:(id /* block */)arg3;
- (void)requestDiamondsPayV3WithAppID:(id)arg0 orderID:(id)arg1 diamonds:(long long)arg2 payTag:(id)arg3 callback:(id /* block */)arg4;
- (void)requestDiamondsPayWithAppID:(id)arg0 orderID:(id)arg1 diamonds:(long long)arg2 payTag:(id)arg3 callback:(id /* block */)arg4;
- (void)requestRoomInfoWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestUserInfoWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestUserInfoV2WithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestOrderGenIDWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestOrderDetailWithAppID:(id)arg0 orderID:(id)arg1 callback:(id /* block */)arg2;
- (void)requestStartGame:(id)arg0 gameID:(int)arg1 roomID:(id)arg2 launchSource:(unsigned long long)arg3 callback:(id /* block */)arg4;
- (void)requestIndividualPlayerWithAppID:(id)arg0 isIntermediate:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)requestCreatePropUsageOrderWithAppID:(id)arg0 propId:(long long)arg1 propNum:(long long)arg2 callback:(id /* block */)arg3;
- (void)requestUserPropInfoWithAppID:(id)arg0 propIds:(id)arg1 callback:(id /* block */)arg2;
- (void)requestBootConfigWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestSecretKeyWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestAppReportReasonListWithScene:(id)arg0 callback:(id /* block */)arg1;
- (void)submitReportBaseInfoWithAppID:(id)arg0 reportReason:(id)arg1 reportDesc:(id)arg2 reportUris:(id)arg3 pagePath:(id)arg4 pageQuery:(id)arg5 noExtraData:(BOOL)arg6 callback:(id /* block */)arg7;
- (void)setPackExtraMethod:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)room;

@end