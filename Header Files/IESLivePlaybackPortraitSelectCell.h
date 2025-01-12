//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESLivePlaybackPortraitSelectCell : UITableViewCell {
    UILabel *_titleLabel;
    UIView *_customView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *customView;

+ (id)identifier;

- (void)updateData:(id)arg0 selected:(BOOL)arg1;
- (void)updateAttributedData:(id)arg0 selected:(BOOL)arg1;
- (void)updateWithView:(id)arg0 selected:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setup;
- (id)customView;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)setCustomView:(id)arg0;

@end
