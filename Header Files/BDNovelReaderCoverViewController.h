//
//     Generated by private class-dump
//

@class BDNovelReaderCoverView, BDReaderModel, BDNovelReaderCoverLayoutData, NSString, BDReaderPageContext, BDNovelReaderCoverData, BDReaderConfig;
@protocol BDNovelReaderCoverViewDelegate;

@interface BDNovelReaderCoverViewController : UIViewController <BDReaderInsertedViewControllerProtocol> {
    BOOL _isViewAppear;
    BDReaderPageContext *pageContext;
    BDNovelReaderCoverData *_data;
    BDNovelReaderCoverView *_contentView;
    BDNovelReaderCoverLayoutData *_layoutData;
    BDReaderConfig *_config;
    double _beginTrackerTime;
    id<BDNovelReaderCoverViewDelegate> _coverViewDelegate;
}

@property (retain, nonatomic) BDNovelReaderCoverData *data;
@property (retain, nonatomic) BDNovelReaderCoverView *contentView;
@property (retain, nonatomic) BDNovelReaderCoverLayoutData *layoutData;
@property (retain, nonatomic) BDReaderConfig *config;
@property (readonly, nonatomic) BDReaderModel *readerModel;
@property (nonatomic) double beginTrackerTime;
@property (weak, nonatomic) id<BDNovelReaderCoverViewDelegate> coverViewDelegate;
@property (nonatomic) BOOL isViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveWillEnterForegroundNotification:(id)arg0;
- (void)receiveDidEnterBackgroundNotification:(id)arg0;
- (id)readerModel;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg0;
- (void)goDetail;
- (void)stayPage;
- (void)readerInsertedViewControllerThemeConfigChange:(id)arg0;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (id)initWithPageData:(id)arg0 config:(id)arg1 layoutData:(id)arg2;
- (void)setCoverViewDelegate:(id)arg0;
- (void)removeTrackerObserver;
- (void)addTrackerObserver;
- (id)coverViewDelegate;
- (void)showBookCover;
- (void)setBeginTrackerTime:(double)arg0;
- (double)beginTrackerTime;
- (void)extraStayPage:(id)arg0;
- (id)data;
- (void)setConfig:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setData:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (id)layoutData;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setLayoutData:(id)arg0;

@end
