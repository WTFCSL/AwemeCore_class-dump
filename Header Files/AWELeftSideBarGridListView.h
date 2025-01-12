//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWELeftSideBarListCellDataModel, UILabel, DUXBadge;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarGridListView : UIView <AWELeftSideBarStencilViewProtocol> {
    id<AWELeftSideBarItemContext> _context;
    AWELeftSideBarListCellDataModel *_cellDataModel;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    DUXBadge *_redDotView;
    DUXBadge *_subTitleView;
    DUXBadge *_unreadCountView;
    long long _themeStyle;
}

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXBadge *redDotView;
@property (retain, nonatomic) DUXBadge *subTitleView;
@property (retain, nonatomic) DUXBadge *unreadCountView;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELeftSideBarCommonAdapterClass;

- (void)setThemeStyle:(long long)arg0;
- (BOOL)enableBigFontMode;
- (id)redDotView;
- (void)setRedDotView:(id)arg0;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)setSubTitleView:(id)arg0;
- (id)subTitleView;
- (void)setCellDataModel:(id)arg0;
- (void)updateListCellContext:(id)arg0 cellDataModel:(id)arg1;
- (id)cellDataModel;
- (BOOL)leftSideBarRedDotIsShow;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)arg0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0 withMaxCount:(unsigned long long)arg1;
- (long long)leftSideBarRedDotStyle;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0;
- (void)setUnreadCountView:(id)arg0;
- (id)unreadCountView;
- (void)setUpIconViewImageWithUrl:(id)arg0 themeStyle:(long long)arg1;
- (id)supportSubTitleBussinessArray;
- (double)widthForLabelStr:(id)arg0;
- (double)getGridMaxWidthSetting;
- (void)handleViewShow:(long long)arg0;
- (id)aAWELeftSideBarCommonAdapter;
- (id)initWithContext:(id)arg0 cellDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)iconView;
- (void)setContext:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)context;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (long long)themeStyle;

@end
