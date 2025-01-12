//
//     Generated by private class-dump
//

@protocol AWECommentBookScoreViewControllerProtocol, AWECommentBookScoreManagerDelegate;

@protocol AFDBookCommentManagerProtocol <NSObject>

@property (nonatomic, weak) id<AWECommentBookScoreViewControllerProtocol> scoreParentViewController;
@property (nonatomic) BOOL displayingScoreView;
@property (nonatomic) BOOL isUpdate;
@property (nonatomic, weak) id<AWECommentBookScoreManagerDelegate> delegate;

- (id)scoreParentViewController;
- (void)setScoreParentViewController:(id)arg0;
- (BOOL)displayingScoreView;
- (void)setDisplayingScoreView:(BOOL)arg0;
- (void)showScoreViewController;
- (void)dismissScoreViewController;
- (float)getBookScore;
- (BOOL)getBookCommentForwardState;
- (void)clearBookScoreViewState;
- (void)loadBookScoreLottieSource;
- (void)setBookParams:(id)arg0 bookRating:(float)arg1 isUpdate:(BOOL)arg2;
- (double)panelHeight;
- (void)resetBookScoreViewFrameLimited;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)isUpdate;
- (void)setIsUpdate:(BOOL)arg0;

@end
