//
//     Generated by private class-dump
//

@class UILabel, AWEButton;

@interface AWEConcernCellLastView : UIView {
    id /* block */ _singleClickBlock;
    UILabel *_messageLabel;
    AWEButton *_backToHotFeedButton;
    UILabel *_scrollTipsLabel;
}

@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) AWEButton *backToHotFeedButton;
@property (retain, nonatomic) UILabel *scrollTipsLabel;
@property (copy, nonatomic) id /* block */ singleClickBlock;

- (id)backToHotFeedButton;
- (id)scrollTipsLabel;
- (void)onLastViewSingleClick;
- (void)onBackToHotFeedButtonClick;
- (void)adjustTitleAndImage:(id)arg0;
- (id /* block */)singleClickBlock;
- (void)bindWithModel:(id)arg0;
- (void)setSingleClickBlock:(id /* block */)arg0;
- (void)setBackToHotFeedButton:(id)arg0;
- (void)setScrollTipsLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setMessageLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)messageLabel;
- (void)setupUI;

@end
