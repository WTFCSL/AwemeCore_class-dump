//
//     Generated by private class-dump
//

@class UIImage;

@protocol CECMomentCameraUploadImageResource <NSObject>

@property (readonly, nonatomic) UIImage *originalImage;
@property (readonly, nonatomic) UIImage *publishImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } displayRect;

- (id)publishImage;
- (void)updateUploadImageDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)originalImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayRect;

@end
