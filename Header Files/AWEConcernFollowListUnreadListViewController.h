//
//     Generated by private class-dump
//

@class AWEHotSearchProgressView, AWEHotSearchProgressViewWithNumber, NSString;
@protocol AWEConcernRecentUpdateUnreadListPageHandlerProtocol;

@interface AWEConcernFollowListUnreadListViewController : AWEAwemeDetailTableViewController <AWEUserMessage> {
    BOOL _didReceiveAutoPlayNotification;
    BOOL _enablePage;
    AWEHotSearchProgressView *_progressView;
    AWEHotSearchProgressViewWithNumber *_progressWithNumberView;
    unsigned long long _recentEnterFrom;
    NSString *_userID;
    id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> _pageHandler;
    id /* block */ _willDisappearBlock;
    NSString *_firstUserID;
}

@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (retain, nonatomic) AWEHotSearchProgressViewWithNumber *progressWithNumberView;
@property (nonatomic) BOOL didReceiveAutoPlayNotification;
@property (nonatomic) unsigned long long recentEnterFrom;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL enablePage;
@property (weak, nonatomic) id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (copy, nonatomic) NSString *firstUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (id)awemeModelWithIndexPath:(id)arg0;
- (id)currentDisplayUserID:(id)arg0;
- (id)initWithUserID:(id)arg0;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (BOOL)closeCellPreload;
- (BOOL)shouldShowCommentInputViewForAweme:(id)arg0;
- (void)updateProgressView:(id)arg0;
- (void)setFirstUserID:(id)arg0;
- (void)setEnablePage:(BOOL)arg0;
- (void)setRecentEnterFrom:(unsigned long long)arg0;
- (void)willPlayNextLoop:(id)arg0;
- (void)addProgressView;
- (void)configStayTimeParams;
- (BOOL)enablePage;
- (long long)emptyAwemeType;
- (BOOL)isLastVideoWithIndexPath:(id)arg0;
- (id)progressWithNumberView;
- (void)toastForUserChangeIfNeededWithIndexPath:(id)arg0;
- (BOOL)didReceiveAutoPlayNotification;
- (void)setDidReceiveAutoPlayNotification:(BOOL)arg0;
- (void)videoFeedScrollToNextVideo;
- (unsigned long long)recentEnterFrom;
- (id)firstUserID;
- (id)initWithUserID:(id)arg0 enterFrom:(unsigned long long)arg1 pageHandler:(id)arg2 logExtraDict:(id)arg3 willDisappearBlock:(id /* block */)arg4;
- (void)setProgressWithNumberView:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)pageHandler;
- (void)setPageHandler:(id)arg0;
- (id /* block */)willDisappearBlock;
- (void)setWillDisappearBlock:(id /* block */)arg0;

@end
