//
//     Generated by private class-dump
//

@class UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceDispatcherManager;

@protocol AWECommerceComponentContext <NSObject>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWECommerceDispatcherManager> dispatchManager;
@property (copy, nonatomic) id /* block */ isSimilarRecommendViewShowing;
@property (copy, nonatomic) id /* block */ promptModalManager;
@property (copy, nonatomic) id /* block */ commerceViewModel;
@property (copy, nonatomic) id /* block */ similarAdManager;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id /* block */)isSimilarRecommendViewShowing;
- (id /* block */)similarAdManager;
- (id /* block */)promptModalManager;
- (id /* block */)commerceViewModel;
- (id)dispatchManager;
- (void)setDispatchManager:(id)arg0;
- (void)setIsSimilarRecommendViewShowing:(id /* block */)arg0;
- (void)setPromptModalManager:(id /* block */)arg0;
- (void)setCommerceViewModel:(id /* block */)arg0;
- (void)setSimilarAdManager:(id /* block */)arg0;
- (id)container;
- (void)setContainer:(id)arg0;

@end
