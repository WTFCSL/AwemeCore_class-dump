//
//     Generated by private class-dump
//

@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailAppearanceExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
}

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)applicationDidEnterBackground;
- (void)viewDidAppear;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (void)viewDidDisappear;

@end
