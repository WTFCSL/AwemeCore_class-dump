//
//     Generated by private class-dump
//

@class ACCSlidingViewController, NSString, ACCSlidingTabbarView;
@protocol ACCAIGCWaterfallTabContentProviderProtocol;

@interface ACCAIGCSlidingTabViewController : UIViewController <ACCSlidingViewControllerDelegate, ACCAIGCSlidingTabViewControllerProtocol> {
    id<ACCAIGCWaterfallTabContentProviderProtocol> _contentProvider;
    ACCSlidingTabbarView *_slidingTabView;
    ACCSlidingViewController *_slidingViewController;
}

@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) id<ACCAIGCWaterfallTabContentProviderProtocol> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)setSlidingViewController:(id)arg0;
- (id)slidingTabView;
- (void)setSlidingTabView:(id)arg0;
- (double)getSlidingTabViewWidth;
- (id)contentProvider;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setContentProvider:(id)arg0;

@end
