//
//     Generated by private class-dump
//

@class DitoContainerPageContext, NSString;
@protocol DitoExtensionContainerProtocol;

@interface DitoContainerVCLynxExtension : NSObject <DitoGeneralLynxContainerBusinessExtender, DitoExtensionProtocol> {
    DitoContainerPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
}

@property (weak, nonatomic) DitoContainerPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)setupCubeModel:(id)arg0;
- (id)extraParamsWithCubeModel:(id)arg0 withContext:(id)arg1;
- (void)bindBDXEvent:(id)arg0;
- (long long)threadStrategyFromNode:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;

@end
