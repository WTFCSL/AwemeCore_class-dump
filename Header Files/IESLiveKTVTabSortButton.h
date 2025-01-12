//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESLiveKTVTabSortButton : UIView {
    BOOL _isShowingTable;
    id /* block */ _didClickSortButton;
    UILabel *_label;
    UIImageView *_arrowImageView;
    UIImageView *_sortIcon;
    long long _listType;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *sortIcon;
@property (nonatomic) long long listType;
@property (nonatomic) BOOL isShowingTable;
@property (copy, nonatomic) id /* block */ didClickSortButton;

- (void)p_setupUI;
- (id)sortIcon;
- (void)setSortIcon:(id)arg0;
- (void)p_bindAction;
- (void)updateSortButtonLabelWithString:(id)arg0;
- (void)setDidClickSortButton:(id /* block */)arg0;
- (void)setIsShowingTable:(BOOL)arg0;
- (void)p_updateArrowImage;
- (void)p_didClickSortIcon;
- (id /* block */)didClickSortButton;
- (BOOL)isShowingTable;
- (id)init;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)label;
- (long long)listType;
- (void)setListType:(long long)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (void)clean;

@end
