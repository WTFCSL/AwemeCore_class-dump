//
//     Generated by private class-dump
//

@class IESLiveInteractDynamicContainerServiceImpl, IESLiveAudioBackgroundViewModel, IESLiveAudioBackgroundView, IESLiveLinkmicPreloadApi, IESLiveLinkMicAudienceEnterInfoResponse_ResponseData, NSString;
@protocol IESLiveRoomService;

@interface IESLiveLinkmicPreloadService : IESLiveGeneralBaseService <IESLiveLinkmicPreloadActions, IESLiveSocialInteractAction, IESLiveSEIListener> {
    BOOL _hasInitBg;
    BOOL _initPreBgFail;
    IESLiveLinkmicPreloadApi *_api;
    id<IESLiveRoomService> _currentRoom;
    double _enterRoomTimeStamp;
    IESLiveLinkMicAudienceEnterInfoResponse_ResponseData *_linkmicEnterInfo;
    IESLiveAudioBackgroundViewModel *_bgViewModel;
    IESLiveAudioBackgroundView *_bgView;
    id /* block */ _firstLinkmicSEIAction;
    IESLiveInteractDynamicContainerServiceImpl *_dynamicService;
}

@property (retain, nonatomic) IESLiveLinkmicPreloadApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> currentRoom;
@property (nonatomic) double enterRoomTimeStamp;
@property (retain, nonatomic) IESLiveLinkMicAudienceEnterInfoResponse_ResponseData *linkmicEnterInfo;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *bgViewModel;
@property (retain, nonatomic) IESLiveAudioBackgroundView *bgView;
@property (nonatomic) BOOL hasInitBg;
@property (nonatomic) BOOL initPreBgFail;
@property (copy, nonatomic) id /* block */ firstLinkmicSEIAction;
@property (retain, nonatomic) IESLiveInteractDynamicContainerServiceImpl *dynamicService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)arg0;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (id)serviceActionsWithParam:(id)arg0;

- (void)serviceDidLaunch;
- (void)setEnterRoomTimeStamp:(double)arg0;
- (double)enterRoomTimeStamp;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (unsigned long long)seiDispatchPriority;
- (id)dynamicService;
- (void)setDynamicService:(id)arg0;
- (BOOL)isLinkmicRoom:(id)arg0;
- (id)getPlayModes;
- (id)getUserLists;
- (int)getUILayout;
- (id)playmodeInfo;
- (double)getEnterRoomTimeStamp;
- (id)getPreloadBgView;
- (id)getPreloadBgViewModel;
- (BOOL)enablePreLoadBgView;
- (id)linkmicEnterInfo;
- (void)preloadLinkmicInfo:(id)arg0;
- (void)preloadLinkmicSEIAction;
- (void)setFirstLinkmicSEIAction:(id /* block */)arg0;
- (BOOL)preloadGuestListEnable;
- (BOOL)preloadPlayModeInfoEnable;
- (BOOL)preloadBgViewEnable;
- (void)createPreBgFail;
- (void)setLinkmicEnterInfo:(id)arg0;
- (BOOL)isLinkmicRoomNeedBgPreLoad:(id)arg0;
- (void)preLoadBgForInteractRoom;
- (void)setInitPreBgFail:(BOOL)arg0;
- (id)bgViewModel;
- (void)setBgViewModel:(id)arg0;
- (BOOL)hasInitBg;
- (void)setHasInitBg:(BOOL)arg0;
- (BOOL)initPreBgFail;
- (id /* block */)firstLinkmicSEIAction;
- (void)endSocialInteractWithScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)api;
- (unsigned long long)getScene;
- (void)setCurrentRoom:(id)arg0;
- (id)currentRoom;
- (void)setApi:(id)arg0;

@end
