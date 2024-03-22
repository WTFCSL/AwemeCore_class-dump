//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, AWETeenPanelContainerConfig, UIView, UIPanGestureRecognizer, UIButton;
@protocol AWETeenPanelPresentPortocol;

@interface AWETeenBasePanelContainer : UIView <UIGestureRecognizerDelegate> {
    BOOL _didShowPanel;
    id<AWETeenPanelPresentPortocol> _delegate;
    AWETeenPanelContainerConfig *_config;
    UIView *_containerView;
    UIView *_listContainer;
    CAGradientLayer *_gradientLayer;
    UIView *_backgroudView;
    double _panelHeight;
    UIButton *_closeButton;
    UIPanGestureRecognizer *_panGesture;
    double _showHeight;
}

@property (retain, nonatomic) AWETeenPanelContainerConfig *config;
@property (nonatomic) BOOL didShowPanel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *listContainer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *backgroudView;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double showHeight;
@property (weak, nonatomic) id<AWETeenPanelPresentPortocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (void)setPanelHeight:(double)arg0;
- (BOOL)didShowPanel;
- (id)listContainer;
- (void)base_setupUI;
- (void)base_addGestureRecognizer;
- (void)setDidShowPanel:(BOOL)arg0;
- (double)base_currentShowHeight;
- (void)setShowHeight:(double)arg0;
- (void)base_addBackgroudView;
- (double)showHeight;
- (void)base_onSingleTap;
- (void)base_onPanGesture:(id)arg0;
- (void)base_presentByPanGesture;
- (void)base_dismissByPanGesture;
- (void)presentWithPanelHeight:(double)arg0 showHeight:(double)arg1;
- (void)showBottomGradientLayer:(BOOL)arg0;
- (void)updateShowHeight:(double)arg0;
- (void)updateUIWhileRotate;
- (void)setListContainer:(id)arg0;
- (void)present;
- (id)init;
- (void)dismiss;
- (id)gradientLayer;
- (void)didDismiss;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setContainerView:(id)arg0;
- (void)willDismiss;
- (id)initWithConfig:(id)arg0;
- (void)didPresent;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (void)willPresent;
- (void)setDelegate:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)backgroudView;
- (void)setBackgroudView:(id)arg0;

@end