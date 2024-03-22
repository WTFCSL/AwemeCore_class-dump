//
//     Generated by private class-dump
//

@class UIViewController, AWEVideoPublishViewModel;
@protocol ACCSlidingTabViewControllerProtocol;

@protocol ACCWaterfallTabContentProviderProtocol <NSObject>

@property (weak, nonatomic) UIViewController<ACCSlidingTabViewControllerProtocol> *viewController;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (id)slidingViewControllers;
- (id)tabTitlesArray;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (unsigned long long)initialSelectedIndex;

@end