//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;
@protocol AWENaviBackgroundProtocol;

@interface AWENaviDuetModifyBackgroundPanelCell : UICollectionViewCell {
    BOOL _selectedCell;
    id<AWENaviBackgroundProtocol> _model;
    UIView *_borderView;
    UILabel *_thumbnailLabel;
    UIImageView *_thumbnailImageView;
    UIImageView *_cornerIconImageView;
}

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *thumbnailLabel;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIImageView *cornerIconImageView;
@property (nonatomic, getter=isSelectedCell) BOOL selectedCell;
@property (retain, nonatomic) id<AWENaviBackgroundProtocol> model;

- (id)cornerIconImageView;
- (void)resetCornerImageView;
- (BOOL)isSelectedCell;
- (void)showNewCornerIcon;
- (void)setCornerIconImageView:(id)arg0;
- (id)thumbnailLabel;
- (void)setThumbnailLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)setupSubviews;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (id)thumbnailImageView;
- (void)setThumbnailImageView:(id)arg0;
- (void)setSelectedCell:(BOOL)arg0;

@end