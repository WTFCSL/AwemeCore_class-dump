//
//     Generated by private class-dump
//

@class UITableViewCell, UIView, NSArray, UITapGestureRecognizer, NSString, UITableView, UIViewController, AWEGeneralSearchVideoCardModel;
@protocol AWECommentCellProtocol, AWECommentListViewControllerProtocol, AWESearchCardCommentCellProtocol;

@interface AWESearchVideoCardCommentComponent : AWESearchComponent <AWECommentControlVideoStateProtocol, AWESearchVideoCardCommentComponentProtocol, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource> {
    BOOL _commentVCNeedRefresh;
    BOOL _commentVCHasShown;
    BOOL _currentModelFromSetupModelOnly;
    UIView *_contentView;
    UITableViewCell<AWECommentCellProtocol> *_commentCell;
    UITableViewCell<AWESearchCardCommentCellProtocol> *_customedCommentCell;
    UIView *_separatorLine;
    UITapGestureRecognizer *_commentTap;
    AWEGeneralSearchVideoCardModel *_bindedModel;
    UIViewController<AWECommentListViewControllerProtocol> *_commentVC;
    UITableView *_commentListView;
    NSArray *_commentList;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITableViewCell<AWECommentCellProtocol> *commentCell;
@property (retain, nonatomic) UITableViewCell<AWESearchCardCommentCellProtocol> *customedCommentCell;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UITapGestureRecognizer *commentTap;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (nonatomic) BOOL commentVCNeedRefresh;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL commentVCHasShown;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) UITableView *commentListView;
@property (retain, nonatomic) NSArray *commentList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldADCommentTimeLabelNewStyle;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)arg0 width:(double)arg1;
+ (struct CGSize { double x0; double x1; })reCalculateSizeForModel:(id)arg0 width:(double)arg1;
+ (BOOL)isUseSearchCustomedCommentCell;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)arg0 withModel:(id)arg1;
+ (BOOL)fixCommentCell;
+ (BOOL)fixCommentTap;

- (BOOL)pauseVideoIfPlaying;
- (BOOL)recoverPlayIfPauseByComment;
- (id)commentVC;
- (void)setCommentVC:(id)arg0;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (void)commentLikeActionNotification:(id)arg0;
- (void)trackForbidCommentToastShow:(id)arg0;
- (void)commentAddedNotification:(id)arg0;
- (void)commentDeleteNotification:(id)arg0;
- (void)commentTotalCountNotification:(id)arg0;
- (id)postCommentExtraLogDicWithEnterMethod:(id)arg0;
- (void)trackIronMan_comment_top;
- (void)commentVideoClickActionWithCommentIDs:(id)arg0 showInputView:(BOOL)arg1 enterMethod:(id)arg2;
- (unsigned long long)commentPanelEnterSource:(id)arg0;
- (void)setCommentVCNeedRefresh:(BOOL)arg0;
- (BOOL)canPostCommentWithToast:(BOOL)arg0;
- (void)showCommentPanelWithCommentIDs:(id)arg0 showInputView:(BOOL)arg1 exterMethod:(id)arg2;
- (void)setCommentVCHasShown:(BOOL)arg0;
- (BOOL)commentVCNeedRefresh;
- (BOOL)commentVCHasShown;
- (void)p_loadView;
- (void)setBindedModel:(id)arg0;
- (void)setModelOnly:(id)arg0;
- (id)bindedModel;
- (void)updateWithChunkModel:(id)arg0;
- (id)playerProvider;
- (void)updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)componentViewDidStartShowing;
- (void)componentViewDidEndShowing;
- (id)accessibilityElementsArr;
- (id)commentListView;
- (id)getDefaultCommentCellForTableView:(id)arg0 indexPath:(id)arg1;
- (void)commentHighlightWordsShowTrackWithModel:(id)arg0;
- (id)logExtraAddSearchParams:(id)arg0 searchParams:(id)arg1;
- (void)setCommentListView:(id)arg0;
- (id)p_context;
- (void)p_updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setCurrentModelFromSetupModelOnly:(BOOL)arg0;
- (BOOL)currentModelFromSetupModelOnly;
- (id)descProvider;
- (void)p_createComponent;
- (void)p_buildSeparator;
- (void)p_commentTapped;
- (id)p_buildCommentVCWithModel:(id)arg0;
- (void)p_layoutContents;
- (id)authorProvider;
- (id)commentCell;
- (id)customedCommentCell;
- (id)p_getVideoCardBtmDcmInfoDict;
- (void)setCommentCell:(id)arg0;
- (void)setCustomedCommentCell:(id)arg0;
- (id)commentTap;
- (void)setCommentTap:(id)arg0;
- (id)interactor;
- (id)init;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setContentView:(id)arg0;
- (id)componentView;
- (id)router;
- (void)addObservers;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;

@end
