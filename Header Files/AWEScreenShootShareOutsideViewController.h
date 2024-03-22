//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, AWEScreenShootShareViewModel, NSMutableArray;

@interface AWEScreenShootShareOutsideViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    NSMutableArray *_items;
    UICollectionView *_collectionView;
    NSArray *_dataArray;
    AWEScreenShootShareViewModel *_screenShootShareVM;
    NSMutableArray *_gestureRecognizers;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) AWEScreenShootShareViewModel *screenShootShareVM;
@property (retain, nonatomic) NSMutableArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareOutsidePanelViewController:(id)arg0;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_titleForColoseButton;
- (void)setScreenShootShareVM:(id)arg0;
- (id)screenShootShareVM;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)gestureRecognizers;
- (void)setItems:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setUpCollectionView;
- (void)setGestureRecognizers:(id)arg0;
- (void)viewDidLoad;
- (id)dataArray;
- (void)setDataArray:(id)arg0;
- (void)setUpUI;

@end
