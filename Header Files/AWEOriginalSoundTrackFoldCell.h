//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEOriginalSoundTrackFoldCell : UITableViewCell {
    BOOL _folded;
    long long _foldNumber;
    id /* block */ _foldAction;
    UILabel *_titleLabel;
    UIImageView *_foldIcon;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *foldIcon;
@property (readonly, nonatomic, getter=isFolded) BOOL folded;
@property (nonatomic) long long foldNumber;
@property (copy, nonatomic) id /* block */ foldAction;

+ (double)recommendHeight;

- (void)setFolded:(BOOL)arg0;
- (id)foldIcon;
- (id /* block */)foldAction;
- (void)setFoldNumber:(long long)arg0;
- (void)updateFoldedState:(BOOL)arg0 animated:(BOOL)arg1;
- (void)foldButtonClicked:(id)arg0;
- (long long)foldNumber;
- (void)setFoldAction:(id /* block */)arg0;
- (void)setFoldIcon:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isFolded;

@end
