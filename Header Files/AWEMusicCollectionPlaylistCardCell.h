//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEMusicCollectionPlaylistCardCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    UILabel *_nameLabel;
    UIImageView *_privateMarkView;
    UIImageView *_myFavoriteIcon;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *privateMarkView;
@property (retain, nonatomic) UIImageView *myFavoriteIcon;

+ (struct CGSize { double x0; double x1; })coverSize;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)configSubviews;
- (id)privateMarkView;
- (id)myFavoriteIcon;
- (void)refreshWithCoverImageUrl:(id)arg0 placeholderImage:(id)arg1 playlistName:(id)arg2 isPrivate:(BOOL)arg3 isInvalid:(BOOL)arg4 isFavorite:(BOOL)arg5;
- (void)resetToCreateCard;
- (void)setPrivateMarkView:(id)arg0;
- (void)setMyFavoriteIcon:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (id)initWithCoder:(id)arg0;
- (void)setNameLabel:(id)arg0;

@end
