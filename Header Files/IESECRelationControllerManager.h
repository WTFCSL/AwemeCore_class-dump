//
//     Generated by private class-dump
//

@class NSString, IESECRelationPageContext, UIView, NSMutableArray;
@protocol IESECRelationControllerProtocol, IESECRelationContainerProtocol;

@interface IESECRelationControllerManager : NSObject <IESECRelationControllerProtocol> {
    id<IESECRelationContainerProtocol> _container;
    IESECRelationPageContext *_pageContext;
    UIView *_rootView;
    NSMutableArray<IESECRelationControllerProtocol> *_controllerArray;
}

@property (weak, nonatomic) id<IESECRelationContainerProtocol> container;
@property (weak, nonatomic) IESECRelationPageContext *pageContext;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMutableArray<IESECRelationControllerProtocol> *controllerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerByProtocol:(id)arg0;
- (id)controllerArray;
- (id)controllerArrayBySelector:(SEL)arg0;
- (id)controllersByProtocol:(id)arg0;
- (void)removeAllControllers;
- (void)setControllerArray:(id)arg0;
- (void)pagerViewDidLayoutSubviews:(id)arg0;
- (void)pagerViewDidReload:(id)arg0;
- (void)pagerView:(id)arg0 tabScrollViewWillBeginDragging:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidEndDecelerating:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)pagerView:(id)arg0 mainScrollViewDidScroll:(id)arg1;
- (void)pagerView:(id)arg0 mainScrollViewWillBeginDragging:(id)arg1;
- (void)pagerView:(id)arg0 tabScrollViewDidScroll:(id)arg1;
- (void)pagerView:(id)arg0 mainScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)pagerView:(id)arg0 mainScrollViewDidEndDecelerating:(id)arg1;
- (void)loadControllersWithContainer:(id)arg0 pageContext:(id)arg1 rootView:(id)arg2;
- (void)headerTypeDidChange:(unsigned long long)arg0;
- (void)switchTheme:(unsigned long long)arg0;
- (void)pagerView:(id)arg0 willMoveToTab:(id)arg1;
- (void)pagerView:(id)arg0 cancelMoveToTab:(id)arg1;
- (void)pagerView:(id)arg0 didMoveToTab:(id)arg1;
- (void)addController:(id)arg0 forProtocol:(id)arg1;
- (id)container;
- (void)addController:(id)arg0;
- (void)removeController:(id)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
