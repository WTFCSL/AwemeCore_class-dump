//
//     Generated by private class-dump
//

@class IESLiveOpenLivePermissionModel, NSDictionary, IESLiveUpdateCreateInfoApi, IESLivePublicScreenSettingView, IESLiveReplayViewModel, IESLiveUserProfileVisibleApi, NSString, BDXBridgeEventSubscriber, IESLiveCDNSpeedTestView, IESLiveClarityChooseView, CreateInfoResponse_CreateInfo, IESLiveGuideSettingCellItem, IESLiveGuideSettingScrollPanelView, IESLivePopupItem, IESLiveAudioChatSettingApi, ChatSettingGetResponse_ResponseData, IESLiveGuideToolBarItem, IESLiveOpenLivePermissionApi, IESLiveUploadBandwidthProberView, PushStreamInfo, HTSLiveScreenChatSetting, IESLiveActionSheetPresentViewController, IESLiveAnnouncementViewModel, IESLivePrivilegeScreenChatApi;
@protocol IESLiveDouPlusMonitor, IESLiveAnchorSharePreferenceService, IESLiveAskExplainPreferenceService, IESLiveAnchorCommentPreferenceService, IESLiveAnchorPreferenceService, IESLiveAnchorGiftPreferenceService, IESLiveAnnouncementService, IESLiveAnchorBacktrackPreferenceService, IESLiveVisibleScopePreferenceService, IESLiveAnchorTimeSchedulePreference, IESLiveDiggPreferenceService, IESLiveAudioSubtitlePreferenceService, IESLivePerfSampler, IESLiveAnchorDynamicClarityPreferenceService, IESLiveAnchorRecordPreferenceService, IESLiveGuideToolBarProvider;

@interface IESLiveGuideSettingFragment : IESLiveGuideComponent <IESLiveGuideBottomPannelShowActions, IESLiveGuideActions, IESLiveClarityChooseViewDelegate, IESLiveAnchorRecordPreferenceCellItemDelegate, IESLiveGuideUserPermissionService, IESLiveGuideSettingRouter, IESLiveAnchorRecordGroupPreferenceDelegate, IESLiveVocalizationAuthorityProtocol, IESLiveGuideIntroductionService, IESLiveUploadBandwidthProberViewDelegate> {
    BOOL _showedUserProfileRedDot;
    BOOL _didTimeNoticeBubbleShow;
    IESLiveOpenLivePermissionModel *_permissionModel;
    IESLiveAnnouncementViewModel *_announcementViewModel;
    IESLiveOpenLivePermissionApi *_permissionApi;
    CreateInfoResponse_CreateInfo *_openLiveModel;
    IESLiveReplayViewModel *_replayViewModel;
    HTSLiveScreenChatSetting *_screenChatSetting;
    IESLivePrivilegeScreenChatApi *_screenChatApi;
    ChatSettingGetResponse_ResponseData *_audioChatSettingModel;
    ChatSettingGetResponse_ResponseData *_audioChatSettingModelForShow;
    IESLiveAudioChatSettingApi *_audioChatSettingApi;
    IESLiveUserProfileVisibleApi *_userProfileVisibleApi;
    IESLiveUpdateCreateInfoApi *_updateCreateInfoApi;
    IESLiveGuideSettingScrollPanelView *_panelView;
    IESLiveClarityChooseView *_chooseView;
    IESLiveActionSheetPresentViewController *_panelVC;
    IESLiveCDNSpeedTestView *_cdnSpeedTestView;
    IESLivePublicScreenSettingView *_publicScreenSettingView;
    IESLiveUploadBandwidthProberView *_proberView;
    IESLivePopupItem *_popupItem;
    IESLiveGuideToolBarItem *_settingEntryItem;
    IESLiveGuideSettingCellItem *_backtrackCellItem;
    IESLiveGuideSettingCellItem *_clarityItem;
    IESLiveGuideSettingCellItem *_payFunctionItem;
    IESLiveGuideSettingCellItem *_userCountItem;
    IESLiveGuideSettingCellItem *_cdnItem;
    long long _clarityItemIndex;
    long long _payFunctionItemIndex;
    long long _backtrackItemIndex;
    id<IESLiveAnchorPreferenceService> _preference;
    id<IESLiveAnchorRecordPreferenceService> _recordPreference;
    id<IESLiveAnchorGiftPreferenceService> _giftPreference;
    id<IESLiveAnchorCommentPreferenceService> _commentPreference;
    id<IESLiveAnchorSharePreferenceService> _sharePreference;
    id<IESLiveAnchorTimeSchedulePreference> _timeNoticePref;
    id<IESLiveAskExplainPreferenceService> _askExplainPreference;
    id<IESLiveAnchorBacktrackPreferenceService> _backtrackPreference;
    id<IESLiveAnchorDynamicClarityPreferenceService> _clarityPreference;
    id<IESLiveAnnouncementService> _announcementService;
    id<IESLiveVisibleScopePreferenceService> _visibleService;
    id<IESLiveDiggPreferenceService> _diggService;
    id<IESLiveAudioSubtitlePreferenceService> _subtitleService;
    id<IESLiveGuideToolBarProvider> _guideToolbarProvider;
    double _appearTime;
    id<IESLivePerfSampler> _perfSampler;
    id<IESLiveDouPlusMonitor> _douPlusMonitor;
    BDXBridgeEventSubscriber *_subscriber;
    NSDictionary *_pushInfoMap;
    PushStreamInfo *_pushInfo;
    NSDictionary *_VRPushInfoMap;
    PushStreamInfo *_VRPushInfo;
}

