//
//     Generated by private class-dump
//

@class AWEAnchorCellConfig, NSString, UIImageView, UILabel, AWEAnchorAdditionCellModel, UIButton;

@interface AWEAnchorAdditionBaseCell : UITableViewCell <AWEAnchorAdditionCellProtocol> {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_markLabel;
    UIButton *_addButton;
    AWEAnchorAdditionCellModel *_cellModel;
    id /* block */ _addBlock;
    id /* block */ _deleteBlock;
    AWEAnchorCellConfig *_cellConfig;
    UIButton *_deleteButton;
}

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) AWEAnchorAdditionCellModel *cellModel;
@property (copy, nonatomic) id /* block */ addBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (retain, nonatomic) AWEAnchorCellConfig *cellConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorAdditionCellIdentifier;
+ (double)anchorAdditionCellForHeight;

- (void)setCellModel:(id)arg0;
- (id)cellConfig;
- (id)markLabel;
- (void)setMarkLabel:(id)arg0;
- (void)setupUIConfig;
- (void)addAnchorTapped:(id)arg0;
- (id)customAddButton:(id)arg0;
- (void)deleteAnchorTapped:(id)arg0;
- (void)updateUIWithCellModel:(id)arg0 editMode:(BOOL)arg1;
- (BOOL)shouldShowMarkWithCellModel:(id)arg0;
- (void)updateUIWithCellModel:(id)arg0;
- (void)setAddBlock:(id /* block */)arg0;
- (void)setDeleteBlock:(id /* block */)arg0;
- (void)setCellConfig:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)deleteButton;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupSubviews;
- (id)addButton;
- (id)cellModel;
- (void)setAddButton:(id)arg0;
- (id /* block */)deleteBlock;
- (id /* block */)addBlock;

@end
