//
//     Generated by private class-dump
//

@class NSString, NSArray, IESLiveLinkMicSEIParserResult;

@interface IESLiveStreamPlayerLayoutMediaLinkmic : IESLiveStreamPlayerLayoutBase <IESLiveAutoRotateAction, IESLiveSEIListener> {
    unsigned long long _currentLayoutGridCount;
    long long _currentLayoutType;
    NSString *_currentFocusId;
    NSArray *_regions;
    IESLiveLinkMicSEIParserResult *_lastSEIResult;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentCropRatioFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originContentFrame;
}

@property (nonatomic) unsigned long long currentLayoutGridCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentCropRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originContentFrame;
@property (nonatomic) long long currentLayoutType;
@property (copy, nonatomic) NSString *currentFocusId;
@property (copy, nonatomic) NSArray *regions;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastSEIResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originContentFrame;
- (void)setOriginContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)layoutWithMetaInfo:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })losePrecisionRectWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (unsigned long long)seiDispatchPriority;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)arg0;
- (id)lastSEIResult;
- (void)resetLinkmicParam;
- (void)resetPlayerCropParam;
- (void)setLastSEIResult:(id)arg0;
- (BOOL)shouldUpdateLayout:(long long)arg0 focusId:(id)arg1;
- (void)setupPlayerCropParamIfNeeded;
- (void)setupPlayerWithSEIResult:(id)arg0 contentRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 distance:(double)arg2 background:(id)arg3 layoutType:(long long)arg4 focusId:(id)arg5;
- (void)resolveLinkmicSEIResult:(id)arg0 mediaSize:(struct CGSize { double x0; double x1; })arg1 containerSize:(struct CGSize { double x0; double x1; })arg2 completion:(id /* block */)arg3;
- (void)updatePlayerRatioFrameLayoutWithScreenSize:(struct CGSize { double x0; double x1; })arg0 isLandscape:(BOOL)arg1;
- (unsigned long long)currentLayoutGridCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCropRatioFrame;
- (id)currentFocusId;
- (void)setCurrentLayoutGridCount:(unsigned long long)arg0;
- (void)setCurrentFocusId:(id)arg0;
- (void)updateLayoutMachineCropParamWithContainerSize:(struct CGSize { double x0; double x1; })arg0 isLandscape:(BOOL)arg1;
- (void)setCurrentCropRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isPad;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (id)regions;
- (void)setRegions:(id)arg0;
- (long long)currentLayoutType;
- (void)setCurrentLayoutType:(long long)arg0;

@end
