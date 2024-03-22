//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImageView, UICollectionView, UIView, UILabel, MASConstraint;

@interface LiveMessageListPinnedCellContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLabelCollectionViewLayoutDataSource, IESLivePluginLayoutViewAdapter> {
    UIView *_bgView;
    UIImageView *_iconImageView;
    UICollectionView *_labelCollectionView;
    UILabel *_stringLabel;
    UILabel *_tipsLabel;
    NSArray *_titleArray;
    MASConstraint *_stringLabelBottomConstraint;
    double _scale;
}

@property (weak, nonatomic) UIView *bgView;
@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UICollectionView *labelCollectionView;
@property (weak, nonatomic) UILabel *stringLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) MASConstraint *stringLabelBottomConstraint;
@property (nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForNode:(id)arg0;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)refreshWith:(id)arg0;
- (id)titleArray;
- (void)setTitleArray:(id)arg0;
- (void)attachTipsView;
- (id)stringLabel;
- (id)labelCollectionView;
- (BOOL)needNewBackground:(id)arg0;
- (BOOL)isAnchor:(id)arg0;
- (void)refreshConstraintsWithMaxLayoutWidth:(double)arg0;
- (id)stringLabelBottomConstraint;
- (void)setStringLabelBottomConstraint:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewLayout:(id)arg0 sizeForItemAtIndexPath:(id)arg1;
- (void)collectionViewLayout:(id)arg0 validateContentSize:(struct CGSize { double x0; double x1; })arg1;
- (long long)numberOfLineInSection:(long long)arg0;
- (void)setLabelCollectionView:(id)arg0;
- (void)setStringLabel:(id)arg0;
- (id)init;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (double)scale;
- (id)viewType;
- (void)setScale:(double)arg0;
- (id)iconImageView;
- (void)loadView;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;

@end