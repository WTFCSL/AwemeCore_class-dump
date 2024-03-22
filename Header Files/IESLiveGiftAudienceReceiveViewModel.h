//
//     Generated by private class-dump
//

@class NSArray, NSString, NSObject;
@protocol IESLiveMoreToolsSettingItemAdapter, IESLiveGiftAudienceReceiveAPI, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftAudienceReceiveViewModel : NSObject <IESLiveAnchorMoreToolsAction, IESLiveAudienceMoreToolsAction, IESLiveDataSyncDelegate, IESLiveGiftRecipientAudienceReceiveSubInterface> {
    id<IESLiveGiftModuleRecipientRouter> _recipientRouter;
    id<IESLiveGiftAudienceReceiveAPI> _giftAudienceReceiveApi;
    NSArray *_fetchedAudienceGiftReceiverList;
    NSObject<IESLiveMoreToolsSettingItemAdapter> *_audienceReceiveGiftSwitchItem;
    id /* block */ _realNameCertCompletion;
}

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveGiftAudienceReceiveAPI> giftAudienceReceiveApi;
@property (copy, nonatomic) NSArray *fetchedAudienceGiftReceiverList;
@property (retain, nonatomic) NSObject<IESLiveMoreToolsSettingItemAdapter> *audienceReceiveGiftSwitchItem;
@property (copy, nonatomic) id /* block */ realNameCertCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)userSettingInfoFetched:(id)arg0 error:(id)arg1;
- (id)anchorSideAudienceGiftAuthInfo;
- (BOOL)openAudienceReceiveGiftSettingWithAllMicExclusive:(BOOL)arg0;
- (void)setAnchorSideAudienceGiftAuthInfo:(id)arg0;
- (void)updateAnchorSideAudienceGiftAuthInfoWithRoomID:(id)arg0 anchorID:(id)arg1 authSwitch:(id)arg2 completion:(id /* block */)arg3;
- (void)anchorMoreToolsPanelViewShow;
- (void)addAudienceGiftReceiverWithRoomID:(id)arg0 anchorID:(id)arg1 audienceID:(id)arg2 completion:(id /* block */)arg3;
- (void)registerMessageProcesser;
- (id)recipientFromAudienceGiftReceiverListWithID:(id)arg0;
- (id)recipientRouter;
- (void)setRecipientRouter:(id)arg0;
- (void)fetchAnchorSideAudienceGiftAuthInfoWithRoomID:(id)arg0 anchorID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAudienceGiftReceiverListWithRoomID:(id)arg0 anchorID:(id)arg1 fetchFrom:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchedAudienceGiftReceiverList;
- (BOOL)enableJSBAudienceGiftAuth;
- (void)p_requestAnchorSideAudienceGiftAuthInfoIfNeeds;
- (void)setFetchedAudienceGiftReceiverList:(id)arg0;
- (void)p_setupAudienceSideReceiveGiftSwitchItem;
- (id)audienceReceiveGiftSwitchItem;
- (id)p_audienceSideGiftAuthUserSetting;
- (void)p_loadRealNameCertPageWithFaceOnly:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)p_setAudienceSideGiftAuthUserSetting:(id)arg0;
- (id /* block */)realNameCertCompletion;
- (void)setRealNameCertCompletion:(id /* block */)arg0;
- (id)audienceSideReceiveGiftUserUniqueSettingKey;
- (void)handleAudienceGiftSyncData:(id)arg0;
- (id)giftAudienceReceiveApi;
- (id)anchorSideAudienceReceiveGiftUniqueSettingKey;
- (BOOL)p_shouldAddAudienceSideReceiveGiftMoreToolsSettingItemWithUserSetting:(id)arg0;
- (void)p_addAudienceSideReceiveGiftMoreToolsSettingItem;
- (void)p_removeAudienceSideReceiveGiftMoreToolsSettingItem;
- (void)fetchAudienceGiftReceiverListIfNeeded;
- (void)p_authenticationNofity:(id)arg0;
- (void)setGiftAudienceReceiveApi:(id)arg0;
- (void)setAudienceReceiveGiftSwitchItem:(id)arg0;
- (void).cxx_destruct;

@end