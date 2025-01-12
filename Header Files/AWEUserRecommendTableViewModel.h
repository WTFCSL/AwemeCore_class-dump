//
//     Generated by private class-dump
//

@class AWEUserRecommendTableDataSource, NSArray, NSString, NSSet, AFDSnackBar, AWEBinding, AFDBusinessFrequencyExitRule, AFDPrivacyMapContext, AWEAlertManager, AWEUserRecommendManagerContext, NSObject;
@protocol AWEUserRecommendTableViewModelDelegate, AWEUserRecommendCardTrackManagerProtocol;

@interface AWEUserRecommendTableViewModel : NSObject <AWEUserMessage, AWEUserActionRevertMessage, AWEUserRecommendTableViewModelMessage, AWEUserRecommendTableDataSourceDelegate, AWEUserRecommendTableViewModelProtocol> {
    id<AWEUserRecommendTableViewModelDelegate> _delegate;
    NSObject<AWEUserRecommendCardTrackManagerProtocol> *_tracker;
    AWEUserRecommendTableDataSource *_dataSource;
    AWEUserRecommendManagerContext *_context;
    long long _dataState;
    NSArray *_duplicatedUserIDs;
    long long _newRecommendCount;
    AFDPrivacyMapContext *_privacyMapContext;
    AWEBinding *_dataStateBinding;
    AFDSnackBar *_dislikeSnackBar;
    AWEAlertManager *_alertManager;
    AFDBusinessFrequencyExitRule *_frequencyExitRule;
    long long _preloadIndex;
}

