//
//     Generated by private class-dump
//

@interface AWETeenRecorderTracker : NSObject

+ (void)shootStart:(id)arg0 cameraDirection:(id)arg1;
+ (void)shootEnd:(id)arg0 cameraDirection:(id)arg1 shootDuration:(long long)arg2 endMethod:(id)arg3;
+ (void)guideVideoShow:(id)arg0 guideType:(id)arg1 effectId:(id)arg2;
+ (void)guideVideoClose:(id)arg0 guideType:(id)arg1 effectId:(id)arg2 closeType:(id)arg3 duration:(long long)arg4;
+ (void)videoShootSubpageShow:(id)arg0 shootType:(id)arg1 enterMethod:(id)arg2;
+ (void)recognizeEnd:(id)arg0 shootEntrance:(id)arg1 startMethod:(id)arg2 endMethod:(id)arg3 endStatus:(id)arg4 recognizeCnt:(long long)arg5 recognizeDuration:(long long)arg6 recognizeGrootNum:(long long)arg7 recognizePediaIdList:(id)arg8;
+ (void)recognizeStart:(id)arg0 shootEntrance:(id)arg1 startMethod:(id)arg2;
+ (void)enterVideoEditPageWithShootWay:(id)arg0 CreationID:(id)arg1 fromGroupID:(id)arg2 propID:(id)arg3 shootType:(id)arg4 tabName:(id)arg5 shootEnterFrom:(id)arg6;
+ (void)downloadClick:(id)arg0 propIdList:(id)arg1;
+ (void)downloadEnd:(id)arg0 propIdList:(id)arg1 endStatus:(id)arg2;
+ (void)privatePublishClick:(id)arg0 ShootWay:(id)arg1 CreationID:(id)arg2 fromGroupID:(id)arg3 propID:(id)arg4 propList:(id)arg5 tabName:(id)arg6 shootEnterFrom:(id)arg7;
+ (void)privatePublishSuccess:(id)arg0 groupID:(id)arg1 fromGroupID:(id)arg2 shootWay:(id)arg3 creationID:(id)arg4 propID:(id)arg5 propList:(id)arg6 tabName:(id)arg7 shootEnterFrom:(id)arg8;
+ (void)savePhotoTipShow:(id)arg0;
+ (void)savePhotoTipClick:(id)arg0;
+ (void)arAnimationClick:(id)arg0 shootEntrance:(id)arg1 isRecording:(id)arg2;
+ (void)clickPropEntrance:(id)arg0;
+ (void)propShow:(id)arg0;
+ (void)propClick:(id)arg0;
+ (void)flipCameraWithDirection:(id)arg0 flipMethod:(id)arg1 commonParams:(id)arg2;
+ (void)monitorPrivatePublishSuccess;
+ (void)monitorPrivatePublishFailWithError:(id)arg0;

@end
