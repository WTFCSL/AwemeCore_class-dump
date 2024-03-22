//
//     Generated by private class-dump
//

@class IESLiveButton, IESLiveRevenueInteractFeedbackViewModel, IESLiveCustomButton, UILabel, UIView, IESLiveRevenueInteractFeedbackView;
@protocol IESLiveCompoundSubscription, IESLivePKProvider;

@interface IESLivePKFeedbackViewController : IESLiveRevenueInteractPopupViewController {
    IESLiveButton *_backButton;
    UILabel *_titleLabel;
    UIView *_separateLine;
    IESLiveRevenueInteractFeedbackView *_feedbackView;
    IESLiveCustomButton *_submitButton;
    IESLiveRevenueInteractFeedbackViewModel *_viewModel;
    id<IESLivePKProvider> _pkProvider;
    id<IESLiveCompoundSubscription> _disposable;
    long long _fromSource;
}

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackView *feedbackView;
@property (retain, nonatomic) IESLiveCustomButton *submitButton;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) long long fromSource;

- (long long)fromSource;
- (void)setFromSource:(long long)arg0;
- (void)onBackButtonClicked;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (void)bindActions;
- (id)sceneString;
- (void)onSetupNavBar:(id)arg0;
- (id)initWithDIContext:(id)arg0 fromSource:(long long)arg1;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (void)fetchPKFeedback;
- (void)updateFeedbackViewFrame;
- (void)checkSubmitButtonStatus;
- (void)onSubmitButtonClicked;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg0;
- (void)setupSubviews;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end
