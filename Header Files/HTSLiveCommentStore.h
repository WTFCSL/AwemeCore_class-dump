//
//     Generated by private class-dump
//

@class NSDate, HTSLiveLandscapeAreaCommon, IESLiveCommentExpandEntryItem, IESLiveCommentAuthChecker, NSObject, HTSLiveCommentApi, GetSilenceBlockTypeResponse_ResponseData, IESLiveCommentPanelEntryItemModel, HTSLiveUser, NSString, NSMutableArray, HTSEventContext, HTSLiveFixedChatSyncData;
@protocol IESLiveCustomConfig, HTSLiveCommentReactions, IESLiveVerifyConfig, OS_dispatch_source, IESLiveRoomService;

@interface HTSLiveCommentStore : NSObject <IESLiveUserActions, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLiveLimitCommentPannelAction> {
    BOOL _iamAudience;
    BOOL _isForbidden;
    BOOL _disableComment;
    BOOL _disableInputComment;
    BOOL _disableDanmaku;
    BOOL _isChatChannel;
    BOOL _commentInterflowOpened;
    BOOL _isBanned;
    BOOL _disableCommentByWrds;
    HTSLiveFixedChatSyncData *_limitData;
    id<HTSLiveCommentReactions> _reactions;
    id<IESLiveRoomService> _roomModel;
    HTSLiveCommentApi *_commentApi;
    HTSLiveUser *_currentUser;
    HTSEventContext *_trackContext;
    NSMutableArray *_quickCommentContents;
    NSString *_disableInputCommentHint;
    NSString *_disableInputCommentToast;
    unsigned long long _quickCommentType;
    NSString *_quickCommentColor;
    HTSLiveLandscapeAreaCommon *_landscapeAreaCommon;
    unsigned long long _commentSuggestionViewShowDuration;
    NSString *_commentButtonTitle;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_startWatchDate;
    id<IESLiveVerifyConfig> _verifyConfig;
    id<IESLiveCustomConfig> _customConfig;
    IESLiveCommentAuthChecker *_authChecker;
    IESLiveCommentPanelEntryItemModel *_customServiceEntryModel;
    IESLiveCommentExpandEntryItem *_customServiceEntryItem;
    GetSilenceBlockTypeResponse_ResponseData *_silenceBlockData;
    double _lastSilenceBlockTime;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *startWatchDate;
@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) BOOL isBanned;
@property (nonatomic) BOOL disableCommentByWrds;
@property (retain, nonatomic) IESLiveCommentAuthChecker *authChecker;
@property (retain, nonatomic) IESLiveCommentPanelEntryItemModel *customServiceEntryModel;
@property (retain, nonatomic) IESLiveCommentExpandEntryItem *customServiceEntryItem;
@property (retain, nonatomic) GetSilenceBlockTypeResponse_ResponseData *silenceBlockData;
@property (nonatomic) double lastSilenceBlockTime;
@property (weak, nonatomic) id<HTSLiveCommentReactions> reactions;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveCommentApi *commentApi;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) BOOL iamAudience;
@property (nonatomic) BOOL isForbidden;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableInputComment;
@property (nonatomic) BOOL disableDanmaku;
@property (nonatomic) BOOL isChatChannel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableArray *quickCommentContents;
@property (retain, nonatomic) NSString *disableInputCommentHint;
@property (retain, nonatomic) NSString *disableInputCommentToast;
@property (nonatomic) unsigned long long quickCommentType;
@property (retain, nonatomic) NSString *quickCommentColor;
@property (retain, nonatomic) HTSLiveLandscapeAreaCommon *landscapeAreaCommon;
@property (nonatomic) unsigned long long commentSuggestionViewShowDuration;
@property (readonly, nonatomic) BOOL isInMseqRoom;
@property (nonatomic) BOOL commentInterflowOpened;
@property (copy, nonatomic) NSString *commentButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitData;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)showToast:(id)arg0;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)badgeImageListV2Array;
- (BOOL)disableComment;
- (BOOL)isBanned;
- (void)setIsBanned:(BOOL)arg0;
- (void)setRoomModel:(id)arg0;
- (BOOL)isForbidden;
- (BOOL)disableDanmaku;
- (void)setDisableDanmaku:(BOOL)arg0;
- (unsigned long long)quickCommentType;
- (void)setQuickCommentType:(unsigned long long)arg0;
- (void)setDisableComment:(BOOL)arg0;
- (void)userDidLogin:(id)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (id)authChecker;
- (void)setAuthChecker:(id)arg0;
- (void)didUpdateRoom:(id)arg0;
- (void)fetchAudioChatCodeFinished:(id /* block */)arg0;
- (void)fetchSilenceBlockInfoWithCompletion:(id /* block */)arg0;
- (BOOL)commentForbidden;
- (BOOL)commentPrepared;
- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (void)setIamAudience:(BOOL)arg0;
- (void)checkIfDisableComment;
- (BOOL)checkIfCommentEnableWithContext:(id)arg0 completion:(id /* block */)arg1;
- (id)quickCommentContents;
- (void)sendChannelCommentWithCommentContext:(id)arg0 completion:(id /* block */)arg1;
- (id)quickCommentColor;
- (void)setQuickCommentColor:(id)arg0;
- (id)disableInputCommentToast;
- (void)sendCommentWithCommentContext:(id)arg0 completion:(id /* block */)arg1;
- (void)sendBarrageWithCommentContext:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsChatChannel:(BOOL)arg0;
- (BOOL)isChatChannel;
- (void)traceChatChannelCommentWithStatusCode:(id)arg0 commentType:(unsigned long long)arg1 startTime:(double)arg2;
- (id)verifyConfig;
- (BOOL)iamAudience;
- (BOOL)commentInterflowOpened;
- (void)setVerifyConfig:(id)arg0;
- (void)setIsForbidden:(BOOL)arg0;
- (id)limitData;
- (void)setLimitData:(id)arg0;
- (void)setQuickCommentContents:(id)arg0;
- (id)commentApi;
- (BOOL)bindMobilePhoneIfNeededForSY:(id)arg0 source:(id)arg1;
- (id)createFakeEmojiChatMessageWith:(id)arg0;
- (id)createFakeChatMessageWithComment:(id)arg0 commentContext:(id)arg1 response:(id)arg2;
- (id)landscapeAreaCommon;
- (void)trackSendCommentWithCommentContext:(id)arg0 msgID:(unsigned long long)arg1 comment:(id)arg2 type:(unsigned long long)arg3 isStarComment:(BOOL)arg4;
- (id)createFakeChannelMessageWithCommentContext:(id)arg0 comment:(id)arg1 channelID:(id)arg2 type:(unsigned long long)arg3 response:(id)arg4;
- (void)trackSendChannelCommentWithCommentContext:(id)arg0 msgID:(unsigned long long)arg1 comment:(id)arg2 type:(unsigned long long)arg3;
- (id)contentTypeWithCommentContext:(id)arg0 type:(unsigned long long)arg1;
- (BOOL)isInMseqRoom;
- (void)sendAdminDanmakuWithCommentContext:(id)arg0 completion:(id /* block */)arg1;
- (void)sendPrivilegeDanmakuWithCommentContext:(id)arg0 completion:(id /* block */)arg1;
- (id)createFakeScreenChatMessageWith:(id)arg0;
- (void)monitorPrivilegeDanmakuSendWithStyle:(long long)arg0 duration:(double)arg1 error:(id)arg2;
- (id)createFakePrivilegeScreenChatMessageWithContext:(id)arg0 content:(id)arg1 style:(int)arg2 sendResponse:(id)arg3;
- (BOOL)disableCommentByWrds;
- (void)setDisableInputComment:(BOOL)arg0;
- (BOOL)shouldDisableDanmaku;
- (void)checkIfDisableInputComment;
- (void)checkIfDisableDanmaku;
- (void)setCommentInterflowOpened:(BOOL)arg0;
- (void)handleQuickCommentWithData:(id)arg0;
- (void)handleInputPanelComponentWithData:(id)arg0;
- (void)handleQuickLimitCommentWithData:(id)arg0;
- (void)setDisableInputCommentHint:(id)arg0;
- (void)setDisableInputCommentToast:(id)arg0;
- (void)setDisableCommentByWrds:(BOOL)arg0;
- (void)randomHotCommentFromData:(id)arg0;
- (void)updateCustomServiceEntryModelWith:(id)arg0;
- (void)checkIfRegistCustomServiceEntryItem;
- (id)customServiceEntryItem;
- (void)setCustomServiceEntryItem:(id)arg0;
- (id)customServiceEntryModel;
- (void)customServiceEntryHasClicked;
- (void)customServiceEntryHasShowed;
- (void)trackCustomServiceEntryWithClicked:(BOOL)arg0;
- (void)setCustomServiceEntryModel:(id)arg0;
- (id)silenceBlockData;
- (double)lastSilenceBlockTime;
- (void)setLastSilenceBlockTime:(double)arg0;
- (void)setSilenceBlockData:(id)arg0;
- (void)addUserIdentityTo:(id)arg0 withShowIdentity:(long long)arg1 andIdentityLabel:(id)arg2;
- (id)createFakeChatMessageWithComment:(id)arg0 replayAndPinMessageId:(id)arg1 response:(id)arg2;
- (void)setLandscapeAreaCommon:(id)arg0;
- (id)createFakeChannelChatMessageWithCommentContext:(id)arg0 comment:(id)arg1 channelID:(id)arg2 response:(id)arg3;
- (id)createFakeChannelEmojiChatMessageWithChannelID:(id)arg0 response:(id)arg1;
- (id)createFakeChannelInteractiveEmojiChatMessageWithChannelID:(id)arg0 response:(id)arg1;
- (BOOL)shouldShowLimitPannel;
- (void)trackLandscapeDanmakuEntryClickShow:(BOOL)arg0;
- (void)trackCommentSettingShow;
- (void)trackCommentSettingClick;
- (void)setCommentApi:(id)arg0;
- (BOOL)disableInputComment;
- (id)disableInputCommentHint;
- (unsigned long long)commentSuggestionViewShowDuration;
- (void)setCommentSuggestionViewShowDuration:(unsigned long long)arg0;
- (id)commentButtonTitle;
- (void)setCommentButtonTitle:(id)arg0;
- (id)startWatchDate;
- (void)setStartWatchDate:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setup;
- (void)setTimer:(id)arg0;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (id)reactions;
- (void)setReactions:(id)arg0;
- (id)requestParams;

@end