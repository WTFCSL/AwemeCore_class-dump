//
//     Generated by private class-dump
//

@class UIImage;

@interface AWEHPTopTabItemIndicatorIconUIModel : NSObject {
    BOOL _inRight;
    BOOL _rotation;
    BOOL _adjustTint;
    double _distance;
    double _alpha;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) double distance;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL inRight;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL rotation;
@property (nonatomic) BOOL adjustTint;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *unselectedImage;

- (BOOL)inRight;
- (void)setInRight:(BOOL)arg0;
- (BOOL)adjustTint;
- (void)setAdjustTint:(BOOL)arg0;
- (double)distance;
- (void)setDistance:(double)arg0;
- (void)setRotation:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg0;
- (BOOL)rotation;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (double)alpha;
- (void)setSelectedImage:(id)arg0;
- (id)selectedImage;
- (void)setUnselectedImage:(id)arg0;
- (id)unselectedImage;

@end
