//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;
@protocol IESECCommentEmptyPageViewProtocol;

@interface IESECCommentEmptyPageView : UIView {
    UIImageView *_emptyImageView;
    UILabel *_errorHintLabel;
    UIButton *_retryButton;
    id<IESECCommentEmptyPageViewProtocol> _delegate;
}

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<IESECCommentEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (id)errorHintLabel;
- (void)setErrorHintLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end
