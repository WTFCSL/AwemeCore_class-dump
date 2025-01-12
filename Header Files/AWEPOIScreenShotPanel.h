//
//     Generated by private class-dump
//

@class AWEPOIScreenShootPanelSheet, NSArray, UIImageView, UIImage, UILabel, UIView, AWEPOICollectObject;

@interface AWEPOIScreenShotPanel : UIViewController {
    BOOL _isFavorited;
    AWEPOIScreenShootPanelSheet *_sheet;
    id /* block */ _onFavoriteBlock;
    UIImage *_image;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_itemContainerView;
    NSArray *_itemViews;
    AWEPOICollectObject *_collectObject;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *itemContainerView;
@property (copy, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (nonatomic) BOOL isFavorited;
@property (weak, nonatomic) AWEPOIScreenShootPanelSheet *sheet;
@property (copy, nonatomic) id /* block */ onFavoriteBlock;

- (void)setIsFavorited:(BOOL)arg0;
- (void)setItemContainerView:(id)arg0;
- (id)collectObject;
- (void)setCollectObject:(id)arg0;
- (void)shareToIMMessage;
- (void)shareToWechat;
- (void)onTapFavorite;
- (id /* block */)onFavoriteBlock;
- (void)setOnFavoriteBlock:(id /* block */)arg0;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)setImage:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)itemContainerView;
- (id)itemViews;
- (void)setItemViews:(id)arg0;
- (BOOL)isFavorited;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
