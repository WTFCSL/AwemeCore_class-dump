//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UILabel, AWERadarGameManager, NSMutableArray;

@interface AWERadarGameViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    double _contentHeight;
    UICollectionView *_collectionView;
    AWERadarGameManager *_manager;
    NSArray *_gameList;
    NSMutableArray *_trackArray;
    UILabel *_sectionLabel;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWERadarGameManager *manager;
@property (copy, nonatomic) NSArray *gameList;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *trackArray;
@property (retain, nonatomic) UILabel *sectionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameList;
- (void)setGameList:(id)arg0;
- (void)updateContentHeight;
- (void)fetchGameList:(id /* block */)arg0;
- (id)sectionLabel;
- (void)transToGameCall;
- (void)setSectionLabel:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (double)contentHeight;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setManager:(id)arg0;
- (void)viewDidLoad;
- (id)manager;
- (void)setContentHeight:(double)arg0;
- (double)cellWidth;
- (void)setTrackArray:(id)arg0;
- (id)trackArray;

@end