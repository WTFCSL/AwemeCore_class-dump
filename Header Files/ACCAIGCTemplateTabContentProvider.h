//
//     Generated by private class-dump
//

@class ACCAIGCCategoryModel, NSArray, NSString, AWEVideoPublishViewModel, UIViewController;
@protocol ACCAIGCSlidingTabViewControllerProtocol;

@interface ACCAIGCTemplateTabContentProvider : NSObject <ACCAIGCWaterfallTabContentProviderProtocol> {
    UIViewController<ACCAIGCSlidingTabViewControllerProtocol> *viewController;
    AWEVideoPublishViewModel *_publishModel;
    NSArray *_categories;
    ACCAIGCCategoryModel *_defaultCategory;
    id /* block */ _creatAIGCBlock;
    id /* block */ _takeSameBlock;
    unsigned long long _currentSelectedVCIndex;
    NSArray *_viewControllers;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@property (nonatomic) unsigned long long currentSelectedVCIndex;
@property (copy, nonatomic) NSArray *viewControllers;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) ACCAIGCCategoryModel *defaultCategory;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) id /* block */ creatAIGCBlock;
@property (copy, nonatomic) id /* block */ takeSameBlock;
@property (weak, nonatomic) UIViewController<ACCAIGCSlidingTabViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)arg0;
- (void)setCurrentSelectedVCIndex:(unsigned long long)arg0;
- (unsigned long long)currentSelectedVCIndex;
- (void)setCreatAIGCBlock:(id /* block */)arg0;
- (void)setTakeSameBlock:(id /* block */)arg0;
- (id)slidingViewControllers;
- (id /* block */)takeSameBlock;
- (id /* block */)creatAIGCBlock;
- (id)tabTitlesArray;
- (void)setDefaultCategory:(id)arg0;
- (id)viewControllers;
- (void)setViewControllers:(id)arg0;
- (id)init;
- (id)categories;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)defaultCategory;
- (unsigned long long)initialSelectedIndex;

@end
