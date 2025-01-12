//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, AWEVideoPublishViewModel, UIActivityIndicatorView, UIView;

@interface ACCMediaContainerView : UIView <ACCMediaContainerViewProtocol, NLEMultiEditorPlayerPreview> {
    BOOL _needAdaptForXScreen;
    UIImage *_coverImage;
    UIActivityIndicatorView *_boomerangIndicatorView;
    UIImageView *_coverImageView;
    UIView *_minorBgView;
    UIImageView *_minorImageView;
    AWEVideoPublishViewModel *_publishModel;
    long long _extensionDirectionType;
    struct CGSize { double width; double height; } _containerSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPlayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editPlayerFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL needAdaptForXScreen;
@property (nonatomic) long long extensionDirectionType;
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

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalFrameWithPublishModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateOriginalFrameForPublishModel:(id)arg0 cropped:(BOOL)arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrameWithPublishModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEditFrameForPublishModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realStickerContainerPlayerFrameWithPublishModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculate4_3SizeFrameForContainer;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateImageOriginalFrameForPublishModel:(id)arg0 cropped:(BOOL)arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateOriginalFrameForContainerSize:(struct CGSize { double x0; double x1; })arg0 publishModel:(id)arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateImageEditFrameForPublishModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatePlayerFrameForOriginalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1;
+ (id)sizeOfVideo:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatePlayerFrameForOriginalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1 directionType:(long long *)arg2;
+ (struct CGSize { double x0; double x1; })containerSize;

- (void)setCoverImage:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)previewUnit;
- (id)initWithPublishModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })croppedOriginalPlayerFrame;
- (void)setOriginalPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initForBlankContainerView;
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
- (void)mediaContainerViewAddCorner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })arg0 publishModel:(id)arg1;
- (void)setExtensionDirectionType:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })singlePhotoCanvasFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shareToStoryCanvasFrame;
- (long long)extensionDirectionType;
- (double)captureHeightRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForPublishModel:(id)arg0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;
- (void)builder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)resetView;
- (id)coverImage;

@end
