//
//     Generated by private class-dump
//

@class UIView;
@protocol YataRenderObjectInterface;

@interface IESECSKUScrollToViewInstance : NSObject {
    BOOL _doAnimation;
    id<YataRenderObjectInterface> _anchorObject;
    UIView *_anchorView;
}

@property (weak, nonatomic) id<YataRenderObjectInterface> anchorObject;
@property (weak, nonatomic) UIView *anchorView;
@property (nonatomic) BOOL doAnimation;

- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg0;
- (id)anchorObject;
- (void)setAnchorObject:(id)arg0;
- (void).cxx_destruct;
- (id)anchorView;
- (void)setAnchorView:(id)arg0;

@end
