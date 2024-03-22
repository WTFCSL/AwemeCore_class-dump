//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, AWELiveStickerCardViewModel, UITableView;
@protocol AWELiveStickerCardVCDelegate;

@interface AWELiveStickerCardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWELiveStickerCardVC> {
    BOOL _foldComponent;
    BOOL _needResetFold;
    id<AWELiveStickerCardVCDelegate> _delegate;
    AWELiveStickerCardViewModel *_viewModel;
    NSString *_cardId;
    UIView *_actionContainer;
    UIImageView *_smallImgView;
    UIImageView *_titleImgView;
    UIImageView *_indicatorImgView;
    UITableView *_detailTableView;
}

@property (retain, nonatomic) AWELiveStickerCardViewModel *viewModel;
@property (nonatomic) BOOL foldComponent;
@property (nonatomic) BOOL needResetFold;
@property (copy, nonatomic) NSString *cardId;
@property (retain, nonatomic) UIView *actionContainer;
@property (retain, nonatomic) UIImageView *smallImgView;
@property (retain, nonatomic) UIImageView *titleImgView;
@property (retain, nonatomic) UIImageView *indicatorImgView;
@property (retain, nonatomic) UITableView *detailTableView;
@property (weak, nonatomic) id<AWELiveStickerCardVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionContainer;
- (void)configData;
- (void)updateCardViewWithModel:(id)arg0 originCardData:(id)arg1;
- (void)addStickerCardViewOnContainer:(id)arg0 parentVC:(id)arg1;
- (void)trackerStickerUpdate;
- (void)resetStickerCardId;
- (void)removeStickerCardViewFromContainer;
- (void)setActionContainer:(id)arg0;
- (void)setFoldComponent:(BOOL)arg0;
- (id)smallImgView;
- (id)titleImgView;
- (id)indicatorImgView;
- (id)detailTableView;
- (id)initWithCardModel:(id)arg0 awemeModel:(id)arg1 originCardData:(id)arg2;
- (BOOL)needResetFold;
- (void)setNeedResetFold:(BOOL)arg0;
- (void)updateCurrentStickerSize;
- (BOOL)foldComponent;
- (void)componentOnClick;
- (void)setSmallImgView:(id)arg0;
- (void)setTitleImgView:(id)arg0;
- (void)setIndicatorImgView:(id)arg0;
- (void)setDetailTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)cardId;
- (void)setupUI;
- (void)setCardId:(id)arg0;
- (struct CGSize { double x0; double x1; })componentSize;

@end