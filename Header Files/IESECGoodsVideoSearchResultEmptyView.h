//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;
@protocol IESECGoodsVideoSearchResultEmptyViewProtocol;

@interface IESECGoodsVideoSearchResultEmptyView : UIView {
    UIImageView *_emptyImageView;
    UILabel *_errorHintLabel;
    UIButton *_retryButton;
    UIButton *_transToMallButton;
    id<IESECGoodsVideoSearchResultEmptyViewProtocol> _delegate;
}

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *transToMallButton;
@property (weak, nonatomic) id<IESECGoodsVideoSearchResultEmptyViewProtocol> delegate;

- (void)retryButtonClicked;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (void)updateNetworkEmptyView;
- (void)updateNoResultEmptyView;
- (id)errorHintLabel;
- (void)setErrorHintLabel:(id)arg0;
- (id)transToMallButton;
- (void)transToMallButtonClicked;
- (void)setTransToMallButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end
