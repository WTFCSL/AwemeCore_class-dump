//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, AWEDitoVirtualRefreshPageTask, AWEUILoadingView;
@protocol AWEDitoVirtualRefreshPageInterceptor, DitoExtensionContainerProtocol;

@interface AWEDitoVirtualRefreshPageExtension : NSObject <DitoExtensionProtocol> {
    BOOL _didBindMainDataFlag;
    BOOL _didPostLoadCompleteEvent;
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    AWEUILoadingView *_loadingView;
    AWEDitoVirtualRefreshPageTask *_task;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEDitoVirtualRefreshPageTask *task;
@property (nonatomic) BOOL didBindMainDataFlag;
@property (nonatomic) BOOL didPostLoadCompleteEvent;
@property (readonly, weak, nonatomic) id<AWEDitoVirtualRefreshPageInterceptor> interceptor;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptor;
- (void)didEndReload;
- (void)didBindMainData;
- (void)initializeExtension;
- (void)virtualRefreshPageWithActionContext:(id)arg0;
- (void)pageLoadFailureWithError:(id)arg0;
- (void)setDidBindMainDataFlag:(BOOL)arg0;
- (BOOL)didBindMainDataFlag;
- (BOOL)didPostLoadCompleteEvent;
- (void)setDidPostLoadCompleteEvent:(BOOL)arg0;
- (void)trackWithCode:(long long)arg0 msg:(id)arg1 data:(id)arg2;
- (void)tryShowLoadingView;
- (void)didRefreshPage;
- (void)removeTask;
- (void)tryHideLoadingView;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)setTask:(id)arg0;
- (void)dealloc;
- (id)task;
- (void)cancelTask;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
