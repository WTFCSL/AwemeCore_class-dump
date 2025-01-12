//
//     Generated by private class-dump
//

@class UIColor, UIImageView, IESLiveSoloKTVMVListItemModel, UILabel, IESLiveSoloKTVLoadingUtil;

@interface IESLiveSoloKTVMVListViewCell : UICollectionViewCell {
    UIImageView *_coverIV;
    UIImageView *_downloadIV;
    IESLiveSoloKTVLoadingUtil *_loadingUtil;
    UILabel *_titleLabel;
    UIColor *_selectedColor;
    UIColor *_normalColor;
    IESLiveSoloKTVMVListItemModel *_model;
}

@property (retain, nonatomic) UIImageView *coverIV;
@property (retain, nonatomic) UIImageView *downloadIV;
@property (retain, nonatomic) IESLiveSoloKTVLoadingUtil *loadingUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) IESLiveSoloKTVMVListItemModel *model;

- (void)dismissLoading;
- (void)setCoverIV:(id)arg0;
- (id)coverIV;
- (void)initView;
- (void)updateSelected:(BOOL)arg0;
- (void)updateDownloadStatus;
- (id)downloadIV;
- (void)initViewIfNeed:(id)arg0;
- (id)loadingUtil;
- (void)setDownloadIV:(id)arg0;
- (void)setLoadingUtil:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg0;
- (id)normalColor;
- (void)setNormalColor:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)updateModel:(id)arg0;
- (void)showLoading;

@end
