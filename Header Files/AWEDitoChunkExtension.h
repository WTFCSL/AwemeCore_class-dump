//
//     Generated by private class-dump
//

@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEDitoChunkExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
}

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateChunkFlag:(id)arg0 update:(id)arg1 result:(id)arg2;
- (void)didMergePageModel:(id)arg0 update:(id)arg1 result:(id)arg2;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;

@end