//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSIndexPath, UIButton;

@interface IESLiveSearchPlaceholderHistoryTableViewCell : UITableViewCell {
    NSIndexPath *_indexPath;
    id /* block */ _deleteBlock;
    UIButton *_deleteButton;
    UIImageView *_clockImageView;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ deleteBlock;

+ (id)reuseIdentify;
+ (double)cellHeight;

- (void)configureUI;
- (void)setDeleteBlock:(id /* block */)arg0;
- (void)configureWithHistoryWord:(id)arg0;
- (id)clockImageView;
- (void)setClockImageView:(id)arg0;
- (BOOL)isNewFeedDrawStyle;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (id)indexPath;
- (id)deleteButton;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)deleteButtonTapped;
- (id /* block */)deleteBlock;

@end
