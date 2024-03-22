//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface CECMomentCameraUploadImageResourceImpl : NSObject <CECMomentCameraUploadImageResource> {
    UIImage *_originalImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayRect;
}

@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayRect;
@property (readonly, nonatomic) UIImage *publishImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishImage;
- (id)initWithOriginalImage:(id)arg0;
- (void)updateUploadImageDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)p_cropImageWithImage:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setOriginalImage:(id)arg0;
- (void).cxx_destruct;
- (id)originalImage;
- (void)setDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayRect;

@end
