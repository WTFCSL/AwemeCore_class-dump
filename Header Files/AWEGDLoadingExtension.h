//
//     Generated by private class-dump
//

@class NSString, AWEPOILoadingView, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDLoadingExtension : NSObject <DitoExtensionProtocol, AWEPOICubeViewDelegate> {
    BOOL _isEndRequest;
    DitoPageContext *context;
    id<DitoExtensionContainerProtocol> container;
    AWEPOILoadingView *_loadingView;
}

@property (nonatomic) BOOL isEndRequest;
@property (weak, nonatomic) AWEPOILoadingView *loadingView;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLoadingView;
- (void)didEndRequestWithResponse:(id)arg0 error:(id)arg1;
- (void)initializeExtension;
- (BOOL)isBodyStartLoad;
- (void)setIsEndRequest:(BOOL)arg0;
- (BOOL)isEndRequest;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)didLayout;
- (id)context;
- (void)viewDidLoad;
- (void)addLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end