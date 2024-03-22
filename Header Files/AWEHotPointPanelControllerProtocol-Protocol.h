//
//     Generated by private class-dump
//

@class AWEHotSpotInnerContext;

@protocol AWEHotPointPanelControllerProtocol <NSObject>

@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (nonatomic) long long index;

- (id)recommendManager;
- (void)resetTrackedState;
- (void)refreshWithData:(id)arg0 risingHotSpotList:(id)arg1 paramsModel:(id)arg2 otherParams:(id)arg3;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)selectSameHotSpotModel:(id)arg0;
- (id)tabManager;
- (void)setIndex:(long long)arg0;
- (void)setContext:(id)arg0;
- (void)reloadData;
- (long long)index;
- (id)context;
- (id)scrollView;

@optional

- (void)scrollToNewHotSpotModel:(id)arg0 isScrolled:(BOOL)arg1;
- (void)fetchTabDataIfNeeded:(id /* block */)arg0;

@end