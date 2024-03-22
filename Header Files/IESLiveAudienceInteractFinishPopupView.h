//
//     Generated by private class-dump
//

@class IESLiveInteractFeedbackView, NSString, RACCompoundDisposable, IESLiveInteractFeedbackViewModel, UILabel, UIButton;

@interface IESLiveAudienceInteractFinishPopupView : HTSLivePopUpView {
    BOOL _justFeedbackEnabled;
    NSString *_titleString;
    NSString *_subTitleString;
    NSString *_confirmString;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    IESLiveInteractFeedbackView *_feedbackView;
    RACCompoundDisposable *_disposable;
    IESLiveInteractFeedbackViewModel *_feedbackViewModel;
    id /* block */ _confirmBlock;
    unsigned long long _viewStyle;
}

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *subTitleString;
@property (copy, nonatomic) NSString *confirmString;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLiveInteractFeedbackView *feedbackView;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) BOOL justFeedbackEnabled;

- (void)didSetAttachingDIContext;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)feedbackViewModel;
- (void)setFeedbackViewModel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 subTitle:(id)arg2 feedbackViewModel:(id)arg3 confirmBlock:(id /* block */)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 subTitle:(id)arg2 feedbackViewModel:(id)arg3 viewStyle:(unsigned long long)arg4 confirmBlock:(id /* block */)arg5;
- (id)confirmString;
- (void)didTapConfirmButton:(id)arg0;
- (void)setupJustFeedbackMode;
- (BOOL)justFeedbackEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 subTitle:(id)arg2 feedbackViewModel:(id)arg3;
- (void)setConfirmTitle:(id)arg0 confirmBlock:(id /* block */)arg1;
- (void)updateAnchorMuteRemindText:(id)arg0;
- (void)setJustFeedbackEnabled:(BOOL)arg0;
- (void)setConfirmString:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (unsigned long long)viewStyle;
- (void)setup;
- (void)dealloc;
- (void)setViewStyle:(unsigned long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg0;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (id)subTitleString;
- (void)setSubTitleString:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)didTapCancelButton;
- (void)layoutUI;

@end
