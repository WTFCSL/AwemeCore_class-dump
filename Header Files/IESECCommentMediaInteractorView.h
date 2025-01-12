//
//     Generated by private class-dump
//

@class IESECCommentRightInteractorView, NSString, IESECCommentDetailTextView, IESECCommentMediaStatusBarView, IESECCommentDetailModel;
@protocol IESECCommentMediaInteractorViewDelegate;

@interface IESECCommentMediaInteractorView : UIView <IESECCommentMediaStatusBarDelegate, IESECCommentDetailTextViewDelegate> {
    BOOL _shouldHideMultiplyButton;
    id<IESECCommentMediaInteractorViewDelegate> _delegate;
    IESECCommentDetailModel *_comment;
    id /* block */ _clickLikeButtonBlock;
    IESECCommentMediaStatusBarView *_statusView;
    IESECCommentDetailTextView *_textView;
    IESECCommentRightInteractorView *_rightInteractorView;
    unsigned long long _enterFrom;
}

@property (retain, nonatomic) IESECCommentMediaStatusBarView *statusView;
@property (retain, nonatomic) IESECCommentDetailTextView *textView;
@property (retain, nonatomic) IESECCommentRightInteractorView *rightInteractorView;
@property (nonatomic) BOOL shouldHideMultiplyButton;
@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) id<IESECCommentMediaInteractorViewDelegate> delegate;
@property (retain, nonatomic) IESECCommentDetailModel *comment;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)progressIsSliding:(BOOL)arg0;
- (void)didUpdateTextContentHeight:(double)arg0;
- (void)setClickLikeButtonBlock:(id /* block */)arg0;
- (void)setShouldHideMultiplyButton:(BOOL)arg0;
- (void)setupClickBlock;
- (void)updateDataWithItemModel:(id)arg0 length:(long long)arg1;
- (BOOL)shouldHideMultiplyButton;
- (id)rightInteractorView;
- (void)pushMultypleMedias:(id)arg0;
- (void)dismiss:(long long)arg0 isCurrentVideoTab:(BOOL)arg1;
- (id /* block */)clickLikeButtonBlock;
- (id)initWithModel:(id)arg0 length:(long long)arg1 shouldHideMultiplyButton:(BOOL)arg2 enterFrom:(unsigned long long)arg3;
- (void)setRightInteractorView:(id)arg0;
- (id)textView;
- (void).cxx_destruct;
- (id)delegate;
- (id)comment;
- (void)setTextView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setComment:(id)arg0;
- (void)setupSubviews;
- (id)statusView;
- (void)setStatusView:(id)arg0;

@end
