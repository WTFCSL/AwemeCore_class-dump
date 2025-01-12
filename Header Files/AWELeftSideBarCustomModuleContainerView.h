//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarCustomModuleHeaderView, AWELeftSideBarCustomModuleItemDataModel, UIView;
@protocol AWELeftSideBarItemContext, AWELeftSideBarCustomModuleDetailViewProtocol;

@interface AWELeftSideBarCustomModuleContainerView : UIView <AWELeftSideBarStencilCustomModuleViewProtocol> {
    id<AWELeftSideBarItemContext> _context;
    AWELeftSideBarCustomModuleItemDataModel *_model;
    AWELeftSideBarCustomModuleHeaderView *_headerView;
    UIView *_contentView;
    UIView<AWELeftSideBarCustomModuleDetailViewProtocol> *_detailView;
}

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarCustomModuleItemDataModel *model;
@property (retain, nonatomic) AWELeftSideBarCustomModuleHeaderView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<AWELeftSideBarCustomModuleDetailViewProtocol> *detailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)arg0;
- (BOOL)leftSideBarRedDotIsShow;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)arg0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0 withMaxCount:(unsigned long long)arg1;
- (long long)leftSideBarRedDotStyle;
- (double)leftSideBarCustomModuleDetailViewWidth;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0;
- (id)contentDetailView;
- (void)updateListCellContext:(id)arg0 withDataModel:(id)arg1;
- (void)setSubTitleClickBlock:(id /* block */)arg0;
- (id)initWithContext:(id)arg0 withDataModel:(id)arg1 withDetailView:(id)arg2;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setHeaderView:(id)arg0;
- (id)contentView;
- (id)context;
- (void)layoutSubviews;
- (id)headerView;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)detailView;
- (void)setDetailView:(id)arg0;

@end
