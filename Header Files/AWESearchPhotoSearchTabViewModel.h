//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchPhotoSearchTabViewModel : NSObject {
    BOOL _useImageUrl;
    NSString *_imageUrl;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _detectionRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detectionRect;
@property (nonatomic) BOOL useImageUrl;
@property (copy, nonatomic) NSString *imageUrl;

- (BOOL)useImageUrl;
- (void)setUseImageUrl:(BOOL)arg0;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })detectionRect;
- (void)setDetectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end