//
//     Generated by private class-dump
//

@class IESLiveWebpLoadingView, IESLiveEmptyViewConfig, IESLiveEmptyView;

@interface IESLiveVideoShareErrorReloadView : UIView {
    id /* block */ _reloadBlock;
    IESLiveEmptyView *_emptyView;
    IESLiveEmptyViewConfig *_config;
    IESLiveWebpLoadingView *_loadingView;
}

@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *config;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ reloadBlock;

- (void)didClickReloadButton;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setReloadBlock:(id /* block */)arg0;
- (id /* block */)reloadBlock;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
