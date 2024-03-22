//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UIView, POIMediaListPageContext;
@protocol AWEUILoadingViewProtocol;

@interface POIMediaAlbumCollectionViewCell : UICollectionViewCell {
    POIMediaListPageContext *_context;
    UIImageView *_imageView;
    UIImage *_placeholderImage;
    UIView<AWEUILoadingViewProtocol> *_loadingView;
    UIImageView *_backgroundImageView;
    NSString *_backgroundImageURL;
    struct CGSize { double width; double height; } _placeholderSize;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (nonatomic) struct CGSize { double width; double height; } placeholderSize;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (weak, nonatomic) POIMediaListPageContext *context;

- (void)resetLoadingView;
- (void)configWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setPlaceholderSize:(struct CGSize { double x0; double x1; })arg0;
- (id)placeholderImage;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)backgroundImageView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)context;
- (void)prepareForReuse;
- (void)setPlaceholderImage:(id)arg0;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (struct CGSize { double x0; double x1; })placeholderSize;
- (id)backgroundImageURL;
- (void)setBackgroundImageURL:(id)arg0;

@end