//
//     Generated by private class-dump
//

@class UIView;

@interface AWEShareDetailWithQRCodeUrlContentView : AWEShareDetailWithQRCodeBaseContentView {
    BOOL _showsSecondLine;
    UIView *_textContainerView;
    unsigned long long _coverImageSizeType;
}

@property (retain, nonatomic) UIView *textContainerView;
@property (nonatomic) unsigned long long coverImageSizeType;
@property (nonatomic) BOOL showsSecondLine;

+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;

- (struct CGSize { double x0; double x1; })saveImageSize;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (id)imageToSaveToAlbum;
- (void)syncContentFrom:(id)arg0;
- (void)updateSubviewsForGenerateImage;
- (BOOL)showsSecondLine;
- (unsigned long long)coverImageSizeType;
- (double)coverImageViewHeight;
- (void)setShowsSecondLine:(BOOL)arg0;
- (void)setCoverImageSizeType:(unsigned long long)arg0;
- (void)updateUIConstraints;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setUpSubviews;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg0;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
