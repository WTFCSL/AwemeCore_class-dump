//
//     Generated by private class-dump
//

@class AWEComposerBeautyViewModel, NSArray, UICollectionView, NSString, AWEComposerBeautyEffectCategoryWrapper;
@protocol AWEComposerBeautyPrimaryItemsViewControllerDelegate, ACCBeautyUIConfigProtocol;

@interface AWEComposerBeautyPrimaryItemsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<AWEComposerBeautyPrimaryItemsViewControllerDelegate> _delegate;
    id<ACCBeautyUIConfigProtocol> _uiConfig;
    AWEComposerBeautyViewModel *_viewModel;
    UICollectionView *_collectionView;
    AWEComposerBeautyEffectCategoryWrapper *_selectedChildCategory;
    AWEComposerBeautyEffectCategoryWrapper *_currentCategory;
    NSArray *_categoriesInCollection;
}

@property (retain, nonatomic) id<ACCBeautyUIConfigProtocol> uiConfig;
@property (retain, nonatomic) AWEComposerBeautyViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *selectedChildCategory;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *currentCategory;
@property (readonly, nonatomic) NSArray *childCategories;
@property (retain, nonatomic) NSArray *categoriesInCollection;
@property (weak, nonatomic) id<AWEComposerBeautyPrimaryItemsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uiConfig;
- (void)updateUIConfig:(id)arg0;
- (id)childCategories;
- (void)p_setupUI;
- (void)setUiConfig:(id)arg0;
- (id)currentCategory;
- (void)setCurrentCategory:(id)arg0;
- (void)reloadPanel;
- (id)selectedChildCategory;
- (void)setSelectedChildCategory:(id)arg0;
- (id)initWithViewModel:(id)arg0 PrimaryCategory:(id)arg1 selectedChildCategory:(id)arg2;
- (void)updateWithViewModel:(id)arg0 PrimaryCategory:(id)arg1 selectedChildCategory:(id)arg2;
- (id)firstLoadDefaultCategory:(id)arg0;
- (id)categoriesInCollection;
- (void)handleSelectEffectCategoryWrapper:(id)arg0 atIndexPath:(id)arg1;
- (void)setCategoriesInCollection:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;

@end