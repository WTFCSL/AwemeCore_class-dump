//
//     Generated by private class-dump
//

@class AWESearchBar, NSString, UIView;
@protocol RxInjector, RTVListSearchPluginDelegate;

@interface RTVListSearchPlugin : NSObject <RTVListSearchPluginInterface> {
    id<RTVListSearchPluginDelegate> delegate;
    id<RxInjector> _injector;
    UIView *_containerView;
    AWESearchBar *_searchView;
    NSString *_preSearchedText;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AWESearchBar *searchView;
@property (copy, nonatomic) NSString *preSearchedText;
@property (weak, nonatomic) id<RTVListSearchPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)finishSearch;
- (id)aAWEPadRTVAdapter;
- (void)listViewWillBeginDragging;
- (void)forceEndEditing;
- (void)enableSearching:(BOOL)arg0;
- (void)pluginDidLayoutSubviews;
- (void)__searchViewDidBeginEdit:(id)arg0;
- (id)preSearchedText;
- (void)setPreSearchedText:(id)arg0;
- (void)__searchViewDidContentTextChange:(id)arg0;
- (void)refresh;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)injector;
- (id)delegate;
- (void)becomeFirstResponder;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (id)loadContentView;
- (double)contentViewHeight;
- (id)searchView;

@end
