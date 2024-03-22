//
//     Generated by private class-dump
//

@class IESLiveRevenueInteractFeedbackView, IESLiveRevenueInteractFeedbackViewModel, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKFeedbackPopUpView : HTSLivePopUpView {
    BOOL _needMask;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_commitButton;
    UIView *_maskView;
    IESLiveRevenueInteractFeedbackView *_feedbackView;
    IESLiveRevenueInteractFeedbackViewModel *_viewModel;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (nonatomic) BOOL needMask;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *commitButton;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackView *feedbackView;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setNeedMask:(BOOL)arg0;
- (BOOL)needMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 needMask:(BOOL)arg2;
- (void)dismissFeedbackView;
- (void)didTapCommitButton;
- (void)didSelectedFeedbackCategory;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (id)maskView;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)commitButton;
- (void)setCommitButton:(id)arg0;
- (void)layoutUI;

@end
