//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoContainerViewExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    NSMutableDictionary *_lastFrameMap;
}

@property (retain, nonatomic) NSMutableDictionary *lastFrameMap;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidUpdateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerType:(id)arg1;
- (id)lastFrameMap;
- (void)setLastFrameMap:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;

@end