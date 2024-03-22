//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol IESECCommentNewEmptyPageViewProtocol;

@interface IESECCommentNewEmptyPageView : UIView {
    id<IESECCommentNewEmptyPageViewProtocol> _delegate;
    UIView *_whiteBackGroundView;
    UIView *_mainContentView;
    UIImageView *_emptyImageView;
    UILabel *_mainTitleLabel;
    UIView *_subTitleView;
    UILabel *_subTitleLabel;
    UIImageView *_arrowView;
    UIButton *_retryButton;
    long long _pageType;
}

@property (retain, nonatomic) UIView *whiteBackGroundView;
@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIButton *retryButton;
@property (nonatomic) long long pageType;
@property (weak, nonatomic) id<IESECCommentNewEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (void)setSubTitleView:(id)arg0;
- (id)subTitleView;
- (id)whiteBackGroundView;
- (void)meaninglessFooterContainerClick;
- (void)updateUIWithConfig:(id)arg0;
- (void)updateEmptyPageViewWithConfig:(id)arg0;
- (void)updateMainContentViewFrame;
- (void)setWhiteBackGroundView:(id)arg0;
- (long long)pageType;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setPageType:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setMainContentView:(id)arg0;
- (id)mainContentView;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end