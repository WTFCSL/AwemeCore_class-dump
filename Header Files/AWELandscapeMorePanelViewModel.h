//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, AWELandscapeMorePanelCellModel, AWEBinding, AWELandscapeControlView, NSMutableArray, UICollectionView, AWELandscapePageContext;
@protocol AWELandscapeMorePanelViewDelegate, AWELanscapePlayerControlViewDelegate;

@interface AWELandscapeMorePanelViewModel : NSObject {
    id<AWELanscapePlayerControlViewDelegate> _delegate;
    id<AWELandscapeMorePanelViewDelegate> _interactionDelegate;
    AWELandscapeControlView *_controlView;
    UICollectionView *_collectionView;
    UIView *_container;
    AWEAwemeModel *_model;
    AWELandscapePageContext *_pageContext;
    AWEBinding *_timingCloseBinding;
    id /* block */ _timingCloseHandler;
    NSMutableArray *_dataSource;
    AWELandscapeMorePanelCellModel *_watchLaterPanelModel;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEBinding *timingCloseBinding;
@property (copy, nonatomic) id /* block */ timingCloseHandler;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) AWELandscapeMorePanelCellModel *watchLaterPanelModel;
@property (weak, nonatomic) id<AWELanscapePlayerControlViewDelegate> delegate;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (weak, nonatomic) AWELandscapeControlView *controlView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView *container;

- (void)updateWithModel:(id)arg0 pageContext:(id)arg1;
- (void)bindObserver;
- (void)configDataSource;
- (BOOL)canShowDanmaku;
- (void)willShowMorePanel;
- (void)removeBindAfterDismissed;
- (id)cellModelWithIndexPath:(id)arg0;
- (id)timingCloseBinding;
- (id /* block */)timingCloseHandler;
- (void)handleWatchLaterInfoChangeNotification:(id)arg0;
- (id)watchLaterPanelModel;
- (id)danmakuSettingsPanelModel;
- (id)autoRotateSwitchPanelModel;
- (id)fullScreenPanelModel;
- (id)timingClosePanelModel;
- (id)pcContinuePlayCellModel;
- (id)dislikePanelModel;
- (id)reportPanelModel;
- (void)addToWatchLater:(id)arg0;
- (void)setWatchLaterPanelModel:(id)arg0;
- (void)configFullScreenCellModel:(id)arg0;
- (void)reloadTimingClosePanelModel:(id)arg0;
- (void)setTimingCloseHandler:(id /* block */)arg0;
- (void)setTimingCloseBinding:(id)arg0;
- (void)trackClickPCContinuePlay;
- (void)trackShowPCContinuePlay;
- (id)container;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (id)collectionView;
- (id)model;
- (void)setContainer:(id)arg0;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (id)controlView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setControlView:(id)arg0;

@end
