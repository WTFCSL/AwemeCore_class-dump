//
//     Generated by private class-dump
//

@class AWETeenHotSpotCollectionView;

@interface AWETeenHotSpotPanelContainer : AWETeenBasePanelContainer {
    BOOL _firsrPresent;
    AWETeenHotSpotCollectionView *_collectionView;
}

@property (retain, nonatomic) AWETeenHotSpotCollectionView *collectionView;
@property (nonatomic) BOOL firsrPresent;

- (void)p_setupView;
- (void)setFirsrPresent:(BOOL)arg0;
- (BOOL)firsrPresent;
- (void)presentWithHotID:(id)arg0;
- (id)init;
- (void)didDismiss;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (void)didPresent;

@end
