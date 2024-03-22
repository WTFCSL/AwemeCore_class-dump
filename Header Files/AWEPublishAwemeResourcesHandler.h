//
//     Generated by private class-dump
//

@class AWEStudioAwemeResourceModel, AWEStudioAwemeDownloadConfig, AWEVideoPublishViewModel, NSError, UIView;

@interface AWEPublishAwemeResourcesHandler : NSObject {
    BOOL _showLoadingView;
    NSError *_error;
    UIView *_loadingViewContainerView;
    id /* block */ _coverHandler;
    id /* block */ _mainResourceHandler;
    id /* block */ _completionHandler;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEStudioAwemeDownloadConfig *_fetchAwemeConfig;
    AWEStudioAwemeResourceModel *_errorCollector;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioAwemeDownloadConfig *fetchAwemeConfig;
@property (retain, nonatomic) AWEStudioAwemeResourceModel *errorCollector;
@property (readonly, nonatomic) unsigned long long taskStatus;
@property (retain, nonatomic) NSError *error;
@property BOOL showLoadingView;
@property (retain, nonatomic) UIView *loadingViewContainerView;
@property (copy, nonatomic) id /* block */ coverHandler;
@property (copy, nonatomic) id /* block */ mainResourceHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)publishViewModel;
- (id)initWithPublishModel:(id)arg0;
- (void)setShowLoadingView:(BOOL)arg0;
- (void)setPublishViewModel:(id)arg0;
- (void)setLoadingViewContainerView:(id)arg0;
- (void)setCoverHandler:(id /* block */)arg0;
- (void)setMainResourceHandler:(id /* block */)arg0;
- (void)fetchAwemeResources;
- (id)fetchAwemeConfig;
- (id)errorCollector;
- (void)setFetchAwemeConfig:(id)arg0;
- (void)downloadAwemeMainResource:(id)arg0;
- (id /* block */)coverHandler;
- (id)loadingViewContainerView;
- (id)configureLoadingView;
- (id /* block */)mainResourceHandler;
- (void)configVideoDecryptionKey:(id)arg0;
- (void)setErrorCollector:(id)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)error;
- (BOOL)showLoadingView;
- (unsigned long long)taskStatus;

@end