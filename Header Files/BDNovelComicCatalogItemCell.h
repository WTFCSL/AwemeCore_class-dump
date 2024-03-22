//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, BDNovelComicItem;

@interface BDNovelComicCatalogItemCell : UITableViewCell {
    BOOL _isCurrent;
    UIImageView *_coverImageView;
    UIView *_placeView;
    UIImageView *_placeImageView;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UIImageView *_viewIcon;
    UIImageView *_lockIcon;
    BDNovelComicItem *_item;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *placeView;
@property (retain, nonatomic) UIImageView *placeImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *viewIcon;
@property (retain, nonatomic) UIImageView *lockIcon;
@property (nonatomic) BOOL isCurrent;
@property (retain, nonatomic) BDNovelComicItem *item;

- (void)setPlaceView:(id)arg0;
- (id)placeView;
- (void)setPlaceImageView:(id)arg0;
- (id)placeImageView;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setViewIcon:(id)arg0;
- (void)setLockIcon:(id)arg0;
- (id)viewIcon;
- (id)lockIcon;
- (void)setDarkMode:(BOOL)arg0 isCurrent:(BOOL)arg1;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (BOOL)isCurrent;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)layoutSubviews;
- (void)setItem:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setIsCurrent:(BOOL)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end
