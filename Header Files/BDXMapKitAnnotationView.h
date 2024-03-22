//
//     Generated by private class-dump
//

@class UIColor, UIImageView, NSURL, UILabel, NSMutableArray;

@interface BDXMapKitAnnotationView : MKAnnotationView {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _downloadImageLeaveMutex;
    BOOL _isFoldedContent;
    NSURL *_imageURL;
    long long _zIndex;
    unsigned long long _contentAlignment;
    unsigned long long _imageGroupMode;
    double _contentOffset;
    UIColor *_contentShadowColor;
    double _angle;
    UIImageView *_imageView;
    UILabel *_contentLabel;
    NSMutableArray *_contentLabelArray;
    NSMutableArray *_contentLabelSizeArray;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _contentSize;
}

@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UILabel *contentLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSMutableArray *contentLabelArray;
@property (retain, nonatomic) NSMutableArray *contentLabelSizeArray;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long zIndex;
@property (nonatomic) unsigned long long contentAlignment;
@property (nonatomic) unsigned long long imageGroupMode;
@property (nonatomic) double contentOffset;
@property (copy, nonatomic) UIColor *contentShadowColor;
@property (nonatomic) double angle;
@property (readonly, nonatomic) BOOL isFoldedContent;

- (void)startAnnotationAnimation:(id)arg0;
- (void)clearContentLabels;
- (void)drawImageGroupWithImages:(id)arg0 imageSizeArray:(id)arg1;
- (void)_downloadImageWithUrlArray:(id)arg0 completed:(id /* block */)arg1;
- (void)setContent:(id)arg0 withAttributes:(id)arg1 maxSize:(struct CGSize { double x0; double x1; })arg2;
- (void)drawContentLabelWithContent:(id)arg0 withAttributes:(id)arg1 maxSize:(struct CGSize { double x0; double x1; })arg2;
- (id)contentLabelSizeArray;
- (id)contentLabelArray;
- (void)_layoutWithContentBottomAlignment;
- (void)_layoutWithContentCenterAlignment;
- (void)setImageURLArray:(id)arg0 imageSizeArray:(id)arg1;
- (void)setContentShadowColor:(id)arg0;
- (void)setMutableContent:(id)arg0 withAttributes:(id)arg1 maxSizeArray:(id)arg2;
- (BOOL)isCollidedContentWithOther:(id)arg0 areaPercent:(double)arg1;
- (void)foldContent;
- (void)unfoldContent;
- (unsigned long long)imageGroupMode;
- (void)setImageGroupMode:(unsigned long long)arg0;
- (id)contentShadowColor;
- (BOOL)isFoldedContent;
- (void)setContentLabelArray:(id)arg0;
- (void)setContentLabelSizeArray:(id)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setZIndex:(long long)arg0;
- (void)setContentOffset:(double)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)contentOffset;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageURL:(id)arg0;
- (id)imageView;
- (id)imageURL;
- (void)setImageView:(id)arg0;
- (double)angle;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (long long)zIndex;
- (void)setAngle:(double)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)contentAlignment;
- (void)setContentAlignment:(unsigned long long)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1;

@end
