//
//     Generated by private class-dump
//

@class _TtC23BDMultiContentContainer25BaseContentListViewHolder;

@interface BDMultiContentContainer.BaseContentListViewController : AWEBaseListViewController <AWEShellViewControllerProtocol> {
    void /* unknown type, empty encoding */ collectionViewSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexUpdateController;
}

@property (nonatomic, readonly) _TtC23BDMultiContentContainer25BaseContentListViewHolder *viewHolder;

+ (Class)viewModelClass;
+ (Class)viewHolderClass;

- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)viewHolder;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView:(id)arg0;

@end