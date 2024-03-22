//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEPlayInteractionVideoHasPurchasedElement : AWEPlayInteractionLeftElement {
    UIView *_outsideContainerView;
    UIView *_containerView;
    UILabel *_hasPurchasedLabel;
}

@property (retain, nonatomic) UIView *outsideContainerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hasPurchasedLabel;

- (void)initializeElement;
- (void)viewDidDisposed;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (id)attributedTextWithText:(id)arg0;
- (void)makeConstraint;
- (id)outsideContainerView;
- (id)hasPurchasedLabel;
- (id)trackShowExtraParams;
- (void)setOutsideContainerView:(id)arg0;
- (void)setHasPurchasedLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)reset;
- (void)viewDidLoad;

@end
