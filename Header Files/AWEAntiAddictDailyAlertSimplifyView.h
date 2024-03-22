//
//     Generated by private class-dump
//

@class AWEGradientView, AWEAntiAddictDailyAlertBaseViewModel, NSArray, NSString, UILabel, UIView, UIButton;
@protocol AWEAntiAddictDailyAlertViewDelegate;

@interface AWEAntiAddictDailyAlertSimplifyView : UIView <AWEAntiAddictDailyAlertViewProtocol> {
    NSArray *_optionView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UILabel *_linkFooterLabel;
    UIView *_innerView;
    AWEGradientView *_gradientView;
    UIView *_maskView;
    UIView *_mainView;
    AWEAntiAddictDailyAlertBaseViewModel *_viewModel;
    id<AWEAntiAddictDailyAlertViewDelegate> _delegate;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UILabel *linkFooterLabel;
@property (retain, nonatomic) UIView *innerView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) AWEAntiAddictDailyAlertBaseViewModel *viewModel;
@property (weak, nonatomic) id<AWEAntiAddictDailyAlertViewDelegate> delegate;
@property (retain, nonatomic) NSArray *optionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (void)setMainView:(id)arg0;
- (void)setInnerView:(id)arg0;
- (void)setupMainView;
- (void)setupInnerView;
- (id)linkFooterLabel;
- (void)addMaskBtnForOptionView:(id)arg0 atIndex:(int)arg1;
- (void)onClickOptionView:(id)arg0;
- (id)createOptionViewForOptionsAtIndex:(int)arg0;
- (void)onClickCancelBtn;
- (void)onClickConfirmBtn;
- (void)onClickLinkText;
- (void)onClickMaskView;
- (void)onDragMaskView;
- (id)initWithViewModel:(id)arg0 delegate:(id)arg1;
- (void)moveGradientViewToView:(id)arg0;
- (void)changeColorForOptionViewSelected:(id)arg0;
- (void)setLinkFooterLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)maskView;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)mainView;
- (id)innerView;
- (void)setOptionView:(id)arg0;
- (id)optionView;

@end
