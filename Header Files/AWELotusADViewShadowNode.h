//
//     Generated by private class-dump
//

@class NSString;

@interface AWELotusADViewShadowNode : LynxShadowNode <LynxMeasureDelegate> {
    struct CGSize { double width; double height; } _adSize;
}

@property struct CGSize { double width; double height; } adSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;

- (void)setAdSize:(struct CGSize { double x0; double x1; })arg0;
- (void)adoptNativeLayoutNode:(long long)arg0;
- (struct CGSize { double x0; double x1; })measureNode:(id)arg0 withWidth:(double)arg1 widthMode:(long long)arg2 height:(double)arg3 heightMode:(long long)arg4;
- (struct CGSize { double x0; double x1; })adSize;

@end
