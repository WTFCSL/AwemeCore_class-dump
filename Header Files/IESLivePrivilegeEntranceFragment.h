//
//     Generated by private class-dump
//

@class IESLivePrivilegeEntranceProfileController, NSString, HTSEventContext, IESLivePrivilegeEntranceButtonController, IESLivePrivilegeEntranceWealthController, IESLiveComponentContext, IESLivePrivilegeEntranceBarController;
@protocol IESLiveRoomServiceAdapter;

@interface IESLivePrivilegeEntranceFragment : IESLiveCubeFragment <IESLivePrivilegeEntranceProvider, IESLivePrivilegeCommonData, HTSLiveMessageSubscriber> {
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    IESLivePrivilegeEntranceButtonController *_entranceButtonController;
    IESLivePrivilegeEntranceBarController *_entranceBarController;
    IESLivePrivilegeEntranceProfileController *_entranceProfileController;
    IESLivePrivilegeEntranceWealthController *_entranceWealthController;
}

@property (retain, nonatomic) IESLivePrivilegeEntranceButtonController *entranceButtonController;
@property (retain, nonatomic) IESLivePrivilegeEntranceBarController *entranceBarController;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileController *entranceProfileController;
@property (retain, nonatomic) IESLivePrivilegeEntranceWealthController *entranceWealthController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> mixedRoom;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)componentBindService;
- (id)profileInterface;
- (void)cubeComponentCreate;
- (id)barInterface;
- (id)buttonInterface;
- (id)wealthInterface;
- (void)updateEntranceWithGift:(id)arg0 count:(long long)arg1;
- (id)entranceBarController;
- (id)entranceButtonController;
- (id)entranceProfileController;
- (id)entranceWealthController;
- (void)setEntranceButtonController:(id)arg0;
- (void)setEntranceBarController:(id)arg0;
- (void)setEntranceProfileController:(id)arg0;
- (void)setEntranceWealthController:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
