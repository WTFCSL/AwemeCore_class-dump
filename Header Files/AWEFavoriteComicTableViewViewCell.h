//
//     Generated by private class-dump
//

@class AWENovelModel, UIImageView, NSString, DUXActionSheet, UILabel, AWEUserModel;
@protocol AWEFavoriteComicTableViewViewCellDelegate;

@interface AWEFavoriteComicTableViewViewCell : UITableViewCell <DUXActionSheetDelegate, UIGestureRecognizerDelegate> {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    id<AWEFavoriteComicTableViewViewCellDelegate> _delegate;
    AWEUserModel *_user;
    AWENovelModel *_model;
    DUXActionSheet *_actionSheet;
}

@property (retain, nonatomic) AWENovelModel *model;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) id<AWEFavoriteComicTableViewViewCellDelegate> delegate;
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
- (void)addLongPressGesture;
- (BOOL)isEnableLongPressToDelete;
- (void)onCellLongPressed:(id)arg0;
- (id)initWithCellStyle:(long long)arg0 reuseIdentifier:(id)arg1;
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
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;

@end