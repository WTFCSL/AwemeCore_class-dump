//
//     Generated by private class-dump
//

@class IESLiveEffectProgressView, UIImageView;

@interface IESLiveSoundEffectProgressView : UIView {
    IESLiveEffectProgressView *_loadingView;
    UIImageView *_downloadView;
}

@property (retain, nonatomic) IESLiveEffectProgressView *loadingView;
@property (retain, nonatomic) UIImageView *downloadView;

- (void)setNeedDownload;
- (id)init;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setProgress:(double)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setDownloadView:(id)arg0;
- (id)downloadView;

@end
