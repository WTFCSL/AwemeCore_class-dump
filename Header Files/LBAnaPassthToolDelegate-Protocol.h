//
//     Generated by private class-dump
//

@protocol LBAnaPassthToolDelegate <NSObject>

@optional

- (void)analysisPassthHarassInfo:(struct { long long x0; long long x1; long long x2; id x3; })arg0 headDic:(id)arg1;
- (void)analysisPassthResponseError:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthReceivedDataError:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthInteralData:(id)arg0 handlerType:(int)arg1 headDic:(id)arg2;
- (void)analysisPassthExternalData:(id)arg0 handlerType:(int)arg1 headDic:(id)arg2;
- (void)analysisPassthWaterRabbitUseData:(id)arg0 handlerType:(int)arg1 headDic:(id)arg2;
- (void)analysisPassthOfficeDeviceCastStateSync:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthOfficeRemoteDeviceList:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthConnectBodyDict:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMultiSpeedPlay:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMultiSpeedPlayResponseError:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthDecoderlist:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthRightsSynchronousDict:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthUploadLogFileBodyDict:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMirrorActionWithUri:(id)arg0 mirrorActionType:(long long)arg1 headDic:(id)arg2;
- (void)analysisPassthEventReverseControlBodyDic:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthRemoteControlEventDic:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMicroMessage:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMicroClose:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthMultiSpeedPlaySync:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthQueryMirrorAndPushReplySetPlaySync:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthCollectServiceResponse:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthCloudFunctionResponse:(id)arg0 headDic:(id)arg1;
- (void)analysisPassthPublicManifestType:(int)arg0 bodyDict:(id)arg1 headDic:(id)arg2;

@end
