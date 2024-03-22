//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveSettingsPreloadService : IESLiveGeneralBaseService <IESLiveSettingsSubscriber, HTSLiveAudienceActions, HTSLiveAnchorActions, IESLiveGuideActions, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _enableResetFreezedSettings;
    NSArray *_freezedSettingsWhiteList;
}

@property (retain, nonatomic) NSArray *freezedSettingsWhiteList;
@property (nonatomic) BOOL enableResetFreezedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (id)serviceActionsWithParam:(id)arg0;

- (void)serviceDidLaunch;
- (void)stopLive;
- (void)liveDidCloseAllRoom;
- (void)stopAnchorLive;
- (void)willCloseGuideViewController;
- (void)settingUpdateWithKey:(id)arg0 value:(id)arg1;
- (void)setEnableResetFreezedSettings:(BOOL)arg0;
- (void)setFreezedSettingsWhiteList:(id)arg0;
- (BOOL)enableResetFreezedSettings;
- (id)freezedSettingsWhiteList;
- (void).cxx_destruct;

@end
