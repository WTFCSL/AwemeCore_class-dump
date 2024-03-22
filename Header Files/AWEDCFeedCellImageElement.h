//
//     Generated by private class-dump
//

@class UIImageView, AWEDCFeedCellImageElementGenreResource, UIView;
@protocol AWEDCFeedCellImageElementResourceViewProtocol;

@interface AWEDCFeedCellImageElement : AWEDCFeedBaseCellElement {
    UIImageView *_coverImageView;
    UIImageView *_failedImageView;
    UIView *_maskView;
    UIView<AWEDCFeedCellImageElementResourceViewProtocol> *_resourceViewLeftTop;
    UIView<AWEDCFeedCellImageElementResourceViewProtocol> *_resourceViewRightTop;
    UIView<AWEDCFeedCellImageElementResourceViewProtocol> *_resourceViewLeftBottom;
    UIView<AWEDCFeedCellImageElementResourceViewProtocol> *_resourceViewRightBottom;
    AWEDCFeedCellImageElementGenreResource *_genreResource;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView<AWEDCFeedCellImageElementResourceViewProtocol> *resourceViewLeftTop;
@property (retain, nonatomic) UIView<AWEDCFeedCellImageElementResourceViewProtocol> *resourceViewRightTop;
@property (retain, nonatomic) UIView<AWEDCFeedCellImageElementResourceViewProtocol> *resourceViewLeftBottom;
@property (retain, nonatomic) UIView<AWEDCFeedCellImageElementResourceViewProtocol> *resourceViewRightBottom;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResource *genreResource;

+ (BOOL)canShowWithAwemeModel:(id)arg0 context:(id)arg1;
+ (double)heightWithCellWidth:(double)arg0 awemeModel:(id)arg1 context:(id)arg2;
+ (long long)elementStyle;
+ (double)imageDisplayRatioWithSize:(struct CGSize { double x0; double x1; })arg0;

- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (void)setupSubViews;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)themeDidChange:(long long)arg0;
- (void)configWithModel:(id)arg0 context:(id)arg1;
- (id)cellImageBackgroundColor;
- (id)failedImageView;
- (void)resetResourceView;
- (id)resourceViewLeftTop;
- (id)resourceViewRightTop;
- (id)resourceViewLeftBottom;
- (id)resourceViewRightBottom;
- (void)setResourceViewLeftTop:(id)arg0;
- (void)setResourceViewRightTop:(id)arg0;
- (void)setResourceViewLeftBottom:(id)arg0;
- (void)setResourceViewRightBottom:(id)arg0;
- (void)addResourceViewIfNeededWithConfig:(id)arg0 position:(long long)arg1 awemeModel:(id)arg2 context:(id)arg3;
- (id)resourceViewFromPosition:(long long)arg0;
- (void)setGenreResource:(id)arg0;
- (id)genreResource;
- (void)setResourceView:(id)arg0 position:(long long)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithPosition:(long long)arg0 horizontalMargin:(double)arg1 verticalMargin:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)loadCoverImageView;
- (void)addMaskViewIfNeededWithModel:(id)arg0 context:(id)arg1;
- (void)addResourceViewIfNeededWithModel:(id)arg0 context:(id)arg1;
- (void)setFailedImageView:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)maskView;
- (void)reset;
- (void)setMaskView:(id)arg0;

@end