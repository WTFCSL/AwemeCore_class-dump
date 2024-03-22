//
//     Generated by private class-dump
//

@class AWEDitoPOIFavoritePageContext, UIImageView, AWEDitoPOIFavoriteListCoverContainer, UILabel, AWEDitoPOIFavoriteListCellComponentViewModel, YYLabel;

@interface AWEDitoPOIFavoriteListCellComponentView : DitoComponentView {
    AWEDitoPOIFavoriteListCellComponentViewModel *_viewModel;
    UILabel *_listNameLabel;
    UILabel *_authorNameLabel;
    UILabel *_descLabel;
    UILabel *_collectTimeLabel;
    UIImageView *_avatarView;
    AWEDitoPOIFavoriteListCoverContainer *_container;
    YYLabel *_cornerLabel;
}

@property (weak, nonatomic) AWEDitoPOIFavoriteListCellComponentViewModel *viewModel;
@property (retain, nonatomic) UILabel *listNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *collectTimeLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEDitoPOIFavoriteListCoverContainer *container;
@property (retain, nonatomic) YYLabel *cornerLabel;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)cornerLabel;
- (void)setCornerLabel:(id)arg0;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (void)updateViewModel:(id)arg0;
- (void)updateUILayout;
- (id)collectTimeLabel;
- (void)discriminateProfileScene;
- (void)setCollectTimeLabel:(id)arg0;
- (id)listNameLabel;
- (void)didSelected;
- (void)setListNameLabel:(id)arg0;
- (id)container;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)layoutSublayersOfLayer:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (void)setupUI;

@end