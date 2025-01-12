//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, UIImageView, UILabel, AWEFeedSpeciesBottomViewModel, UIButton;
@protocol AWEFeedRecordSpeciesTipViewProtocol;

@interface AWEFeedRecordSpeciesTipView : UIView <AWEGrootBottomViewProtocol> {
    BOOL _shouldCancelPreviousTouch;
    id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
    AWEFeedSpeciesBottomViewModel *_viewModel;
    UIImageView *_leftImageView;
    UILabel *_tipLabel;
    UIButton *_closeButton;
    UIButton *_shotButton;
    UITapGestureRecognizer *_singleTap;
}

@property (retain, nonatomic) AWEFeedSpeciesBottomViewModel *viewModel;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *shotButton;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (weak, nonatomic) id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
@property (nonatomic) BOOL shouldCancelPreviousTouch;

- (void)setSingleTap:(id)arg0;
- (void)closeButtonClicked:(id)arg0;
- (void)configSubViews;
- (id)initWithEnterFrom:(id)arg0 reactID:(id)arg1 paramsDic:(id)arg2;
- (void)setShouldCancelPreviousTouch:(BOOL)arg0;
- (BOOL)shouldShowSpeciesTipView;
- (void)trackForShow;
- (void)configWithModel:(id)arg0 indexPath:(id)arg1 isClickToEnter:(BOOL)arg2;
- (void)fullScreenLayout;
- (void)normalScreenLayout;
- (void)shotButtonClicked:(id)arg0;
- (BOOL)shouldCancelPreviousTouch;
- (id)shotButton;
- (void)setShotButton:(id)arg0;
- (void)cancel:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)leftImageView;
- (id)singleTap;
- (void)setLeftImageView:(id)arg0;

@end
