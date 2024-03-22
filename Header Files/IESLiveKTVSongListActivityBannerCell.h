//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveHybridContainerFactory;

@interface IESLiveKTVSongListActivityBannerCell : IESLiveListViewCell <IESLiveHybridContainerDelegate> {
    BOOL _isCPUOptimize;
    id /* block */ _didFinishLoadBlock;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    id<IESLiveHybridContainerFactory> _webviewFactory;
    NSString *_urlString;
    NSString *_fallbackUrl;
    NSString *_tabName;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webviewFactory;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *fallbackUrl;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL isCPUOptimize;
@property (copy, nonatomic) id /* block */ didFinishLoadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)arg0;

- (id)hybridContainer;
- (void)p_setupUI;
- (void)setHybridContainer:(id)arg0;
- (id)webviewFactory;
- (void)setWebviewFactory:(id)arg0;
- (void)setFallbackUrl:(id)arg0;
- (void)loadHybridContainer;
- (void)renderWithItem:(id)arg0;
- (void)iesLiveHybridContainerDidFinishLoad:(id)arg0;
- (id)setupHybridContainer;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (BOOL)p_canRenderBanner;
- (id /* block */)didFinishLoadBlock;
- (void)layoutHybridContainer:(id)arg0;
- (void)p_logWithCode:(long long)arg0;
- (void)setDidFinishLoadBlock:(id /* block */)arg0;
- (id)urlString;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setUrlString:(id)arg0;
- (void)loadData;
- (void)setTabName:(id)arg0;
- (id)tabName;
- (id)fallbackUrl;

@end
