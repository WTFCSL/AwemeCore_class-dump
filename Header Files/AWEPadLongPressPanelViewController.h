//
//     Generated by private class-dump
//

@class AWELongPressPanelTableViewController, NSString, AWELongPressPanelConfiguration, AWEAwemeModel, NSMutableArray;

@interface AWEPadLongPressPanelViewController : UIViewController <AWELongPressPanelViewControllerProtocol> {
    AWELongPressPanelTableViewController *_panelTableViewController;
    id /* block */ _dismissedHandler;
    id /* block */ _willDismissedHandler;
    AWEAwemeModel *_awemeModel;
    AWELongPressPanelConfiguration *_panelConfiguration;
    NSMutableArray *_gestureRecognizers;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELongPressPanelConfiguration *panelConfiguration;
@property (retain, nonatomic) NSMutableArray *gestureRecognizers;
@property (retain, nonatomic) AWELongPressPanelTableViewController *panelTableViewController;
@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (copy, nonatomic) id /* block */ willDismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)LongPressPanelViewControllerWithModel:(id)arg0 configuration:(id)arg1;

- (id)awemeModel;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)setAwemeModel:(id)arg0;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)aAWEPadModuleAdapter;
- (id)panelTableViewController;
- (void)addDismissedHandler:(id /* block */)arg0;
- (void)addWillDismissHandler:(id /* block */)arg0;
- (void)setPanelTableViewController:(id)arg0;
- (double)getLongPressPanelMaxHeight;
- (id /* block */)willDismissedHandler;
- (void)setPanelConfiguration:(id)arg0;
- (void)updatePanelViewHeight;
- (double)getSheetTopPadding;
- (void)updateSheetHeightWithHeight:(double)arg0;
- (void)setWillDismissedHandler:(id /* block */)arg0;
- (id)panelConfiguration;
- (id)gestureRecognizers;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setGestureRecognizers:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id /* block */)dismissedHandler;
- (void)setDismissedHandler:(id /* block */)arg0;
- (void)setUpUI;

@end
