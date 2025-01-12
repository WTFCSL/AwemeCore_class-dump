//
//     Generated by private class-dump
//

@class NSArray, AWEHomePageRemoteManager, AWEHomePageRemoteModuleModel, AWEHomePageRemoteModuleContext, NSString;

@interface AWEHomePageRemoteBaseModuleController : NSObject <AWEHomePageRemoteModuleControllerProtocol> {
    AWEHomePageRemoteManager *_manager;
    AWEHomePageRemoteModuleModel *_model;
    AWEHomePageRemoteModuleContext *_context;
    NSArray *_itemControllers;
    NSArray *_itemModels;
}

@property (weak, nonatomic) AWEHomePageRemoteManager *manager;
@property (retain, nonatomic) AWEHomePageRemoteModuleModel *model;
@property (retain, nonatomic) AWEHomePageRemoteModuleContext *context;
@property (copy, nonatomic) NSArray *itemControllers;
@property (copy, nonatomic) NSArray *itemModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemModels;
- (void)setItemModels:(id)arg0;
- (void)rootVCWillAppear;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (void)homePageRemotePanelWillDismissWithReason:(long long)arg0;
- (void)homePageRemotePanelDidDismissWithReason:(long long)arg0;
- (void)reloadModuleControllerView;
- (BOOL)shouldShowModuleView;
- (id)consumedBusinessIDArray;
- (long long)canShowItemCount;
- (id)initWithManager:(id)arg0 withModel:(id)arg1 withContext:(id)arg2;
- (id)supportBusinessTypes;
- (double)moduleControllerHeightByWidth:(double)arg0 withSection:(long long)arg1;
- (long long)collectionViewNumberOfItems:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 sizeForItemAtRow:(long long)arg1 withCollectionWidth:(double)arg2;
- (double)collectionViewMinimumInteritemSpacing:(id)arg0;
- (double)collectionViewMinimumLineSpacing:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 referenceSizeForHeaderInSection:(long long)arg1 withCollectionWidth:(double)arg2;
- (id)getItemModelAtRow:(long long)arg0;
- (void)moduleControllerThemeDidChange:(long long)arg0;
- (void)setItemControllers:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (void)setManager:(id)arg0;
- (id)manager;
- (id)itemControllers;
- (void)updateWithModel:(id)arg0;

@end
