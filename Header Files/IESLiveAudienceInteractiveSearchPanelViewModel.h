//
//     Generated by private class-dump
//

@class NSString, IESLiveAudienceInteractiveRootPanel, NSMutableSet, HTSEventContext, NSMutableArray, IESLiveInteractiveSearchAPI;
@protocol IESLiveAudienceInteractiveRootPanelUserService, IESLiveAudienceInteractiveRootPanelDelegate;

@interface IESLiveAudienceInteractiveSearchPanelViewModel : NSObject {
    BOOL _processingSearch;
    BOOL _hasMore;
    BOOL _needUpdateResult;
    long long _status;
    NSMutableArray *_userArray;
    IESLiveInteractiveSearchAPI *_api;
    NSString *_lastSearchString;
    long long _page;
    NSString *_wordNeededUpdate;
    NSMutableSet *_uidSet;
    id<IESLiveAudienceInteractiveRootPanelDelegate> _delegate;
    IESLiveAudienceInteractiveRootPanel *_view;
    id<IESLiveAudienceInteractiveRootPanelUserService> _rootPanelUserService;
    HTSEventContext *_eventContext;
    NSString *_requestPage;
}

@property (retain, nonatomic) IESLiveInteractiveSearchAPI *api;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *lastSearchString;
@property (nonatomic) long long page;
@property (nonatomic) BOOL processingSearch;
@property (nonatomic) BOOL needUpdateResult;
@property (copy, nonatomic) NSString *wordNeededUpdate;
@property (retain, nonatomic) NSMutableSet *uidSet;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelDelegate> delegate;
@property (weak, nonatomic) IESLiveAudienceInteractiveRootPanel *view;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> rootPanelUserService;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *requestPage;
@property (retain, nonatomic) NSMutableArray *userArray;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setEventContext:(id)arg0;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (id)userArray;
- (void)setUserArray:(id)arg0;
- (id)rootPanelUserService;
- (void)setRootPanelUserService:(id)arg0;
- (void)inviteFriendWithUser:(id)arg0;
- (id)initWithDelegate:(id)arg0 rootPanel:(id)arg1 userService:(id)arg2 eventContext:(id)arg3 requestPage:(id)arg4;
- (void)trackSearchResult:(BOOL)arg0;
- (void)searchUser:(id)arg0 completion:(id /* block */)arg1;
- (id)getProcessedHistorySearch;
- (void)storeUser:(id)arg0;
- (id)getRedNickName:(id)arg0;
- (void)acceptWithUser:(id)arg0;
- (void)searchNextPageWithCompletion:(id /* block */)arg0;
- (BOOL)processingSearch;
- (void)setNeedUpdateResult:(BOOL)arg0;
- (void)setWordNeededUpdate:(id)arg0;
- (void)setUidSet:(id)arg0;
- (void)setProcessingSearch:(BOOL)arg0;
- (BOOL)needUpdateResult;
- (id)wordNeededUpdate;
- (void)distinguishUser;
- (void)trackInviteUser:(id)arg0;
- (id)uidSet;
- (id)init;
- (long long)page;
- (void).cxx_destruct;
- (void)setPage:(long long)arg0;
- (long long)status;
- (void)setView:(id)arg0;
- (id)delegate;
- (void)setHasMore:(BOOL)arg0;
- (void)setStatus:(long long)arg0;
- (BOOL)hasMore;
- (id)eventContext;
- (id)lastSearchString;
- (void)setLastSearchString:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)view;
- (void)resetPage;
- (id)api;
- (void)setApi:(id)arg0;

@end