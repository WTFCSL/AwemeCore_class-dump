//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomServiceAdapter, IESLivePrivilegeDressAPI, IESLivePrivilegeRoomModuleAdapter;

@interface IESLiveDressStore : NSObject <HTSLiveMessageSubscriber, IESLivePrivilegeBuyDressInterface, PuzzleKitViewLifeCycleProtocol> {
    id<IESLiveRoomServiceAdapter> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    id<IESLivePrivilegeDressAPI> _buyDressApi;
    id<IESLivePrivilegeRoomModuleAdapter> _privilegeAdapter;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLivePrivilegeDressAPI> buyDressApi;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLivePrivilegeRoomModuleAdapter> privilegeAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)kitView:(id)arg0 willCreatedWithContext:(id)arg1;
- (id)initWithRoom:(id)arg0 componentContext:(id)arg1 trackContext:(id)arg2;
- (void)buyDressFormGiftPanel:(id)arg0 trackParams:(id)arg1 rechargeBlock:(id /* block */)arg2 buyCompletion:(id /* block */)arg3;
- (BOOL)enableNewDressArch;
- (void)updateDressContext;
- (void)registerDressModule;
- (id)privilegeAdapter;
- (void)prefetchCurrentUserDress;
- (id)openEffectPreloadConfig;
- (void)prefetchOpenAssetWithGiftPages:(id)arg0;
- (void)prefetchOpenAssetWithGiftPage:(id)arg0;
- (BOOL)p_shouldSkipDiamondCheck;
- (BOOL)hasPlentyDiamand:(unsigned long long)arg0;
- (id)buyDressApi;
- (void)setBuyDressApi:(id)arg0;
- (void)setPrivilegeAdapter:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;

@end