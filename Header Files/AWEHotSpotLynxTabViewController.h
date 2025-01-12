//
//     Generated by private class-dump
//

@class AWEHotSpotLynxTabContainerView, AWEHotSearchParamsModel, NSDictionary, NSString, AWEHotSearchBoardTabModel, AWEHotSpotInnerContext;

@interface AWEHotSpotLynxTabViewController : UIViewController <AWEBottomContainerViewLifeCycleDelegate, AWEHotPointPanelControllerProtocol> {
    BOOL _isLynxLoaded;
    long long _index;
    AWEHotSpotLynxTabContainerView *_lynxView;
    AWEHotSpotInnerContext *_context;
    AWEHotSearchBoardTabModel *_boardModel;
    AWEHotSearchParamsModel *_currentParamsModel;
    NSDictionary *_extraParams;
}

@property (retain, nonatomic) AWEHotSearchBoardTabModel *boardModel;
@property (retain, nonatomic) AWEHotSpotLynxTabContainerView *lynxView;
@property (retain, nonatomic) AWEHotSearchParamsModel *currentParamsModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isLynxLoaded;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long index;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)configUI;
- (id)recommendManager;
- (void)resetTrackedState;
- (void)refreshWithData:(id)arg0 risingHotSpotList:(id)arg1 paramsModel:(id)arg2 otherParams:(id)arg3;
- (void)containerViewDidFinishLoadWithURL:(id)arg0;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)selectSameHotSpotModel:(id)arg0;
- (id)initWithBoardTabModel:(id)arg0;
- (id)tabManager;
- (void)fetchTabDataIfNeeded:(id /* block */)arg0;
- (id)boardModel;
- (id)tabHeaderString;
- (void)setBoardModel:(id)arg0;
- (BOOL)isLynxLoaded;
- (id)findTargetLynxCollectionViewInView:(id)arg0;
- (void)setIsLynxLoaded:(BOOL)arg0;
- (id)getSubViewOfView:(id)arg0;
- (id)currentParamsModel;
- (void)setCurrentParamsModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)reloadData;
- (long long)index;
- (id)context;
- (void)viewDidLoad;
- (id)scrollView;

@end
