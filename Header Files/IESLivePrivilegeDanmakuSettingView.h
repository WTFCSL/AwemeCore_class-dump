//
//     Generated by private class-dump
//

@class IESLivePrivilegeDanmakuSettingViewModel, UICollectionView, UILabel, UICollectionViewFlowLayout;

@interface IESLivePrivilegeDanmakuSettingView : UIView {
    BOOL _isAdmin;
    IESLivePrivilegeDanmakuSettingViewModel *_viewModel;
    id /* block */ _contentDidUpdated;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    long long _shadowType;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) long long shadowType;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *viewModel;
@property (copy, nonatomic) id /* block */ contentDidUpdated;

- (void)setIsAdmin:(BOOL)arg0;
- (id /* block */)contentDidUpdated;
- (void)setContentDidUpdated:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg0;
- (long long)shadowType;
- (BOOL)isAdmin;
- (void)setShadowType:(long long)arg0;

@end
