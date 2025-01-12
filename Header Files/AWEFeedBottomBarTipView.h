//
//     Generated by private class-dump
//

@class UIButton, UITapGestureRecognizer, UIImageView, UIView, AWEFeedBottomBarViewModel, UILabel;
@protocol AWEFeedRecordSpeciesTipViewProtocol;

@interface AWEFeedBottomBarTipView : UIView <AWEGrootBottomViewProtocol> {
    BOOL _shouldCancelPreviousTouch;
    id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
    AWEFeedBottomBarViewModel *_viewModel;
    UIImageView *_backgroundImageView;
    UIView *_contentView;
    UIImageView *_leftImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_rightButton;
    UIButton *_closeButton;
    UITapGestureRecognizer *_singleTap;
}

@property (retain, nonatomic) AWEFeedBottomBarViewModel *viewModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (weak, nonatomic) id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
@property (nonatomic) BOOL shouldCancelPreviousTouch;

- (void)setSingleTap:(id)arg0;
- (void)closeButtonClicked:(id)arg0;
- (void)setupBinding;
- (void)configSubViews;
- (id)initWithEnterFrom:(id)arg0 reactID:(id)arg1 paramsDic:(id)arg2;
- (void)setShouldCancelPreviousTouch:(BOOL)arg0;
- (void)trackForShow;
- (void)configWithModel:(id)arg0 indexPath:(id)arg1 isClickToEnter:(BOOL)arg2;
- (void)fullScreenLayout;
- (void)normalScreenLayout;
- (void)shotButtonClicked:(id)arg0;
- (BOOL)shouldCancelPreviousTouch;
- (id)rightButton;
- (void)cancel:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)leftImageView;
- (id)singleTap;
- (void)setLeftImageView:(id)arg0;

@end
