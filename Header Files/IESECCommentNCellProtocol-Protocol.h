//
//     Generated by private class-dump
//

@protocol IESECCommentNCellActionDelegate;

@protocol IESECCommentNCellProtocol <NSObject>

@property (weak, nonatomic) id<IESECCommentNCellActionDelegate> delegate;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (copy, nonatomic) id /* block */ clickUserLevelButtonBlock;
@property (copy, nonatomic) id /* block */ clickUserInfoAreaBlock;
@property (copy, nonatomic) id /* block */ clickGoldCardBlock;
@property (copy, nonatomic) id /* block */ clickPostOrderButtonBlock;

- (void)updateAutoPlayState:(BOOL)arg0;
- (void)configureWithCommentModel:(id)arg0 withNoticeString:(id)arg1 commentIndex:(long long)arg2;
- (void)updateNoticeViewSortedStatus:(BOOL)arg0;
- (void)updateLikeButtonStatus:(id)arg0;
- (void)setClickLikeButtonBlock:(id /* block */)arg0;
- (void)setClickPostOrderButtonBlock:(id /* block */)arg0;
- (void)setClickUserInfoAreaBlock:(id /* block */)arg0;
- (id /* block */)clickLikeButtonBlock;
- (id /* block */)clickPostOrderButtonBlock;
- (id /* block */)clickUserLevelButtonBlock;
- (id /* block */)clickGoldCardBlock;
- (id /* block */)clickUserInfoAreaBlock;
- (void)setClickUserLevelButtonBlock:(id /* block */)arg0;
- (void)setClickGoldCardBlock:(id /* block */)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;

@optional

- (void)highlightCell:(BOOL)arg0;
- (void)showPostOrderButtonWithBubbleEnabled:(BOOL)arg0;
- (void)hidePostOrderBubble;
- (void)updateDislikeButtonStatus:(id)arg0;

@end
