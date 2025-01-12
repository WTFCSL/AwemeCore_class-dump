//
//     Generated by private class-dump
//

@class AWEGuestFollowFeedViewHolder, NSString;

@interface AWEGuestFollowFeedController : AWEBaseController <AWEFeedControllerProtocol, AWEGuestModeMessage> {
    BOOL _emptyPageHidden;
    BOOL _needsRefreshFlag;
    AWEGuestFollowFeedViewHolder *_viewHolder;
}

@property (retain, nonatomic) AWEGuestFollowFeedViewHolder *viewHolder;
@property (nonatomic) BOOL emptyPageHidden;
@property (nonatomic) BOOL needsRefreshFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewHolder;
- (void)setViewHolder:(id)arg0;
- (void)setupBinding;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)guestDidFinishFollowUser:(id)arg0 isUnfollow:(BOOL)arg1;
- (BOOL)needsRefreshFlag;
- (void)setNeedsRefreshFlag:(BOOL)arg0;
- (void)setEmptyPageHidden:(BOOL)arg0;
- (void)refreshFeedIfNeeded;
- (BOOL)emptyPageHidden;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)dealloc;
- (void)setupNotifications;

@end
