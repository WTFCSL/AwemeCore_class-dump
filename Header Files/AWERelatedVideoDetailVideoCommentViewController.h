//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, UIScrollView, AWERVDetailPageContext, UIViewController;
@protocol AWECommentListViewControllerProtocol, AWECommentListInputViewProtocol;

@interface AWERelatedVideoDetailVideoCommentViewController : UIViewController <AWECommentControlVideoStateProtocol> {
    BOOL _isPausedByComment;
    id /* block */ _didCreateInputView;
    id /* block */ _didHideInputView;
    id /* block */ _willHideInputView;
    id /* block */ _didShowInputView;
    id /* block */ _onCommentDidScroll;
    AWERVDetailPageContext *_pageContext;
    UIScrollView *_commentScrollView;
    UIViewController<AWECommentListViewControllerProtocol> *_commentVC;
    id<AWECommentListInputViewProtocol> _commentInputView;
    AWEAwemeModel *_model;
    NSDictionary *_params;
}

@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) id<AWECommentListInputViewProtocol> commentInputView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isPausedByComment;
@property (copy, nonatomic) id /* block */ didCreateInputView;
@property (copy, nonatomic) id /* block */ didHideInputView;
@property (copy, nonatomic) id /* block */ willHideInputView;
@property (copy, nonatomic) id /* block */ didShowInputView;
@property (copy, nonatomic) id /* block */ onCommentDidScroll;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) UIScrollView *commentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentVCRefresh;
- (id)logExtraDict;
- (BOOL)pauseVideoIfPlaying;
- (BOOL)recoverPlayIfPauseByComment;
- (id)commentVC;
- (void)setCommentVC:(id)arg0;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg0;
- (void)setIsPausedByComment:(BOOL)arg0;
- (BOOL)isPausedByComment;
- (void)showInputView;
- (void)scrollCommentToTop:(BOOL)arg0;
- (void)loadCommentVCIfNeeded;
- (void)setupCommentVC:(id)arg0;
- (id)commentScrollView;
- (id /* block */)didHideInputView;
- (id /* block */)willHideInputView;
- (id /* block */)didShowInputView;
- (id /* block */)didCreateInputView;
- (void)setCommentScrollView:(id)arg0;
- (id /* block */)onCommentDidScroll;
- (void)startRequestAnimating;
- (void)refreshModel:(id)arg0 params:(id)arg1;
- (BOOL)canScrollToDownDirection;
- (struct CGPoint { double x0; double x1; })commentViewOffset;
- (void)setDidCreateInputView:(id /* block */)arg0;
- (void)setDidHideInputView:(id /* block */)arg0;
- (void)setWillHideInputView:(id /* block */)arg0;
- (void)setDidShowInputView:(id /* block */)arg0;
- (void)setOnCommentDidScroll:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)keyboardWillShow:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
