//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, UIView, NSMutableArray, AWEProfileSidebarListCardViewModel;

@interface AWEProfileSidebarListCard : UICollectionViewCell <AWEProfileSidebarItemLifeCycleProtocol, AWEProfileSidebarCardProtocol> {
    AWEProfileSidebarListCardViewModel *_viewModel;
    NSMutableArray *_entryViewCache;
    NSMutableDictionary *_extendEntryViewDict;
    UIView *_containerView;
}

@property (retain, nonatomic) AWEProfileSidebarListCardViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *entryViewCache;
@property (retain, nonatomic) NSMutableDictionary *extendEntryViewDict;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)pageDidDisappear;
- (void)setupInit;
- (void)pageDidAppear;
- (void)pageDidLeave;
- (void)pageWillEnter;
- (void)pageDidEnter;
- (void)itemDidScroll:(id)arg0 direction:(long long)arg1;
- (void)itemWillDisplay;
- (void)itemDidEndDisplay;
- (void)handleLifeCycle:(id)arg0 direction:(long long)arg1 displayState:(long long)arg2;
- (void)dispatchPageLifeCycle:(SEL)arg0;
- (void)updateContainerFrame;
- (void)updateListLayout;
- (id)listEntryView:(long long)arg0 viewModel:(id)arg1;
- (id)extendEntryViewDict;
- (id)entryViewCache;
- (void)setEntryViewCache:(id)arg0;
- (void)setExtendEntryViewDict:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)layoutSubviews;

@end
