//
//     Generated by private class-dump
//

@class IESLiveAssociateHeadVideoFoundationDetailViewModel, NSString, UICollectionView, IGListAdapter, UILabel, UIView, UIButton;

@interface IESLiveAssociateHeadVideoFounctionDetailView : UIView <UICollectionViewDelegate, UITextViewDelegate, IGListAdapterDataSource> {
    BOOL _firstShow;
    id /* block */ _dismissBlock;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_backIcon;
    UIView *_lineDescLabel;
    UIView *_bottomView;
    UILabel *_desLabel;
    UIButton *_actionButton;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IESLiveAssociateHeadVideoFoundationDetailViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backIcon;
@property (retain, nonatomic) UIView *lineDescLabel;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailViewModel *viewModel;
@property (nonatomic) BOOL firstShow;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionButtonClicked:(id)arg0;
- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (id)desLabel;
- (void)setDesLabel:(id)arg0;
- (void)setFirstShow:(BOOL)arg0;
- (BOOL)firstShow;
- (void)setBackIcon:(id)arg0;
- (id)backIcon;
- (id)listAdapter;
- (void)setListAdapter:(id)arg0;
- (void)trackEvent:(id)arg0 isFirstShow:(BOOL)arg1;
- (id)lineDescLabel;
- (void)tapBackIcon;
- (id)initWithViewModel:(id)arg0 isFirst:(BOOL)arg1;
- (void)showWithItemData:(BOOL)arg0;
- (void)setLineDescLabel:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)bottomView;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setupSubviews;
- (void)setBottomView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
