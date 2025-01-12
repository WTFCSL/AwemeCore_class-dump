//
//     Generated by private class-dump
//

@class AFDRoundedView, NSString, UIView, AWEPublishAdvanceSettingsJoinMixItem, UIImageView, AWEPostPageMixManager, UILabel, NSIndexPath;
@protocol AWEPublishAdvanceSettingsCellDelegate;

@interface AWEPublishAdvanceSettingsJoinMixCell : UITableViewCell <AWEPostPageMixManagerProtocol, AWEPublishAdvanceSettingsCellProtocol> {
    BOOL _needUseCardUI;
    id<AWEPublishAdvanceSettingsCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    unsigned long long _cornerType;
    AWEPublishAdvanceSettingsJoinMixItem *_item;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UILabel *_introLabel;
    UIImageView *_arrowImageView;
    AFDRoundedView *_containerView;
    AWEPostPageMixManager *_manager;
}

@property (retain, nonatomic) AWEPublishAdvanceSettingsJoinMixItem *item;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (nonatomic) BOOL needUseCardUI;
@property (retain, nonatomic) AWEPostPageMixManager *manager;
@property (nonatomic) unsigned long long cornerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setupCorners;
- (void)setNeedUseCardUI:(BOOL)arg0;
- (BOOL)needUseCardUI;
- (void)showBottomLine:(BOOL)arg0;
- (void)onCellClicked;
- (void)updateViewWithControlEnabled:(BOOL)arg0;
- (void)updateWithMixInfo:(id)arg0;
- (void)updateWithMixModel:(id)arg0;
- (void)cancelJoinMix;
- (void)AWEPostPageMixManager:(id)arg0 currentMixDidChangeWith:(id)arg1 placeHolder:(id)arg2;
- (void)AWEPostPageMixManager:(id)arg0 needRefreshCreateTitleWithPlaceHolder:(id)arg1;
- (id)currentPublishConfig;
- (void)p_updateUIWith:(id)arg0;
- (void)mixInformationDidTappedIndex:(long long)arg0 mix:(id)arg1;
- (void)setupManager;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setIndexPath:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)indexPath;
- (id)delegate;
- (id)containerView;
- (void)setManager:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (id)manager;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (id)introLabel;
- (void)setIntroLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
