//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGuestLikeListContainerViewController : AWEBaseListViewController <AWEGuestTabItemViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentedControlItem;

- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)bindViewModel;
- (void)bindEvent;
- (void)setupContext:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupCollectionView:(id)arg0;

@end
