//
//     Generated by private class-dump
//

@class DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@protocol DitoExtensionProtocol <DitoViewControllerLifeCycleProtocol, DitoContainerLifeCycleProtocol, DitoScrollViewDelegateProtocol, DitoComponentDelegateProtocol, DitoContainerExceptionMonitorProtocol, DitoHalfContainerDelegateProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;

- (id)container;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;

@optional

- (void)initializeExtension;

@end
