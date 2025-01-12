//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView, NSDictionary;

@interface AWEIMInteractPolymericCellBottomView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _fromStory;
    BOOL _showMoreIcon;
    BOOL _showAllData;
    NSString *_ruleId;
    NSDictionary *_routerParams;
    UICollectionView *_collectionView;
    NSArray *_dataList;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL fromStory;
@property (copy, nonatomic) NSString *ruleId;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) BOOL showMoreIcon;
@property (nonatomic) BOOL showAllData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataList:(id)arg0;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (void)setShowMoreIcon:(BOOL)arg0;
- (BOOL)showMoreIcon;
- (BOOL)showAllData;
- (id)_getCollectionViewLayout;
- (void)configWithDataList:(id)arg0;
- (BOOL)fromStory;
- (void)setFromStory:(BOOL)arg0;
- (void)setShowAllData:(BOOL)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)_setupUI;
- (void)setRuleId:(id)arg0;
- (id)ruleId;
- (id)dataList;

@end
