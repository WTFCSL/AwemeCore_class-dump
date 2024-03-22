//
//     Generated by private class-dump
//

@class IESLivePaidQueueTabView, IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveInteractivePanelHeaderTipsView : UITableViewHeaderFooterView {
    BOOL _sortByTime;
    BOOL _isAnchor;
    BOOL _hasLinkPaidGuidence;
    BOOL _showPaidQueueTabSortView;
    BOOL _sortTypeContainerViewIsIndicate;
    BOOL _showSortTypeContainerViewOriginal;
    BOOL _disabledSort;
    BOOL _isPaidLinkmic;
    BOOL _isMultiAddPriceEnabled;
    BOOL _isInAddPriceSection;
    BOOL _someOneAddPrice;
    UIView *_guideTipsContainerView;
    UIView *_indicateTipsContainerView;
    UIView *_sortTypeContainerView;
    UIView *_switchSortTypeResponseArea;
    id /* block */ _didTapConfirmBlock;
    id /* block */ _didTapCloseBlock;
    id /* block */ _didTapSwitchSortMethodButton;
    id /* block */ _didTapCloseGuideBlock;
    id /* block */ _didTapOpenPaidLinkBlock;
    id /* block */ _didSelectedTabCallback;
    UIView *_normalContentView;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    UIButton *_closeButton;
    UIView *_lineView;
    UIImageView *_indicatorIcon;
    UILabel *_contentLabel;
    UILabel *_sortLeftLabel;
    UILabel *_sortLabel;
    UIImageView *_switchIcon;
    IESLivePaidQueueTabView *_tabContainerView;
    IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader *_linkPaidGuideLabel;
    double _sortContainerLeftMargin;
}

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *indicatorIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *sortLeftLabel;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *switchIcon;
@property (retain, nonatomic) IESLivePaidQueueTabView *tabContainerView;
@property (retain, nonatomic) IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader *linkPaidGuideLabel;
@property (nonatomic) BOOL sortTypeContainerViewIsIndicate;
@property (nonatomic) BOOL showSortTypeContainerViewOriginal;
@property (nonatomic) BOOL disabledSort;
@property (nonatomic) double sortContainerLeftMargin;
@property (nonatomic) BOOL isPaidLinkmic;
@property (nonatomic) BOOL isMultiAddPriceEnabled;
@property (nonatomic) BOOL isInAddPriceSection;
@property (nonatomic) BOOL someOneAddPrice;
@property (retain, nonatomic) UIView *guideTipsContainerView;
@property (retain, nonatomic) UIView *indicateTipsContainerView;
@property (retain, nonatomic) UIView *sortTypeContainerView;
@property (retain, nonatomic) UIView *switchSortTypeResponseArea;
@property (copy, nonatomic) id /* block */ didTapConfirmBlock;
@property (copy, nonatomic) id /* block */ didTapCloseBlock;
@property (nonatomic) BOOL sortByTime;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ didTapSwitchSortMethodButton;
@property (copy, nonatomic) id /* block */ didTapCloseGuideBlock;
@property (copy, nonatomic) id /* block */ didTapOpenPaidLinkBlock;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) BOOL showPaidQueueTabSortView;
@property (copy, nonatomic) id /* block */ didSelectedTabCallback;

- (void)setIsAnchor:(BOOL)arg0;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg0;
- (id)sortLabel;
- (void)setSortLabel:(id)arg0;
- (void)updateSelectedTab:(unsigned long long)arg0;
- (void)setIndicatorIcon:(id)arg0;
- (id)normalContentView;
- (void)setNormalContentView:(id)arg0;
- (BOOL)sortByTime;
- (void)setDidTapCloseBlock:(id /* block */)arg0;
- (id /* block */)didTapCloseBlock;
- (BOOL)isPaidLinkmic;
- (void)didTapConfirmButton;
- (void)setSortByTime:(BOOL)arg0;
- (void)setGuideTipsContainerView:(id)arg0;
- (id)guideTipsContainerView;
- (void)setIndicateTipsContainerView:(id)arg0;
- (id)indicateTipsContainerView;
- (void)setSortTypeContainerView:(id)arg0;
- (id)sortTypeContainerView;
- (void)setSortLeftLabel:(id)arg0;
- (void)setSwitchIcon:(id)arg0;
- (id /* block */)didTapConfirmBlock;
- (id)switchIcon;
- (void)setDidTapConfirmBlock:(id /* block */)arg0;
- (id)sortLeftLabel;
- (void)setIsPaidLinkmic:(BOOL)arg0;
- (BOOL)hasLinkPaidGuidence;
- (void)setHasLinkPaidGuidence:(BOOL)arg0;
- (void)updateNormalWaitingCount:(long long)arg0 paidWaitingCount:(long long)arg1;
- (void)setDidSelectedTabCallback:(id /* block */)arg0;
- (BOOL)disabledSort;
- (void)setDisabledSort:(BOOL)arg0;
- (void)showSortTypeWithIndicateTips:(BOOL)arg0 disabledSort:(BOOL)arg1;
- (void)updateIsPaidLinkmic:(BOOL)arg0 isInAddPriceSection:(BOOL)arg1 someOneAddPrice:(BOOL)arg2 isMultiAddPriceEnabled:(BOOL)arg3;
- (void)setDidTapCloseGuideBlock:(id /* block */)arg0;
- (void)setDidTapOpenPaidLinkBlock:(id /* block */)arg0;
- (void)setShowPaidQueueTabSortView:(BOOL)arg0;
- (void)updateNormalContentHidden:(BOOL)arg0 tabContainerHidden:(BOOL)arg1;
- (id)switchSortTypeResponseArea;
- (void)setDidTapSwitchSortMethodButton:(id /* block */)arg0;
- (id)linkPaidGuideLabel;
- (void)setSortContainerLeftMargin:(double)arg0;
- (void)setSwitchSortTypeResponseArea:(id)arg0;
- (id /* block */)didSelectedTabCallback;
- (void)setShowSortTypeContainerViewOriginal:(BOOL)arg0;
- (void)sortViewOnContainervertically;
- (void)p_resetSortTypeContainerViewConstraint;
- (double)sortContainerLeftMargin;
- (void)p_refreshSortViewUI;
- (void)setIsMultiAddPriceEnabled:(BOOL)arg0;
- (void)setIsInAddPriceSection:(BOOL)arg0;
- (void)setSomeOneAddPrice:(BOOL)arg0;
- (BOOL)isInAddPriceSection;
- (BOOL)isMultiAddPriceEnabled;
- (BOOL)someOneAddPrice;
- (BOOL)showSortTypeContainerViewOriginal;
- (BOOL)showPaidQueueTabSortView;
- (void)setSortTypeContainerViewIsIndicate:(BOOL)arg0;
- (id /* block */)didTapSwitchSortMethodButton;
- (id /* block */)didTapCloseGuideBlock;
- (id /* block */)didTapOpenPaidLinkBlock;
- (void)setLinkPaidGuideLabel:(id)arg0;
- (BOOL)sortTypeContainerViewIsIndicate;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)titleLabel;
- (void)onTapAction;
- (void)setTitleLabel:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (id)indicatorIcon;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)didTapCloseButton;
- (void)resetUI;
- (void)layoutUI;

@end
