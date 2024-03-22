//
//     Generated by private class-dump
//

@class NSArray, AWETwoTuple, AWEStudioVideoAnchorModel;

@protocol AWEPostPageAnchorService <AWEPostPageBaseService>

@property (readonly, nonatomic) AWEStudioVideoAnchorModel *currentAnchor;
@property (readonly, nonatomic) AWETwoTuple *revertAnchorInformationSignal;
@property (readonly, nonatomic) NSArray *subscribersCopy;
@property (readonly, nonatomic) AWETwoTuple *normalAnchorVM;
@property (readonly, nonatomic) AWETwoTuple *abNormalAnchorVM;

- (id)anchorWithType:(long long)arg0;
- (id)publishAnchorArray;
- (id)anchorContext;
- (BOOL)shouldShowAggregateAnchor;
- (BOOL)anchor:(id)arg0 shouldSelectAnchorWithType:(long long)arg1;
- (id)trackParamsWithExtra:(id)arg0;
- (id)AIAnchorModel;
- (BOOL)hasCommonAnchorEntranceWithType:(long long)arg0;
- (BOOL)showShareOrder;
- (void)trackSingleAnchorEntranceShowWithType:(long long)arg0 extra:(id)arg1;
- (void)trackSingleAnchorEntranceClickWithType:(long long)arg0 extra:(id)arg1;
- (void)anchor:(id)arg0 setViewModel:(id)arg1;
- (BOOL)shouldShowAggregateAnchorInImageAlbum;
- (id)exclusiveToastWithAnchorA:(id)arg0 andAnchorB:(id)arg1;
- (BOOL)isSelectedPOITradeAnchor;
- (void)setCurrentAnchorTitle:(id)arg0;
- (id)revertAnchorInformationSignal;
- (id)subscribersCopy;
- (id)normalAnchorVM;
- (id)abNormalAnchorVM;
- (id)currentAnchor;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end