@property (nonatomic) long long newRecommendCount;
@property (retain, nonatomic) AFDPrivacyMapContext *privacyMapContext;
@property (copy, nonatomic) AWEUserRecommendManagerContext *context;
@property (nonatomic) long long dataState;
@property (retain, nonatomic) AWEUserRecommendTableDataSource *dataSource;
@property (retain, nonatomic) AWEBinding *dataStateBinding;
@property (weak, nonatomic) AFDSnackBar *dislikeSnackBar;
@property (retain, nonatomic) AWEAlertManager *alertManager;
@property (retain, nonatomic) AFDBusinessFrequencyExitRule *frequencyExitRule;
@property (nonatomic) long long preloadIndex;
@property (weak, nonatomic) id<AWEUserRecommendTableViewModelDelegate> delegate;
@property (retain, nonatomic) NSObject<AWEUserRecommendCardTrackManagerProtocol> *tracker;
@property (readonly) BOOL isFromHighValueUserSource;
@property (nonatomic) BOOL wasRecommendClosed;
@property (copy, nonatomic) NSArray *duplicatedUserIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *models;
@property (copy, nonatomic) NSSet *userIDsToFilter;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishApproveUserFollowRequest:(id)arg0 error:(id)arg1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)arg0 user:(id)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)willDislikeUserWithContext:(id)arg0;
- (void)setDataState:(long long)arg0;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)setUserIDsToFilter:(id)arg0 filterExisting:(BOOL)arg1;
- (BOOL)hasMoreRecommendData;
- (void)receiveUserRevertAction:(id)arg0;
- (void)followUser:(id)arg0 completion:(id /* block */)arg1;
- (void)unfollowUser:(id)arg0 completion:(id /* block */)arg1;
- (void)p_showSocialSnackBar:(id)arg0;
- (id)p_storageKeyWithID:(id)arg0;
- (long long)newRecommendCount;
- (void)transferToProfileForUser:(id)arg0 enterMethod:(id)arg1 extraRouterParams:(id)arg2;
- (void)dislikeUser:(id)arg0;
- (BOOL)canLightInteractUser:(id)arg0;
- (void)lightInteractUser:(id)arg0 followButton:(id)arg1 avatarView:(id)arg2 cellView:(id)arg3;
- (void)impressionLightInteractUser:(id)arg0;
- (id)lightInteractTitleForUser:(id)arg0;
- (id)lightInteractIcon;
- (void)setInsertedTopUIDs:(id)arg0;
- (void)unhighlightNewUsers;
- (void)p_onPersonalRecommendChanged:(id)arg0;
- (void)applyDataSourceSnapshot:(id)arg0;
- (void)setUserIDsToFilter:(id)arg0;
- (BOOL)shouldShowRecommend;
- (BOOL)isFromHighValueUserSource;
- (id)p_profileURLParamsForUser:(id)arg0 enterMethod:(id)arg1;
- (void)monitorAvatarLoadForUser:(id)arg0 success:(BOOL)arg1;
- (BOOL)canSendMessageWithUser:(id)arg0;
- (void)enterIMChatWithUser:(id)arg0;
- (void)clickContacts;
- (void)approveRequest:(id)arg0 completion:(id /* block */)arg1;
- (id)followStateMachineForUser:(id)arg0 avatarView:(id)arg1 cellView:(id)arg2;
- (long long)preparePrivacyUser:(id)arg0 filterBlock:(id /* block */)arg1;
- (void)impressionUser:(id)arg0;
- (void)impressionContacts;
- (void)transferToPrivacyReminderPage;
- (void)refreshWithBDNetworkTagContext:(id)arg0 completion:(id /* block */)arg1;
- (void)showEditAliasAlertForUser:(id)arg0;
- (void)setAliasForUser:(id)arg0 alias:(id)arg1 completion:(id /* block */)arg2;
- (void)impressionShareWechat;
- (void)impressionShareQQ;
- (void)clickShareWechat;
- (void)clickShareQQ;
- (void)removeContacts;
- (void)removeShareWechat;
- (void)removeShareQQ;
- (void)impressionCampaignModel:(id)arg0;
- (void)clickCampaignModel:(id)arg0;
- (void)removeCampaignModel:(id)arg0;
- (id)dataStateBinding;
- (void)setDataStateBinding:(id)arg0;
- (BOOL)wasRecentlyOrPermanentlyClosed;
- (void)closeUserRecommend;
- (BOOL)canIncentiveChatUser:(id)arg0;
- (id)incentiveChatTitleForUser:(id)arg0;
- (BOOL)incentiveChatUserButtonState:(id)arg0;
- (void)clickIncentiveChatButtonWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)preloadMoreIfNeededAtIndex:(long long)arg0;
- (BOOL)wasRecommendClosed;
- (id)userIDsToFilter;
- (void)dataSourceWillRefresh:(id)arg0;
- (void)dataSourceDidRefresh:(id)arg0 models:(id)arg1 error:(id)arg2;
- (void)dataSourceWillLoadMore:(id)arg0;
- (void)dataSourceDidLoadMore:(id)arg0 models:(id)arg1 error:(id)arg2;
- (void)dataSource:(id)arg0 didFilterModels:(id)arg1;
- (void)updateCountToPermanentlyClose:(long long)arg0 daysToReappearAfterClosed:(long long)arg1;
- (void)setPrivacyMapContext:(id)arg0;
- (id)privacyMapContext;
- (void)p_configureFollowFromPageType;
- (void)tableViewModel:(id)arg0 didRemoveModel:(id)arg1;
- (void)setWasRecommendClosed:(BOOL)arg0;
- (void)p_followUser:(id)arg0 completion:(id /* block */)arg1;
- (id)p_relationContextForUser:(id)arg0;
- (void)p_finishFollowForUser:(id)arg0 response:(id)arg1 error:(id)arg2 topVCBeforeFollowing:(id)arg3;
- (void)p_updateFollowStatusForUserID:(id)arg0 followStatus:(long long)arg1;
- (void)p_removeUserForUserID:(id)arg0;
- (void)p_removeContactsModel;
- (void)p_didRemoveCellType:(long long)arg0;
- (id)dislikeSnackBar;
- (void)p_updateCloseDateAndCount;
- (BOOL)p_wasPermanentlyClosedWithMaxCount:(int)arg0;
- (BOOL)p_wasRecentlyClosedWithReappearDays:(double)arg0;
- (long long)preloadIndex;
- (void)setPreloadIndex:(long long)arg0;
- (void)p_preloadAwemeList;
- (id)p_removeModelAtIndex:(long long)arg0;
- (BOOL)p_canInsertContacts;
- (BOOL)p_canInsertShareWechat;
- (BOOL)p_canInsertShareQQ;
- (BOOL)p_isCellTypeRemoved:(long long)arg0;
- (BOOL)p_canInsertCampaignModel:(id)arg0;
- (BOOL)p_hasRemovedCampaignModel:(id)arg0;
- (BOOL)p_hasClickedCampaignModel:(id)arg0;
- (BOOL)p_hasImpressionedCampaignModel:(id)arg0;
- (id)p_unfollowStateForUser:(id)arg0;
- (id)p_followedStateForUser:(id)arg0;
- (id)p_lightInteractionContextWithUser:(id)arg0 avatarView:(id)arg1 cellView:(id)arg2;
- (void)p_accessibilityAnnounceUser:(id)arg0;
- (id)frequencyExitRule;
- (id)p_closeDateKey;
- (id)p_closeCountKey;
- (BOOL)p_isCellTypePermanentlyRemoved:(long long)arg0;
- (id)p_lastRemoveDateForCellType:(long long)arg0;
- (void)setDislikeSnackBar:(id)arg0;
- (id)p_greetAfterFollowContextForUser:(id)arg0;
- (void)p_updateAliasForUserID:(id)arg0 alias:(id)arg1;
- (void)p_updateFollowerStatusForUserID:(id)arg0 followerStatus:(long long)arg1;
- (void)p_approveFollowRequestForUserID:(id)arg0 error:(id)arg1;
- (void)p_insertCampaignModelsToDataSource:(id)arg0;
- (void)p_insertExtraModelsToDataSource:(id)arg0 isAfterRefresh:(BOOL)arg1;
- (void)insertRecommendUser:(id)arg0 index:(long long)arg1;
- (id)p_newCloseKey;
- (void)rejectUserFollowRequest:(id)arg0 completion:(id /* block */)arg1;
- (id)duplicatedUserIDs;
- (void)setDuplicatedUserIDs:(id)arg0;
- (void)setNewRecommendCount:(long long)arg0;
- (void)setFrequencyExitRule:(id)arg0;
- (id)dataSourceSnapshot;
- (id)initWithContext:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)removeUser:(id)arg0;
- (void)setContext:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)models;
- (id)delegate;
- (id)context;
- (void)setAlertManager:(id)arg0;
- (void)clear;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)alertManager;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)dataState;

@end
