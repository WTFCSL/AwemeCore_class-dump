//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, AWEVideoPublishViewModel, UIActivityIndicatorView, UIView;

@interface ACCImageEditMediaContainerView : UIView <ACCMediaContainerViewProtocol> {
    BOOL _needAdaptForXScreen;
    UIImage *_coverImage;
    UIActivityIndicatorView *_boomerangIndicatorView;
    UIImageView *_coverImageView;
    UIView *_minorBgView;
    UIImageView *_minorImageView;
    AWEVideoPublishViewModel *_publishModel;
    struct CGSize { double width; double height; } _containerSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPlayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editPlayerFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) BOOL needAdaptForXScreen;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } croppedOriginalPlayerFrame;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIActivityIndicatorView *boomerangIndicatorView;
@property (retain, nonatomic) UIView *minorBgView;
@property (retain, nonatomic) UIImageView *minorImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imagePlayerDefaultOriginalFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })imagePlayerDefaultContainerSize;

- (void)setCoverImage:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)initWithPublishModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })croppedOriginalPlayerFrame;
- (void)setOriginalPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)minorBgView;
- (id)minorImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMinorBgView:(id)arg0;
- (void)setMinorImageView:(id)arg0;
- (void)updateOriginalFrameWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setEditPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)needAdaptForXScreen;
- (BOOL)isPlayerContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)boomerangIndicatorView;
- (void)setBoomerangIndicatorView:(id)arg0;
- (void)setNeedAdaptForXScreen:(BOOL)arg0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;
- (void)builder;
- (void)resetView;
- (id)coverImage;

@end
