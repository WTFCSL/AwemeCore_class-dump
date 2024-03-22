//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, UIImageView, ItemShareListResponse_ResponseData, UITableView, NSMutableArray, UILabel, UIScrollView;

@interface IESLiveItemSharePanelView : IESLiveCommentExpandDetailView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _didHideGuideTip;
    HTSEventContext *_trackContext;
    id /* block */ _shareItemClick;
    UITableView *_tableView;
    UIImageView *_errorImageView;
    UILabel *_errorLabel;
    UIImageView *_emptyImageView;
    UIScrollView *_scrollViewContainer;
    UILabel *_guideLabel;
    ItemShareListResponse_ResponseData *_shareData;
    NSMutableArray *_viewModels;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UIScrollView *scrollViewContainer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL didHideGuideTip;
@property (retain, nonatomic) ItemShareListResponse_ResponseData *shareData;
@property (retain, nonatomic) NSMutableArray *viewModels;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ shareItemClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (void)setErrorImageView:(id)arg0;
- (id)errorImageView;
- (void)noData;
- (void)refreshWithItemShareData:(id)arg0;
- (void)setShareItemClick:(id /* block */)arg0;
- (BOOL)didHideGuideTip;
- (void)hideGuideTipWithAnimation;
- (void)setDidHideGuideTip:(BOOL)arg0;
- (void)trackItemSharePanelShow;
- (void)showItemShareList;
- (void)operateItem:(id)arg0;
- (void)didDisplayOnceWithViewModel:(id)arg0;
- (void)trackMicroAppClickWithItemInfo:(id)arg0;
- (void)trackItemShareGetWithItemInfo:(id)arg0;
- (id /* block */)shareItemClick;
- (void)trackMicroAppShowWithItemInfo:(id)arg0;
- (void)preloadMicroAppItemViewModel:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupView;
- (id)viewModels;
- (void)setViewModels:(id)arg0;
- (id)scrollViewContainer;
- (void)setScrollViewContainer:(id)arg0;
- (void)showError;
- (id)shareData;
- (void)setShareData:(id)arg0;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg0;

@end
