//
//     Generated by private class-dump
//

@class LynxView, LynxTemplateRender;

@interface SECLynxBuilderContext : NSObject {
    LynxView *_lynxView;
    LynxTemplateRender *_lynxRender;
    id /* block */ _builderBlock;
}

@property (weak, nonatomic) LynxView *lynxView;
@property (weak, nonatomic) LynxTemplateRender *lynxRender;
@property (copy, nonatomic) id /* block */ builderBlock;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (id /* block */)builderBlock;
- (id)lynxRender;
- (void)setBuilderBlock:(id /* block */)arg0;
- (id)initWithLynxView:(id)arg0 render:(id)arg1;
- (void)setLynxRender:(id)arg0;
- (void).cxx_destruct;

@end