@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *announcementViewModel;
@property (retain, nonatomic) IESLiveOpenLivePermissionApi *permissionApi;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) IESLiveReplayViewModel *replayViewModel;
@property (retain, nonatomic) HTSLiveScreenChatSetting *screenChatSetting;
@property (retain, nonatomic) IESLivePrivilegeScreenChatApi *screenChatApi;
@property (retain, nonatomic) ChatSettingGetResponse_ResponseData *audioChatSettingModel;
@property (retain, nonatomic) ChatSettingGetResponse_ResponseData *audioChatSettingModelForShow;
@property (retain, nonatomic) IESLiveAudioChatSettingApi *audioChatSettingApi;
@property (retain, nonatomic) IESLiveUserProfileVisibleApi *userProfileVisibleApi;
@property (retain, nonatomic) IESLiveUpdateCreateInfoApi *updateCreateInfoApi;
@property (nonatomic) BOOL showedUserProfileRedDot;
@property (retain, nonatomic) IESLiveGuideSettingScrollPanelView *panelView;
@property (retain, nonatomic) IESLiveClarityChooseView *chooseView;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *panelVC;
@property (retain, nonatomic) IESLiveCDNSpeedTestView *cdnSpeedTestView;
@property (retain, nonatomic) IESLivePublicScreenSettingView *publicScreenSettingView;
@property (retain, nonatomic) IESLiveUploadBandwidthProberView *proberView;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveGuideToolBarItem *settingEntryItem;
@property (retain, nonatomic) IESLiveGuideSettingCellItem *backtrackCellItem;
@property (retain, nonatomic) IESLiveGuideSettingCellItem *clarityItem;
@property (retain, nonatomic) IESLiveGuideSettingCellItem *payFunctionItem;
@property (retain, nonatomic) IESLiveGuideSettingCellItem *userCountItem;
@property (retain, nonatomic) IESLiveGuideSettingCellItem *cdnItem;
@property (nonatomic) long long clarityItemIndex;
@property (nonatomic) long long payFunctionItemIndex;
@property (nonatomic) long long backtrackItemIndex;
@property (readonly, nonatomic) BOOL isToolbarItemAdded;
@property (nonatomic) BOOL didTimeNoticeBubbleShow;
@property (retain, nonatomic) id<IESLiveAnchorPreferenceService> preference;
@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> recordPreference;
@property (retain, nonatomic) id<IESLiveAnchorGiftPreferenceService> giftPreference;
@property (retain, nonatomic) id<IESLiveAnchorCommentPreferenceService> commentPreference;
@property (retain, nonatomic) id<IESLiveAnchorSharePreferenceService> sharePreference;
@property (retain, nonatomic) id<IESLiveAnchorTimeSchedulePreference> timeNoticePref;
@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> askExplainPreference;
@property (retain, nonatomic) id<IESLiveAnchorBacktrackPreferenceService> backtrackPreference;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) id<IESLiveAnnouncementService> announcementService;
@property (retain, nonatomic) id<IESLiveVisibleScopePreferenceService> visibleService;
@property (retain, nonatomic) id<IESLiveDiggPreferenceService> diggService;
@property (retain, nonatomic) id<IESLiveAudioSubtitlePreferenceService> subtitleService;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (nonatomic) double appearTime;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveDouPlusMonitor> douPlusMonitor;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) NSDictionary *pushInfoMap;
@property (retain, nonatomic) PushStreamInfo *pushInfo;
@property (copy, nonatomic) NSDictionary *VRPushInfoMap;
@property (retain, nonatomic) PushStreamInfo *VRPushInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pushInfo;
- (id)permissionModel;
- (void)setPermissionModel:(id)arg0;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (double)appearTime;
- (void)setAppearTime:(double)arg0;
- (id)panelVC;
- (void)setPanelVC:(id)arg0;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)setPushInfo:(id)arg0;
- (void)reloadPanel;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)openLiveModel;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (void)openLiveModelDidUpdate:(id)arg0;
- (id)announcementService;
- (void)setOpenLiveModel:(id)arg0;
- (void)setAnnouncementService:(id)arg0;
- (id)guideToolbarProvider;
- (void)setGuideToolbarProvider:(id)arg0;
- (void)p_showPanel:(id)arg0;
- (void)showSettingPanel;
- (id)chooseView;
- (void)setChooseView:(id)arg0;
- (void)switchVRLiveMode:(BOOL)arg0;
- (id)pushInfoMap;
- (void)setPushInfoMap:(id)arg0;
- (id)audioChatSettingApi;
- (void)setAudioChatSettingModel:(id)arg0;
- (id)audioChatSettingModel;
- (void)setAudioChatSettingModelForShow:(id)arg0;
- (BOOL)needShowItemOf:(unsigned long long)arg0;
- (id)screenChatApi;
- (void)setScreenChatSetting:(id)arg0;
- (id)audioChatSettingModelForShow;
- (id)recordPreference;
- (id)askExplainPreference;
- (id)commentPreference;
- (id)sharePreference;
- (void)trackAnchorInteractRightClick;
- (void)showVocalizationAuthoritySheet;
- (void)trackAnchorInteractRightShow;
- (id)screenChatSetting;
- (void)trackAnchorInteractRightLeave;
- (void)setVocalizationAuthorityStatusIfNeeded;
- (void)updateShowingAudioChatSettingModel:(id)arg0;
- (id)clarityPreference;
- (id)backtrackPreference;
- (void)setRecordPreference:(id)arg0;
- (void)setAskExplainPreference:(id)arg0;
- (void)setClarityPreference:(id)arg0;
- (void)setBacktrackPreference:(id)arg0;
- (void)setCommentPreference:(id)arg0;
- (void)setSharePreference:(id)arg0;
- (void)setAudioChatSettingApi:(id)arg0;
- (void)setScreenChatApi:(id)arg0;
- (void)showRoomIntroductionView;
- (id)giftPreference;
- (void)setGiftPreference:(id)arg0;
- (id)timeNoticePref;
- (void)setTimeNoticePref:(id)arg0;
- (void)openRecordGroupPreferencePanel;
- (void)anchorRecordPreferenceCellItem:(id)arg0 didChangeSwitchValue:(BOOL)arg1;
- (void)showClarifySheet;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (void)hideClarityChooseSheet;
- (void)clarityChooseView:(id)arg0 didSelectItems:(id)arg1;
- (void)hideSettingPanel;
- (id)clarityItem;
- (void)setClarityItem:(id)arg0;
- (id)permissionApi;
- (void)setPermissionApi:(id)arg0;
- (void)bottomPanelViewWillShow;
- (id)updateCreateInfoApi;
- (void)setUpdateCreateInfoApi:(id)arg0;
- (unsigned long long)liveTypeTransformWithLiveTabEnum:(int)arg0;
- (void)p_refreshEntry;
- (BOOL)p_privilegeDanmakuSettingEnabled;
- (id)diggService;
- (void)subscribeFansClubConfigUpdateMessage;
- (id)settingEntryItem;
- (id)roomIntroductionViewModel;
- (void)showRoomIntroductionSettingView:(id)arg0;
- (BOOL)didTimeNoticeBubbleShow;
- (void)p_triggerBubbleViewHide;
- (void)p_initializePanel;
- (id)announcementViewModel;
- (void)tr_trackCloseSettingPage;
- (id)stampPremissions;
- (BOOL)supportClarityRecommendKeyWithLiveType:(unsigned long long)arg0;
- (int)liveTypeEnumFromLiveType:(unsigned long long)arg0;
- (BOOL)p_needShowDynamicClarityEntry;
- (BOOL)p_needShowBacktrackEntry;
- (BOOL)p_needShowEntry;
- (void)p_removeSettingToolbarItem;
- (void)p_addSettingToolbarItem;
- (BOOL)isToolbarItemAdded;
- (BOOL)p_needShowBacktrackRedDot;
- (BOOL)showedUserProfileRedDot;
- (BOOL)p_needShowClarityRecommendRedDot;
- (id)generateSettingItems;
- (void)p_trackAnchorShowEntranceClick;
- (void)p_trackAnchorShowEntranceShow;
- (void)showPVchangeSheet;
- (void)setUserCountItem:(id)arg0;
- (void)showMediaRoomIntroSettingView:(id)arg0;
- (void)setClarityItemIndex:(long long)arg0;
- (BOOL)enableUploadBandwidthProber;
- (void)showUploadBandwidthProberClarifySheet;
- (void)setCdnItem:(id)arg0;
- (id)cdnItem;
- (void)showCDNOptimizeSheet;
- (void)showPublicScreenSettingView;
- (long long)clarityItemIndex;
- (void)showAnnouncementSettingView:(id)arg0;
- (void)p_trackAnchorActivityDeclarationClick;
- (void)p_trackAnchorActivityDeclarationShow;
- (id)replayViewModel;
- (id)subtitleService;
- (void)setBacktrackCellItem:(id)arg0;
- (void)setBacktrackItemIndex:(long long)arg0;
- (id)backtrackCellItem;
- (long long)backtrackItemIndex;
- (id)payFunctionItem;
- (id)p_payFunctionItemTitle;
- (long long)payFunctionItemIndex;
- (void)showPayfunctionSheet;
- (void)setPayFunctionItem:(id)arg0;
- (void)setPayFunctionItemIndex:(long long)arg0;
- (void)setShowedUserProfileRedDot:(BOOL)arg0;
- (id)userProfileVisibleApi;
- (id)publicScreenSettingView;
- (id)visibleService;
- (void)pr_showVisibleScope:(unsigned long long)arg0 selectedBlock:(id /* block */)arg1;
- (void)setProberView:(id)arg0;
- (id)proberView;
- (id)userCountItem;
- (void)setCdnSpeedTestView:(id)arg0;
- (id)cdnSpeedTestView;
- (void)showKeepOpenProductReplaySwitchConfirmation;
- (void)setVRPushInfoMap:(id)arg0;
- (void)setVRPushInfo:(id)arg0;
- (unsigned long long)typeFromResponseType:(int)arg0;
- (id)VRPushInfoMap;
- (id)VRPushInfo;
- (void)uploadBandwidthProberView:(id)arg0 idSelectItems:(id)arg1;
- (void)hideUploadBandwidthProberView;
- (id)douPlusMonitor;
- (BOOL)p_isViewVisible:(id)arg0;
- (void)showVisibleScope:(unsigned long long)arg0;
- (void)setAnnouncementViewModel:(id)arg0;
- (void)setReplayViewModel:(id)arg0;
- (void)setUserProfileVisibleApi:(id)arg0;
- (void)setPublicScreenSettingView:(id)arg0;
- (void)setSettingEntryItem:(id)arg0;
- (void)setDidTimeNoticeBubbleShow:(BOOL)arg0;
- (void)setVisibleService:(id)arg0;
- (void)setDiggService:(id)arg0;
- (void)setSubtitleService:(id)arg0;
- (void)setDouPlusMonitor:(id)arg0;
- (void).cxx_destruct;
- (id)containerView;
- (id)subscriber;
- (void)setPreference:(id)arg0;
- (id)preference;
- (void)setSubscriber:(id)arg0;

@end