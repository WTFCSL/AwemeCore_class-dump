//
//     Generated by private class-dump
//

@class UIView, IESLiveImageEditScrollView, UIImage, NSTimer, NSString, CAShapeLayer, UIImageView, UIButton, UIBezierPath;

@interface IESLiveImageEditViewController : UIViewController <UIScrollViewDelegate> {
    BOOL _editing;
    id /* block */ _completion;
    UIImage *_image;
    double _ratio;
    double _cropRectCornerRadius;
    UIImageView *_imageView;
    UIView *_cropView;
    IESLiveImageEditScrollView *_scrollView;
    UIView *_topBarView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIButton *_resetButton;
    UIBezierPath *_path;
    CAShapeLayer *_cropMask;
    CAShapeLayer *_borderLayer;
    NSTimer *_resetTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) double cropRectCornerRadius;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *cropView;
@property (retain, nonatomic) IESLiveImageEditScrollView *scrollView;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) CAShapeLayer *cropMask;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) BOOL editing;
@property (retain, nonatomic) NSTimer *resetTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startResetTimer;
- (void)cancelResetTimer;
- (void)setResetTimer:(id)arg0;
- (double)scrollViewHeight;
- (id)initWithImage:(id)arg0 aspectRatio:(double)arg1 completion:(id /* block */)arg2;
- (void)setupUserInterface;
- (void)setDefaultRatio;
- (void)setCropRectCornerRadius:(double)arg0;
- (void)calculateCropRect;
- (void)calculateImageView;
- (void)calculateScrollView;
- (double)cropRectCornerRadius;
- (id)cropMask;
- (void)drawCropViewMask;
- (void)drawBoard;
- (void)scrollViewContentReset;
- (void)setCropEditing:(BOOL)arg0 animated:(BOOL)arg1;
- (id)cropImageWithImageViewWidth:(double)arg0 convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 cornerRadius:(double)arg2;
- (void)confirmButtonHandler;
- (void)resetButtonHandler;
- (void)setCropMask:(id)arg0;
- (void)setPath:(id)arg0;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)setScrollView:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (BOOL)editing;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)resetTimer;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)cancelButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)setCompletion:(id /* block */)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)image;
- (id)imageView;
- (id)path;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setEditing:(BOOL)arg0;
- (void)setImageView:(id)arg0;
- (void)setImage:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)resetButton;
- (id)borderLayer;
- (double)ratio;
- (void)setRatio:(double)arg0;
- (void)setupScrollView;
- (void)cancelButtonHandler;
- (void)setResetButton:(id)arg0;
- (id)cropView;
- (void)setCropView:(id)arg0;
- (void)startEditing;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;
- (void)setBorderLayer:(id)arg0;
- (void)timerTriggered;
- (void)calculate;

@end
