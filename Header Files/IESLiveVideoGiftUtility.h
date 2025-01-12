//
//     Generated by private class-dump
//

@interface IESLiveVideoGiftUtility : NSObject

+ (id)loadTextureWithImage:(id)arg0 device:(id)arg1;
+ (id)loadColorFillBufferWith:(id)arg0 device:(id)arg1;
+ (void)genTextureCoordinatesWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 coordinates:(float *)arg2 reverse:(BOOL)arg3;
+ (void)replaceArrayElementsTo:(float *)arg0 from:(float *)arg1 size:(int)arg2;
+ (void)genVerticesWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 vertices:(float *)arg2 reverse:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCenterFitWithSourceSize:(struct CGSize { double x0; double x1; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct CGSize { double x0; double x1; })sizeForCenterFitWithSourceSize:(struct CGSize { double x0; double x1; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCenterFullWithSourceSize:(struct CGSize { double x0; double x1; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct CGSize { double x0; double x1; })sizeForCenterFullWithSourceSize:(struct CGSize { double x0; double x1; })arg0 renderSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct CGSize { double x0; double x1; })videoResourceRealDisplaySizeFromVideoSize:(struct CGSize { double x0; double x1; })arg0 resourceModel:(id)arg1;
+ (id)drawingImageForText:(id)arg0 color:(id)arg1 textSize:(float)arg2 bold:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleLayerRatio:(float)arg0 imgRatio:(float)arg1 mode:(unsigned long long)arg2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transFrameFromRationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 superViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
+ (id)_loadTextureWithImage:(id)arg0 device:(id)arg1;
+ (struct CGSize { double x0; double x1; })sizeWithText:(id)arg0 font:(id)arg1 maxSize:(struct CGSize { double x0; double x1; })arg2;
+ (struct CGSize { double x0; double x1; })genFlexRateWithContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 anchorPoint:(struct CGPoint { double x0; double x1; })arg1 flexPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 contentSize:(struct CGSize { double x0; double x1; })arg3;
+ (id)genFlexVertexBuffersWithRenderSize:(struct CGSize { double x0; double x1; })arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 rgbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 alphaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg4 sourceSize:(struct CGSize { double x0; double x1; })arg5 flexPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg6 renderOffset:(struct CGVector { double x0; double x1; })arg7 device:(id)arg8 disableFlexX:(BOOL)arg9 disableFlexY:(BOOL)arg10 cutMode:(BOOL)arg11;
+ (id)genVideoVertexBufferWithRenderSize:(struct CGSize { double x0; double x1; })arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 rgbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 alphaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 area:(struct IESLiveVideoFlexArea { double x0; double x1; double x2; double x3; })arg4 targetArea:(struct IESLiveVideoFlexArea { double x0; double x1; double x2; double x3; })arg5 renderOffset:(struct CGVector { double x0; double x1; })arg6 device:(id)arg7;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameFromVideoSize:(struct CGSize { double x0; double x1; })arg0 liveRenderSuperViewFame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 resourceModel:(id)arg2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })multiVideoFrameFromVideoSize:(struct CGSize { double x0; double x1; })arg0 liveRenderSuperViewFame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 resourceModel:(id)arg2;
+ (id)genVertexBuffersWithMaskContainer:(id)arg0 sourceSize:(struct CGSize { double x0; double x1; })arg1 sourceRenderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 renderSize:(struct CGSize { double x0; double x1; })arg3 containerSize:(struct CGSize { double x0; double x1; })arg4 device:(id)arg5 preferredSourceRenderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)arg6;
+ (BOOL)supportsHaptics;

@end
