//
//     Generated by private class-dump
//

@class NSString, _TtC8TempoiOS13TempoOCWidget, DitoPageContext;
@protocol DitoTempoWidgetProtocol;

@interface DitoTempoWidgetImpl : NSObject <TempoiOS.TempoOCWidgetEntity, DitoTempoWidgetDelegate> {
    id<DitoTempoWidgetProtocol> _proxy;
    _TtC8TempoiOS13TempoOCWidget *_delegate;
    DitoPageContext *_context;
}

@property (retain, nonatomic) id<DitoTempoWidgetProtocol> proxy;
@property (weak, nonatomic) _TtC8TempoiOS13TempoOCWidget *delegate;
@property (weak, nonatomic) DitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewProxy;
- (void)registerAttributeList;
- (void)registerStyleList;
- (void)registerEventList;
- (struct CGSize { double x0; double x1; })fitsSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })arg0 attributeMap:(id)arg1 styleMap:(id)arg2;
- (id)superWidgetName;
- (BOOL)registerAttributeWithName:(id)arg0 type:(unsigned long long)arg1 impl:(id /* block */)arg2;
- (void)dispatchEventWithName:(id)arg0 viewProxy:(id)arg1;
- (id)proxy;
- (void)setProxy:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithProxy:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;

@end
