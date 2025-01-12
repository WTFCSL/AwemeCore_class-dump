//
//     Generated by private class-dump
//

@class ACCSlidesCropInfo, NSArray, UICollectionView, NSString, UILabel, UIButton;
@protocol ACCSliesCropControlDelegate;

@interface ACCSlidesCropControlView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    id<ACCSliesCropControlDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIButton *_confirmButton;
    UICollectionView *_ratioCollectionView;
    NSArray *_dataSource;
    ACCSlidesCropInfo *_cropInfo;
    long long _selectedIndex;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UICollectionView *ratioCollectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ACCSlidesCropInfo *cropInfo;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<ACCSliesCropControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (void)handleCloseAction:(id)arg0;
- (BOOL)croppingImageIsDragging;
- (id)ratioCollectionView;
- (id)p_modelFromDictionay:(id)arg0;
- (void)setRatioCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)initWithData:(id)arg0;
- (long long)selectedIndex;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)cropInfo;
- (void)handleConfirmAction:(id)arg0;
- (void)setCropInfo:(id)arg0;

@end
