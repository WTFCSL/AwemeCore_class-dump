//
//     Generated by private class-dump
//

@class DitoNode, DitoDecorationView, UIView;
@protocol DitoComponentView;

@protocol DitoNodeView <NSObject>

@property (retain, nonatomic) UIView<DitoComponentView> *bizView;
@property (readonly, nonatomic) UIView *bgView;
@property (readonly, nonatomic) DitoDecorationView *decorationView;
@property (readonly, nonatomic) DitoNode *inheritStyleFromThisNode;

- (void)setBizView:(id)arg0;
- (id)bizView;
- (void)fillNode:(id)arg0;
- (id)node;
- (id)bgView;
- (id)decorationView;

@optional

- (void)dito_setupRadius;
- (void)dito_setupMargin;
- (id)inheritStyleFromThisNode;
- (void)dito_setupBackgroundColor;

@end
