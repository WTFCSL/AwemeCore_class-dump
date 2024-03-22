//
//     Generated by private class-dump
//

@class YataRenderNode, UIView;
@protocol YataABSRenderDelegate, YataInstanceInnerInterface;

@interface YataABSViewHolder : NSObject {
    BOOL _isAlreadyRenderSize;
    UIView *_rootView;
    unsigned long long _viewLoadType;
    YataRenderNode *_renderNode;
    id<YataABSRenderDelegate> _renderDelegate;
    id<YataInstanceInnerInterface> _instance;
    struct CGSize { double width; double height; } _fitSize;
    struct CGSize { double width; double height; } _viewSize;
}

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) YataRenderNode *renderNode;
@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) BOOL isAlreadyRenderSize;
@property (readonly, nonatomic) unsigned long long viewLoadType;
@property (readonly, weak, nonatomic) id<YataABSRenderDelegate> renderDelegate;

+ (void)initialize;

- (struct CGSize { double x0; double x1; })fitSize;
- (void)setFitSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIsAlreadyRenderSize:(BOOL)arg0;
- (void)markCurrentViewTemplateLoadType:(unsigned long long)arg0;
- (unsigned long long)viewLoadType;
- (id)initWithYataInstance:(id)arg0 renderNode:(id)arg1;
- (void)updateWithYataInstance:(id)arg0 renderNode:(id)arg1;
- (void)preloadView:(struct CGSize { double x0; double x1; })arg0 withCompletion:(id /* block */)arg1;
- (id)createView:(BOOL *)arg0 withCompletion:(id /* block */)arg1;
- (void)updateDataWithContentView:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (BOOL)isAlreadyRenderSize;
- (void).cxx_destruct;
- (id)renderDelegate;
- (id)instance;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setInstance:(id)arg0;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)renderNode;
- (void)setRenderNode:(id)arg0;

@end