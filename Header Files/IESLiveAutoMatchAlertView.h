//
//     Generated by private class-dump
//

@class IESLiveAutoMatchAlertViewConfig, NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveAutoMatchAlertView : UIView <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    UIView *_container;
    UILabel *_descriptionLabel;
    UILabel *_actionLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_imageView;
    UIImageView *_arrowView;
    IESLiveAutoMatchAlertViewConfig *_config;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) IESLiveAutoMatchAlertViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUI;
- (void)setViewWithConfig:(id)arg0;
- (void)onActionLabelClicked;
- (void)didClickedLeftButton;
- (void)didClickedRightButton;
- (id)container;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void)dismiss;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setContainer:(id)arg0;
- (void)setRightButton:(id)arg0;
- (id)imageView;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (void)setImageView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)actionLabel;
- (void)setActionLabel:(id)arg0;

@end
