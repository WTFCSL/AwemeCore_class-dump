//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSString, UILabel, UIView, UIButton;

@interface DYReBindHighRiskPhoneNumberAlertViewController : UIViewController <UIGestureRecognizerDelegate> {
    NSString *_titleText;
    NSString *_detailText;
    NSString *_subDetailText;
    id /* block */ _acceptBlock;
    id /* block */ _dismissBlock;
    id /* block */ _dismissKeyBoardBlock;
    UIView *_maskView;
    UIView *_containerView;
    double _containerHeight;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_subDetailLabel;
    UIButton *_dismissButton;
    UIButton *_acceptButton;
    UIButton *_cancelButton;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *subDetailLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *subDetailText;
@property (copy, nonatomic) id /* block */ acceptBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dismissKeyBoardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)selfPanned:(id)arg0;
- (void)setAcceptBlock:(id /* block */)arg0;
- (void)setDismissKeyBoardBlock:(id /* block */)arg0;
- (id)subDetailLabel;
- (id /* block */)dismissKeyBoardBlock;
- (id)subDetailText;
- (void)acceptAction;
- (id /* block */)acceptBlock;
- (void)setSubDetailText:(id)arg0;
- (void)setSubDetailLabel:(id)arg0;
- (void)dismissAction;
- (void)setTitleText:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id)detailText;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setDetailText:(id)arg0;
- (id)titleLabel;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)titleText;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (void)cancelAction;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)dismiss:(id /* block */)arg0;
- (id)detailLabel;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (void)presentWithCompletion:(id /* block */)arg0;
- (void)setDetailLabel:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;

@end
