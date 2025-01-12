//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEUGUniformPushGuideManager : NSObject <AWEUGPushGuideLifeCycleProtocol> {
    NSMutableDictionary *_pitayaGuideExecutors;
    NSMutableDictionary *_pitayaGuideExecutionStatus;
    NSMutableDictionary *_pitayaGuideFailCallbacks;
    NSMutableDictionary *_pitayaGuideExecutionBannedStatus;
    NSMutableDictionary *_pitayaMessage;
    NSMutableDictionary *_sceneCompletionHandlers;
    NSMutableDictionary *_sceneViewModels;
    NSMutableDictionary *_sceneLifeCycleDelegates;
    NSDictionary *_defaultIconName;
}

@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutors;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutionStatus;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideFailCallbacks;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutionBannedStatus;
@property (retain, nonatomic) NSMutableDictionary *pitayaMessage;
@property (retain, nonatomic) NSMutableDictionary *sceneCompletionHandlers;
@property (retain, nonatomic) NSMutableDictionary *sceneViewModels;
@property (retain, nonatomic) NSMutableDictionary *sceneLifeCycleDelegates;
@property (retain, nonatomic) NSDictionary *defaultIconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)registerPitayaGuideScene:(id)arg0 executor:(id)arg1;
- (void)unRegisterPitayaGuideScene:(id)arg0;
- (void)registerPitayaGuideSceneFail:(id)arg0 callback:(id /* block */)arg1;
- (unsigned long long)checkPitayaGuideExecutionStatus:(id)arg0;
- (void)reportPitayaPushExecutionFail:(id)arg0;
- (void)reportPitayaPushExecutionSuccess:(id)arg0;
- (void)reportPitayaPushExecutionFinish:(id)arg0;
- (void)temporarilyBanPitayaGuideScene:(id)arg0;
- (void)requestShowPushGuideAlertOnScene:(id)arg0 completion:(id /* block */)arg1;
- (void)requestShowPushGuideAlertOnScene:(id)arg0 pitayaParams:(id)arg1 completion:(id /* block */)arg2;
- (void)requestShowPushGuideAlertOnScene:(id)arg0 viewStyle:(unsigned long long)arg1 pitayaParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)isPitayaReady;
- (void)requestPushGuideModelOnScene:(id)arg0 completion:(id /* block */)arg1;
- (void)registerPushGuideByPitaya;
- (void)pushGuideShowSuccess:(id)arg0;
- (void)pushGuideDismiss:(id)arg0;
- (void)pushGuideActionCancel:(id)arg0;
- (void)pushGuideActionConfirm:(id)arg0 selectionType:(id)arg1;
- (void)pushGuideActionSettingsBack:(id)arg0 isOpen:(BOOL)arg1;
- (void)requestShowPushGuideOnScene:(id)arg0 pitayaParams:(id)arg1 config:(id)arg2 completion:(id /* block */)arg3;
- (void)requestPushGuideCommonModelOnScene:(id)arg0 pitayaParams:(id)arg1 completion:(id /* block */)arg2;
- (id)defaultIconNameForSceneType:(id)arg0;
- (id)pitayaGuideExecutors;
- (id)pitayaGuideFailCallbacks;
- (id)pitayaGuideExecutionBannedStatus;
- (id)pitayaGuideExecutionStatus;
- (id)sceneViewModels;
- (void)p_onPitayaGuideShowFailed:(id)arg0;
- (void)p_onPitayaGuideShowFinished:(id)arg0;
- (id)pitayaMessage;
- (void)p_trackPitayaPullWithMessage:(id)arg0 pullStatus:(long long)arg1;
- (void)p_requestPushGuideModelOnScene:(id)arg0 frequencyControl:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)p_paramsWithScene:(id)arg0 frequencyControl:(BOOL)arg1 pitayaParams:(id)arg2;
- (id)sceneLifeCycleDelegates;
- (id)sceneCompletionHandlers;
- (id)clientFreqControlModel;
- (void)pushGuideShowFail:(id)arg0 pullStatus:(long long)arg1;
- (void)p_trackPitayaPullScene:(id)arg0 pullStatus:(long long)arg1;
- (void)requestPsortWithPitayaParams:(id)arg0 scene:(id)arg1 config:(id)arg2;
- (void)requestPushSettingStatusWithScene:(id)arg0 completion:(id /* block */)arg1;
- (id)psortParamsWithScene:(id)arg0 pitayaParams:(id)arg1 config:(id)arg2;
- (void)handleShowResponseModel:(id)arg0 scene:(id)arg1 config:(id)arg2;
- (id)p_pushClickTrackerPayloadFromModel:(id)arg0;
- (id)defaultIconName;
- (id)buildTriggerExtraFeatureParams:(id)arg0;
- (void)reportPushGuideBuildFail:(id)arg0 pullStatus:(long long)arg1;
- (void)setPitayaGuideExecutors:(id)arg0;
- (void)setPitayaGuideExecutionStatus:(id)arg0;
- (void)setPitayaGuideFailCallbacks:(id)arg0;
- (void)setPitayaGuideExecutionBannedStatus:(id)arg0;
- (void)setPitayaMessage:(id)arg0;
- (void)setSceneCompletionHandlers:(id)arg0;
- (void)setSceneViewModels:(id)arg0;
- (void)setSceneLifeCycleDelegates:(id)arg0;
- (void)setDefaultIconName:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
