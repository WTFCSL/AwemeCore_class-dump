//
//     Generated by private class-dump
//

@class NSString;
@protocol LBLelinkPassthPositiveSocketControlDelegate;

@interface LBLelinkPassthPositiveSocket : LBLelinkBaseSocket {
    BOOL _wrongPassth;
    NSString *_uuId;
    id<LBLelinkPassthPositiveSocketControlDelegate> _controlDelegate;
}

@property (copy, nonatomic) NSString *uuId;
@property (weak, nonatomic) id<LBLelinkPassthPositiveSocketControlDelegate> controlDelegate;
@property (nonatomic) BOOL wrongPassth;

- (void)passthRightsQuery;
- (void)passthJournalFileWithEid:(id)arg0 euqid:(id)arg1 et:(id)arg2;
- (void)passthPerformedMirrorActionType:(long long)arg0;
- (void)passthEventReverseControl;
- (void)passthListenRemoteControlSwitch:(BOOL)arg0;
- (void)passthMicroAppPlugAppId:(id)arg0 type:(long long)arg1 pluginUrl:(id)arg2 pluginproof:(id)arg3 loginInfo:(id)arg4;
- (void)passthMicroAppMessageWithAppId:(id)arg0 type:(long long)arg1 content:(id)arg2;
- (void)passthMicroAppCloseWithType:(long long)arg0;
- (void)passthSwitchTemporaryPrivateMode:(BOOL)arg0;
- (void)passthSendContorMessageWithContorType:(long long)arg0 contorCommands:(id)arg1;
- (void)passthQueryMirrorAndPushPortSet;
- (void)parseSingleData:(id)arg0;
- (void)responseLelinkStreamingPassthConnectSingleData:(id)arg0;
- (void)lelinkPassthString:(id)arg0 tag:(long long)arg1;
- (void)errorLackParam:(id)arg0;
- (id)uuId;
- (BOOL)wrongPassth;
- (void)passthConnectWithTid:(id)arg0;
- (void)passthErrorCode:(long long)arg0 error:(id)arg1;
- (void)passthPlayerInfoHeader:(id)arg0 aes:(id)arg1 loopMode:(long long)arg2 tid:(id)arg3 vuuid:(id)arg4 vsession:(id)arg5;
- (void)passthMediaAssetiMediaId:(id)arg0 mediaType:(int)arg1 name:(id)arg2 director:(id)arg3 actor:(id)arg4 albumArtURI:(id)arg5 metaData:(id)arg6;
- (void)passthLeBoInternalUseDataDic:(id)arg0 handlerType:(int)arg1;
- (void)passthWaterRabbitUseDataDic:(id)arg0 handlerType:(int)arg1;
- (void)passthThirdPartyExternalUseDataDic:(id)arg0 handlerType:(int)arg1 targetAppId:(id)arg2;
- (void)passthBarrage:(id)arg0 handlerType:(int)arg1;
- (void)passthBarrageSetting:(id)arg0 handlerType:(int)arg1;
- (void)passthIndenpendentBarrageSpeed:(unsigned long long)arg0 handlerType:(int)arg1;
- (void)passthIndenpentBarrageSwch:(BOOL)arg0 handlerType:(int)arg1;
- (void)passthCloudMirroRoomId:(id)arg0 type:(id)arg1;
- (void)passthGetPlaySpeed;
- (void)passthSetPlaySpeedWithRate:(double)arg0;
- (void)passthCacheVideoList:(id)arg0 startIndex:(long long)arg1;
- (void)passthSendFavoriteActionWithName:(id)arg0;
- (void)errorWithOnJsonSerialization:(id)arg0;
- (void)setUuId:(id)arg0;
- (void)setWrongPassth:(BOOL)arg0;
- (void).cxx_destruct;
- (id)controlDelegate;
- (void)setControlDelegate:(id)arg0;

@end
