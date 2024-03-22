//
//     Generated by private class-dump
//

@class AWEFeedRelatedVideoCardControlViewController, AWEFeedRVCardVideoControlContext, NSArray, AWEAwemeModel, AWEElementContainer, UIView, CAGradientLayer;

@interface AWERVCardControlImmersionViewController : UIViewController {
    NSArray *_elementContainers;
    AWEAwemeModel *_model;
    AWEFeedRVCardVideoControlContext *_context;
    AWEFeedRelatedVideoCardControlViewController *_controlViewController;
    AWEElementContainer *_leftContainer;
    AWEElementContainer *_rightContainer;
    AWEElementContainer *_bottomContainer;
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEFeedRVCardVideoControlContext *context;
@property (weak, nonatomic) AWEFeedRelatedVideoCardControlViewController *controlViewController;
@property (retain, nonatomic) NSArray *elementContainers;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (retain, nonatomic) AWEElementContainer *bottomContainer;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)setGradientBackgroundView:(id)arg0;
- (id)leftContainer;
- (id)rightContainer;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (void)initContainer;
- (void)registerBottomElement;
- (id)initWithControlViewController:(id)arg0 context:(id)arg1;
- (id)controlViewController;
- (void)setControlViewController:(id)arg0;
- (id)elementContainers;
- (void)setupGradientBackgroundView;
- (void)registerLeftElement;
- (void)registerRightElement;
- (void)setElementContainers:(id)arg0;
- (void)setModel:(id)arg0;
- (id)gradientLayer;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (void)viewDidLoad;
- (void)setGradientLayer:(id)arg0;
- (id)gradientBackgroundView;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end