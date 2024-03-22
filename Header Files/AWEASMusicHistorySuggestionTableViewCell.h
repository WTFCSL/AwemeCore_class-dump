//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;

@interface AWEASMusicHistorySuggestionTableViewCell : UITableViewCell {
    id /* block */ _deleteBtnClickCallback;
    NSString *_query;
    UIImageView *_iconView;
    UILabel *_displayLabel;
    UIButton *_deleteButton;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *displayLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ deleteBtnClickCallback;
@property (copy, nonatomic) NSString *query;

+ (id)identifier;

- (void)switchDarkMode;
- (void)configWithQuery:(id)arg0 iconImageName:(id)arg1 deleteButtonImageName:(id)arg2;
- (id /* block */)deleteBtnClickCallback;
- (void)handleDeleteButtonClick:(id)arg0;
- (void)configFindMoreMusicCell;
- (void)configMusicSearchHistoryCellWithMusicTitle:(id)arg0;
- (void)setDeleteBtnClickCallback:(id /* block */)arg0;
- (id)displayLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (void)setDisplayLabel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)deleteButton;
- (id)query;
- (void)layoutSubviews;
- (void)setQuery:(id)arg0;

@end
