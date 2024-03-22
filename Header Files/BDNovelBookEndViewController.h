//
//     Generated by private class-dump
//

@class BDNovelWebContainerView, NSString, BDReaderModel, BDReaderPageContext;

@interface BDNovelBookEndViewController : UIViewController <BDNovelWebContainerViewDelegate, UIScrollViewDelegate, BDReaderInsertedViewControllerProtocol> {
    BOOL _loadSuc;
    BDReaderPageContext *_pageContext;
    BDNovelWebContainerView *_containerView;
    NSString *_url;
    unsigned long long _lastBackgroundType;
    BDReaderModel *_readerModel;
}

@property (retain, nonatomic) BDNovelWebContainerView *containerView;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL loadSuc;
@property (nonatomic) unsigned long long lastBackgroundType;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (void)readerThemeChange:(unsigned long long)arg0;
- (void)setLastBackgroundType:(unsigned long long)arg0;
- (BOOL)loadSuc;
- (void)setLoadSuc:(BOOL)arg0;
- (unsigned long long)lastBackgroundType;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (BOOL)isEnableToolView;
- (void)onConfigChanged:(id)arg0;
- (void)reloadIfNeed;
- (id)initWithWebContainerView:(id)arg0 readerModel:(id)arg1 query:(id)arg2;
- (BOOL)isInterruptAction;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)url;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
