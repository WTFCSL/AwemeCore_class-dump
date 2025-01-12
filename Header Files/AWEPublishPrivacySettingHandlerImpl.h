//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel;

@interface AWEPublishPrivacySettingHandlerImpl : NSObject <AWEPublishPrivacySettingHandlerProtocol> {
    AWEVideoPublishViewModel *_publishModel;
    ACCCameraSubscription *_subscription;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (id)aAWEStudioGlobalConfig;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)initWithPublishModel:(id)arg0;
- (void)didSelectPrivacy:(unsigned long long)arg0 isExclusionSelected:(BOOL)arg1 exclusionSecUidList:(id)arg2 exclusionUserList:(id)arg3 isPartOfVisibleSelected:(BOOL)arg4 partOfVisibleUsers:(id)arg5 isCloseFriendsSelected:(BOOL)arg6 closeFriendsCount:(long long)arg7 isHideSearch:(BOOL)arg8 param:(id)arg9 isUserSelect:(BOOL)arg10 isTrackable:(BOOL)arg11;
- (void)refreshWithPublishViewModel:(id)arg0;
- (void)showRedpacketPrivatePublishToastIfNeeded:(unsigned long long)arg0;
- (void)p_configExclusionModelIfNeed;
- (BOOL)p_needShowRedpacketPrivatePublishToast:(unsigned long long)arg0;
- (void)p_markPrivacyChangeRedPacketAlertShowed;
- (void)p_updateVideoSyncWithPrivacyOption:(unsigned long long)arg0 originalPrivacyType:(unsigned long long)arg1;
- (BOOL)p_preventSyncToApps;
- (BOOL)p_isMediumReward;
- (BOOL)p_isRedpacketTaskAcitivity;
- (id)p_redpacketPrivatePublishToastLastShowDate;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end
