//
//     Generated by private class-dump
//

@class UIColor, IESECLLContainerBuilder;

@interface IESECLLLayoutableBuilder : NSObject {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    struct CGVector { double dx; double dy; } _offset;
    UIColor *_foregroundColor;
    BOOL _sizeFollows;
    IESECLLContainerBuilder *_parentBuilder;
    id /* block */ _ll_background;
    id /* block */ _ll_overlay;
}

@property (readonly, nonatomic) id /* block */ ll_background;
@property (readonly, nonatomic) id /* block */ ll_overlay;

- (void)inflateSubviewsIntoMap:(id)arg0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (id /* block */)ll_background;
- (id /* block */)ll_overlay;
- (id /* block */)background;
- (id /* block */)overlay;
- (id /* block */)foregroundColor;
- (void).cxx_destruct;
- (id /* block */)offset;
- (id /* block */)padding;

@end
