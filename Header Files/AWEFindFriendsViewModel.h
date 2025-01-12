//
//     Generated by private class-dump
//

@class AWEFindFriendsSearchSectionViewModel, NSString, AWEFindFriendsBigContactSectionViewModel, AWEBaseListSectionViewModel, AWEFindFriendsUnfoldInviteSectionViewModel, NSObject, AWEFindFriendsEmptySectionViewModel, AWEUserRecommendPerformanceMeasureTask, AWEFindFriendsErrorSectionViewModel, AWEFindFriendsTopIconSectionViewModel;
@protocol OS_dispatch_queue, AWEUserRecommendSectionViewModelProtocol;

@interface AWEFindFriendsViewModel : AWEBaseListViewModel <AWEFindFriendsUnfoldInviteSectionViewModelProtocol> {
    BOOL _hasAction;
    BOOL _needShowContactBubble;
    BOOL _hasUploadedAddressBook;
    BOOL _hasMore;
    BOOL _viewHasAppeared;
    BOOL _useNewRecommendCount;
    BOOL _scrollEnabled;
    BOOL _hasCheckNewFriends;
    NSString *_enterFrom;
    NSString *_previousPage;
    NSString *_enterType;
    unsigned long long _exceptionType;
    NSString *_insertedTopUIDs;
    NSString *_userID;
    unsigned long long _singleEnterFollowedCount;
    NSObject<OS_dispatch_queue> *_queue;
    AWEFindFriendsSearchSectionViewModel *_searchFriendsSectionViewModel;
    AWEFindFriendsUnfoldInviteSectionViewModel *_unfoldAddFriendsSectionViewModel;
    AWEFindFriendsErrorSectionViewModel *_errorSectionViewModel;
    AWEFindFriendsEmptySectionViewModel *_emptySectionViewModel;
    AWEFindFriendsTopIconSectionViewModel *_topIconSectionViewModel;
    AWEFindFriendsBigContactSectionViewModel *_bigContactSectionViewModel;
    AWEBaseListSectionViewModel<AWEUserRecommendSectionViewModelProtocol> *_userRecommendSectionViewModel;
    AWEBaseListSectionViewModel *_goldCoinContactsSectionViewModel;
    AWEUserRecommendPerformanceMeasureTask *_refreshPerformanceTask;
    AWEUserRecommendPerformanceMeasureTask *_loadMorePerformanceTask;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) unsigned long long exceptionType;
@property (nonatomic) BOOL needShowContactBubble;
@property (nonatomic) BOOL hasUploadedAddressBook;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterType;
@property (nonatomic) BOOL hasCheckNewFriends;
@property (nonatomic) unsigned long long singleEnterFollowedCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEFindFriendsSearchSectionViewModel *searchFriendsSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsUnfoldInviteSectionViewModel *unfoldAddFriendsSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsErrorSectionViewModel *errorSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsEmptySectionViewModel *emptySectionViewModel;
@property (retain, nonatomic) AWEFindFriendsTopIconSectionViewModel *topIconSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsBigContactSectionViewModel *bigContactSectionViewModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel<AWEUserRecommendSectionViewModelProtocol> *userRecommendSectionViewModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel *goldCoinContactsSectionViewModel;
@property (retain, nonatomic) AWEUserRecommendPerformanceMeasureTask *refreshPerformanceTask;
@property (retain, nonatomic) AWEUserRecommendPerformanceMeasureTask *loadMorePerformanceTask;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL useNewRecommendCount;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEUserRecommendModuleServiceDOUYINLiteAdaperClass;

- (void)setEnterFrom:(id)arg0;
- (void)setupViewModel;
- (id)enterFrom;
- (void)setExceptionType:(unsigned long long)arg0;
- (id)emptySectionViewModel;
- (void)setupBinding;
- (void)fetchListData:(id /* block */)arg0;
- (id)userRecommendSectionViewModel;
- (void)setUserRecommendSectionViewModel:(id)arg0;
- (void)setRefreshPerformanceTask:(id)arg0;
- (void)setLoadMorePerformanceTask:(id)arg0;
- (id)loadMorePerformanceTask;
- (id)refreshPerformanceTask;
- (id)aAWEUserProfileModuleServiceDOUYINLiteAdaper;
- (BOOL)needShowContactBubble;
- (void)setNeedShowContactBubble:(BOOL)arg0;
- (BOOL)hasUploadedAddressBook;
- (void)setHasUploadedAddressBook:(BOOL)arg0;
- (id)insertedTopUIDs;
- (void)setInsertedTopUIDs:(id)arg0;
- (void)setEmptySectionViewModel:(id)arg0;
- (void)removeUnfoldInviteCellWithModel:(id)arg0;
- (void)refreshInviteSection;
- (void)checkShouldShowUploadAddressBook;
- (void)trackListDismissedBeforeAppear;
- (id)aAWEUserRecommendModuleServiceDOUYINLiteAdaper;
- (void)setUseNewRecommendCount:(BOOL)arg0;
- (BOOL)useNewRecommendCount;
- (void)didScrollList;
- (void)trackClickProfileTipURL;
- (void)setSearchFriendsSectionViewModel:(id)arg0;
- (void)setUnfoldAddFriendsSectionViewModel:(id)arg0;
- (id)unfoldAddFriendsSectionViewModel;
- (id)p_recommendManagerContext;
- (void)setErrorSectionViewModel:(id)arg0;
- (void)setTopIconSectionViewModel:(id)arg0;
- (id)topIconSectionViewModel;
- (id)searchFriendsSectionViewModel;
- (void)setBigContactSectionViewModel:(id)arg0;
- (id)goldCoinContactsSectionViewModel;
- (void)setGoldCoinContactsSectionViewModel:(id)arg0;
- (void)p_updateExceptionType;
- (void)constructSectionArray:(unsigned long long)arg0 updateThirdParty:(BOOL)arg1;
- (BOOL)p_useCellPlaceholder;
- (id)bigContactSectionViewModel;
- (id)errorSectionViewModel;
- (id)unfoldInviteArray:(BOOL)arg0;
- (BOOL)enablePrivacyReminder;
- (BOOL)hasCheckNewFriends;
- (void)setHasCheckNewFriends:(BOOL)arg0;
- (unsigned long long)singleEnterFollowedCount;
- (void)setSingleEnterFollowedCount:(unsigned long long)arg0;
- (id)userID;
- (void)setScrollEnabled:(BOOL)arg0;
- (BOOL)scrollEnabled;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (unsigned long long)exceptionType;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (BOOL)hasAction;
- (void)setHasAction:(BOOL)arg0;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:(BOOL)arg0;
- (id)enterType;
- (void)setEnterType:(id)arg0;

@end
