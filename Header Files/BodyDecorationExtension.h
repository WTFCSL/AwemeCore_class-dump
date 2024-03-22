//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface BodyDecorationExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    NSMutableSet *_visibleDecorationViews;
    NSMutableSet *_dequeueDecorationViewPool;
}

@property (retain, nonatomic) NSMutableSet *visibleDecorationViews;
@property (retain, nonatomic) NSMutableSet *dequeueDecorationViewPool;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageDidScroll:(id)arg0;
- (id)visibleDecorationViews;
- (void)setVisibleDecorationViews:(id)arg0;
- (id)dequeueDecorationViewPool;
- (void)setDequeueDecorationViewPool:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)pageView;
- (id)context;

@end
