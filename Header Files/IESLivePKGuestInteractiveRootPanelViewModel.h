//
//     Generated by private class-dump
//

@class IESLiveCombineSubject, NSArray, NSString, HTSLiveInteractiveAPI, NSDictionary, NSMutableArray, IESLivePKGuestWaitingListService, NSNumber, IESLiveWaitingListUser;
@protocol IESLiveRoomServiceAdapter, IESLivePKGuestDynamicActivityProvider;

@interface IESLivePKGuestInteractiveRootPanelViewModel : NSObject <IESLiveInteractiveLinkServiceDelegate> {
    BOOL _isInAlternateMode;
    BOOL _isDelayLoadingWaitingList;
    IESLivePKGuestWaitingListService *_waitingListService;
    NSMutableArray *_waitingList;
    IESLiveWaitingListUser *_waitingUser;
    NSMutableArray *_invitableList;
    id<IESLivePKGuestDynamicActivityProvider> _activityProvider;
    IESLiveCombineSubject *_anchorInviteListChangedSignal;
    NSArray *_anchorInviteAudienceList;
    NSArray *_anchorInviteFriendList;
    NSArray *_inviteInterestedList;
    NSString *_emptyViewNotice;
    NSArray *_inviteFriendsList;
    NSString *_applyTitle;
    NSDictionary *_waitingListHeightDic;
    id<IESLiveRoomServiceAdapter> _roomModel;
    NSArray *_anchorInviteList;
    HTSLiveInteractiveAPI *_linkmicAPI;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) NSMutableArray *invitableList;
@property (copy, nonatomic) NSArray *anchorInviteList;
@property (copy, nonatomic) NSArray *anchorInviteAudienceList;
@property (copy, nonatomic) NSArray *anchorInviteFriendList;
@property (copy, nonatomic) NSArray *inviteInterestedList;
@property (retain, nonatomic) IESLivePKGuestWaitingListService *waitingListService;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (retain, nonatomic) IESLiveCombineSubject *anchorInviteListChangedSignal;
@property (nonatomic) BOOL isDelayLoadingWaitingList;
@property (readonly, nonatomic) long long waitingListTotalCount;
@property (readonly, nonatomic) int waitingListSortStrategy;
@property (readonly, nonatomic) NSNumber *serverTime;
@property (readonly, nonatomic) BOOL enableApplyListLoadMore;
@property (retain, nonatomic) id<IESLivePKGuestDynamicActivityProvider> activityProvider;
@property (nonatomic) BOOL isInAlternateMode;
@property (readonly, nonatomic) BOOL isInviteOnly;
@property (copy, nonatomic) NSString *emptyViewNotice;
@property (copy, nonatomic) NSArray *inviteFriendsList;
@property (readonly, copy, nonatomic) NSString *applyTitle;
@property (copy, nonatomic) NSDictionary *waitingListHeightDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)setRoomModel:(id)arg0;
- (id)waitingList;
- (void)onReceivedWatingListChangeMessage:(id)arg0;
- (void)onReceivedLinkWatingListChangeMessage:(id)arg0;
- (void)onReceivedLinkLeaveMessage:(id)arg0;
- (void)getInviteFriendsList:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)isFirstInit;
- (id)waitingUser;
- (void)refreshWaitingListWithCompletion:(id /* block */)arg0;
- (void)setWaitingUser:(id)arg0;
- (int)waitingListSortStrategy;
- (void)loadMoreWaitingListWithCompletion:(id /* block */)arg0;
- (void)setWaitingList:(id)arg0;
- (id)waitingListService;
- (id)anchorInviteFriendList;
- (id)anchorInviteAudienceList;
- (void)refreshInteractiveListInStatus:(int)arg0 withType:(unsigned long long)arg1 requestSource:(id)arg2;
- (void)fetchInteractiveAnchorInviteListWithType:(unsigned long long)arg0;
- (void)searchInvitableListWithQuery:(id)arg0;
- (void)removeInvitableList;
- (void)updateWaitingListSortType:(id /* block */)arg0;
- (id)inviteFriendsList;
- (id)invitableList;
- (id)anchorInviteListChangedSignal;
- (id)emptyViewNotice;
- (BOOL)isInAlternateMode;
- (BOOL)enableApplyListLoadMore;
- (BOOL)isInviteOnly;
- (id)waitingListHeightDic;
- (long long)waitingListTotalCount;
- (void)setWaitingListHeightDic:(id)arg0;
- (void)updateWaitingListOnListChange:(id)arg0;
- (BOOL)isDelayLoadingWaitingList;
- (void)setIsDelayLoadingWaitingList:(BOOL)arg0;
- (void)removeWaitingModelWithUid:(id)arg0;
- (id)linkmicAPI;
- (void)classifyInterativeList:(id)arg0 status:(int)arg1 withType:(unsigned long long)arg2;
- (void)setInvitableList:(id)arg0;
- (void)setAnchorInviteList:(id)arg0;
- (void)setAnchorInviteAudienceList:(id)arg0;
- (void)setAnchorInviteFriendList:(id)arg0;
- (void)setInviteInterestedList:(id)arg0;
- (void)removeWaitingUsersWithActiveUsers:(id)arg0;
- (void)updateInvitableList:(id)arg0;
- (void)setEmptyViewNotice:(id)arg0;
- (void)setInviteFriendsList:(id)arg0;
- (void)setWaitingListService:(id)arg0;
- (void)setAnchorInviteListChangedSignal:(id)arg0;
- (id)inviteInterestedList;
- (void)setIsInAlternateMode:(BOOL)arg0;
- (id)applyTitle;
- (id)anchorInviteList;
- (void)setLinkmicAPI:(id)arg0;
- (id)serverTime;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg0;
- (id)activityProvider;
- (void)setActivityProvider:(id)arg0;

@end
