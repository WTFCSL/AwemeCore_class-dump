//
//     Generated by private class-dump
//

@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailSkinExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
}

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fontsToRegister;
- (void)didEndRequestWithResponse:(id)arg0 error:(id)arg1;
- (void)loadFontsIfNeeded;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)viewDidLoad;

@end