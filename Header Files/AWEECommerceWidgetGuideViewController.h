//
//     Generated by private class-dump
//

@class AWEPanelTransitionController, NSString, AWEEComWidgetGuidePanelPage, AWEEComWidgetGuideViewModel;

@interface AWEECommerceWidgetGuideViewController : UIViewController <AWEEComWidgetGuidePanelPageDelegate, AWEPanelTransitionWithBackground, UIGestureRecognizerDelegate> {
    BOOL _needMask;
    AWEEComWidgetGuideViewModel *_viewModel;
    AWEEComWidgetGuidePanelPage *_panelView;
    AWEPanelTransitionController *_transitionController;
}

@property (retain, nonatomic) AWEEComWidgetGuideViewModel *viewModel;
@property (retain, nonatomic) AWEEComWidgetGuidePanelPage *panelView;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (nonatomic) BOOL needMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (double)panelHeight;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)setNeedMask:(BOOL)arg0;
- (void)trackGuideShowWithParams:(id)arg0;
- (void)backgroundClick;
- (void)trackWidgetClickWithTarget:(id)arg0 params:(id)arg1;
- (BOOL)needMask;
- (void)closeBtnCallback;
- (void)retryBtnCallback;
- (void)notAddBtnCallback;
- (void)goHomeBtnCallback;
- (void)nextStepBtnCallback;
- (id)nodeListModel;
- (id)init;
- (void).cxx_destruct;
- (id)transitionController;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setTransitionController:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupView;
- (void)addAction;
- (struct CGSize { double x0; double x1; })boundsSize;

@end
