//
//     Generated by private class-dump
//

@class AWEPOICubeModel, NSString, AWEPOIIMCardLoadingView, AWEPOIIMLynxView;

@interface AWEPOIIMMsgLynxTableViewCell : AWEPOIIMBaseMessageTableViewCellV2 <AWEPOICubeViewDelegate, AWEPOIIMCardLoadingViewDelegate> {
    BOOL _isConfigChange;
    BOOL _firstCreateLynxView;
    long long _errorCount;
    AWEPOIIMLynxView *_lynxView;
    AWEPOICubeModel *_lynxModel;
    AWEPOIIMCardLoadingView *_loadingView;
}

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) AWEPOIIMLynxView *lynxView;
@property (retain, nonatomic) AWEPOICubeModel *lynxModel;
@property (retain, nonatomic) AWEPOIIMCardLoadingView *loadingView;
@property (nonatomic) BOOL isConfigChange;
@property (nonatomic) BOOL firstCreateLynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)arg0;
- (id)lynxView;
- (id)lynxModel;
- (void)setLynxModel:(id)arg0;
- (void)setLynxView:(id)arg0;
- (void)setupContainerView;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)cubeViewDidStartLoading:(id)arg0;
- (void)cubeView:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)cubeView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)cubeViewDidUpdate:(id)arg0;
- (void)cubeView:(id)arg0 didReceiveError:(id)arg1;
- (void)retryDidTapped;
- (void)setFirstCreateLynxView:(BOOL)arg0;
- (void)setIsConfigChange:(BOOL)arg0;
- (void)updateLynxViewData:(BOOL)arg0;
- (BOOL)firstCreateLynxView;
- (BOOL)isConfigChange;
- (void).cxx_destruct;
- (void)setErrorCount:(long long)arg0;
- (long long)errorCount;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
