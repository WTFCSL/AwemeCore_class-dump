//
//     Generated by private class-dump
//

@class UIColor, NSArray, UICollectionView, NSString, NSNumber;
@protocol AWESearchBarCapsuleViewDelegate;

@interface AWESearchBarCapsuleView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id<AWESearchBarCapsuleViewDelegate> _delegate;
    NSNumber *_capsuleCornerRadius;
    UIColor *_capsuleBkgColor;
    NSString *_iconName;
    UIColor *_capsuleTextColor;
    UICollectionView *_collectionView;
    NSArray *_dataSource;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<AWESearchBarCapsuleViewDelegate> delegate;
@property (retain, nonatomic) NSNumber *capsuleCornerRadius;
@property (retain, nonatomic) UIColor *capsuleBkgColor;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIColor *capsuleTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTexts:(id)arg0;
- (void)setCapsuleTextColor:(id)arg0;
- (void)setCapsuleBkgColor:(id)arg0;
- (void)setCapsuleCornerRadius:(id)arg0;
- (id)capsuleCornerRadius;
- (id)capsuleBkgColor;
- (id)capsuleTextColor;
- (void)capsuleDidTap:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)iconName;
- (void)setIconName:(id)arg0;
- (void)setDelegate:(id)arg0;

@end