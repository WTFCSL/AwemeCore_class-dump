//
//     Generated by private class-dump
//

@class NSString;

@interface AWENewVideoCoverTextStickerViewConfig : ACCTextStickerConfig <AWENewVideoCoverLayerViewConfigProtocol> {
    id /* block */ hintDoDeleteCallback;
    id /* block */ hintDeselectCallback;
    id /* block */ hintDoSelectCallback;
    id /* block */ externalHandleScaleAndRotationGestureAction;
    struct CGPoint { double x; double y; } originCenter;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originTransform;
}

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originTransform;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (copy, nonatomic) id /* block */ hintDoDeleteCallback;
@property (copy, nonatomic) id /* block */ hintDeselectCallback;
@property (copy, nonatomic) id /* block */ hintDoSelectCallback;
@property (copy, nonatomic) id /* block */ externalHandleScaleAndRotationGestureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })originCenter;
- (void)setOriginCenter:(struct CGPoint { double x0; double x1; })arg0;
- (id /* block */)hintDoDeleteCallback;
- (void)setHintDoDeleteCallback:(id /* block */)arg0;
- (id /* block */)hintDeselectCallback;
- (void)setHintDeselectCallback:(id /* block */)arg0;
- (id /* block */)hintDoSelectCallback;
- (void)setHintDoSelectCallback:(id /* block */)arg0;
- (id /* block */)externalHandleScaleAndRotationGestureAction;
- (void)setExternalHandleScaleAndRotationGestureAction:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })originTransform;
- (void)setOriginTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;

@end
