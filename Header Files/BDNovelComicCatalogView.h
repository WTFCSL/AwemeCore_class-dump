//
//     Generated by private class-dump
//

@class UIView, NSString, BDNovelAudioTextView, BDNovelComicCatalogJumpView, BDNovelSlider, UITableView, BDNovelComicOpenModel, UILabel;
@protocol BDNovelComicCatalogDelegate;

@interface BDNovelComicCatalogView : BDNovelComicBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, BDNovelSliderDelegate, BDNovelComicPluginStateSync> {
    BOOL _isBindData;
    BOOL _isShow;
    BOOL _isReverse;
    id<BDNovelComicCatalogDelegate> _delegate;
    UIView *_topView;
    UILabel *_titleView;
    UILabel *_infoLabel;
    BDNovelAudioTextView *_sortView;
    UITableView *_contentTableView;
    BDNovelSlider *_slider;
    BDNovelComicCatalogJumpView *_jumpView;
    UIView *_bottomLineView;
    double _panTop;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) BDNovelAudioTextView *sortView;
@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) BDNovelSlider *slider;
@property (retain, nonatomic) BDNovelComicCatalogJumpView *jumpView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL isBindData;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isReverse;
@property (nonatomic) double panTop;
@property (weak, nonatomic) id<BDNovelComicCatalogDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDNovelComicOpenModel *readerModel;

- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (id)bdcr_readerInsertedViewRequestInsertedView;
- (void)pluginReaderComicInfoDidLoad:(id)arg0 updateType:(unsigned long long)arg1;
- (void)readerThemeChange:(id)arg0;
- (BOOL)isReverse;
- (void)setIsReverse:(BOOL)arg0;
- (id)contentTableView;
- (void)forceRefreshWithScroll:(BOOL)arg0;
- (void)updateJumpView;
- (void)setContentTableView:(id)arg0;
- (unsigned long long *)itemIndex:(unsigned long long)arg0;
- (void)setJumpView:(id)arg0;
- (id)jumpView;
- (void)viewWillDidLoad;
- (BOOL)isBindData;
- (void)bindData:(id)arg0;
- (void)bindData:(id)arg0 isScroll:(BOOL)arg1;
- (void)setIsBindData:(BOOL)arg0;
- (void)setPanTop:(double)arg0;
- (double)panTop;
- (void)slider:(id)arg0 valueDidChanged:(float)arg1;
- (void)pluginReaderChapterChange:(id)arg0 toItem:(id)arg1;
- (void)showCurrentSelect;
- (void)updateShowStatus:(BOOL)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)slider;
- (void)forceRefresh;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlider:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)pan:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)titleView;
- (id)topView;
- (id)itemForIndex:(unsigned long long)arg0;
- (void)setTopView:(id)arg0;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (void)setSortView:(id)arg0;
- (id)sortView;

@end
