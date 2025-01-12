//
//     Generated by private class-dump
//

@class NSString, DUXActionSheet, AWEUserModel, UIImageView, UIButton, AWENovelModel, DUXButton, UILabel;
@protocol AWEFavoriteNovelTableViewStyle2CellDelegate;

@interface AWEFavoriteNovelTableViewStyle2Cell : UITableViewCell <DUXActionSheetDelegate, UIGestureRecognizerDelegate> {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_infoLabel;
    id<AWEFavoriteNovelTableViewStyle2CellDelegate> _delegate;
    AWEUserModel *_user;
    DUXButton *_enableButton;
    UIButton *_disableButton;
    UIImageView *_tipInvisibleIcon;
    AWENovelModel *_model;
    DUXActionSheet *_actionSheet;
}

@property (retain, nonatomic) DUXButton *enableButton;
@property (retain, nonatomic) UIButton *disableButton;
@property (retain, nonatomic) UIImageView *tipInvisibleIcon;
@property (retain, nonatomic) AWENovelModel *model;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) id<AWEFavoriteNovelTableViewStyle2CellDelegate> delegate;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellHeight;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (double)coverImageHeight;
- (void)configWithTitleText:(id)arg0 secondLineText:(id)arg1 thirdLineText:(id)arg2;
- (void)configWithTitleText:(id)arg0 secondLineText:(id)arg1;
- (void)addLongPressGesture;
- (BOOL)isEnableLongPressToDelete;
- (void)onCellLongPressed:(id)arg0;
- (id)initWithCellStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)disableButton;
- (id)tipInvisibleIcon;
- (void)setDisableButton:(id)arg0;
- (void)setTipInvisibleIcon:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setModel:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;
- (id)enableButton;
- (void)setEnableButton:(id)arg0;

@end
