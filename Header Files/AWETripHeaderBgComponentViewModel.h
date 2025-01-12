//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, NSArray, NSNumber, AWETripHeaderBgComponentView;

@interface AWETripHeaderBgComponentViewModel : DitoComponentViewModel {
    NSDictionary *_poiHeadRateFeed;
    long long _tripHeadImageExpandOpt;
    AWETripHeaderBgComponentView *_componentView;
    NSString *_nodeTag;
    NSDictionary *_albumBottomBarParams;
    NSDictionary *_bottomBarUpdateInfo;
    NSMutableDictionary *_reportedMaps;
    NSNumber *_defaultOffset;
}

@property (copy, nonatomic) NSString *nodeTag;
@property (retain, nonatomic) NSDictionary *poiHeadRateFeed;
@property (retain, nonatomic) NSDictionary *albumBottomBarParams;
@property (retain, nonatomic) NSDictionary *bottomBarUpdateInfo;
@property (nonatomic) long long tripHeadImageExpandOpt;
@property (retain, nonatomic) NSMutableDictionary *reportedMaps;
@property (retain, nonatomic) NSNumber *defaultOffset;
@property (readonly, nonatomic) NSArray *poiHeaderPhotos;
@property (readonly, nonatomic) NSArray *tagList;
@property (readonly, nonatomic) NSArray *nextIndexList;
@property (readonly, nonatomic) long long picTotalCount;
@property (readonly, nonatomic) double originImageHeight;
@property (weak, nonatomic) AWETripHeaderBgComponentView *componentView;

- (id)tagList;
- (double)originImageHeight;
- (id)poiDetail;
- (void)handleClickEvent:(id)arg0;
- (id)generalContext;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)didLoadPageModel:(id)arg0;
- (void)didHalfContainerOffsetChange:(id)arg0 offset:(double)arg1;
- (void)fullContainerBeginPull:(double)arg0;
- (void)fullContainerUnfoldWillChange:(double)arg0 isMaxUnfold:(BOOL)arg1 duration:(double)arg2;
- (void)fullContainerUnfoldDidChange:(double)arg0 isMaxUnfold:(BOOL)arg1;
- (long long)picTotalCount;
- (id)nodeTag;
- (void)setNodeTag:(id)arg0;
- (id)poiHeadRateFeed;
- (id)poiHeaderPhotos;
- (id)nextIndex:(long long)arg0;
- (long long)tripHeadImageExpandOpt;
- (void)openAlbumPageAtIndex:(long long)arg0;
- (void)openHeaderPhotosAtIndex:(long long)arg0;
- (void)trackerBgImageClick:(long long)arg0;
- (void)trackerBgImageSlide:(long long)arg0;
- (void)trackerBgImageShow:(id)arg0;
- (void)trackerTagListClick:(id)arg0 lastTabName:(id)arg1;
- (void)trackerTagListSlide;
- (void)trackerTagListShow;
- (void)trackerCommentTagShow;
- (void)trackerCommentClick:(long long)arg0;
- (void)subscribeBottomBarButtonInfo;
- (void)setBottomBarUpdateInfo:(id)arg0;
- (void)trackerPullMax:(BOOL)arg0;
- (id)defaultOffset;
- (void)setDefaultOffset:(id)arg0;
- (id)generateArrayWithIndex:(long long)arg0;
- (id)nextIndexList;
- (id)queryNextIndexWithIndex:(long long)arg0 indexArray:(id)arg1;
- (id)bottomBarUpdateInfo;
- (id)albumBottomBarParams;
- (id)reportedMaps;
- (BOOL)isReportedEvent:(id)arg0;
- (void)reportedEvent:(id)arg0;
- (void)setPoiHeadRateFeed:(id)arg0;
- (void)setTripHeadImageExpandOpt:(long long)arg0;
- (void)setAlbumBottomBarParams:(id)arg0;
- (void)setReportedMaps:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (void)dealloc;
- (void)setComponentView:(id)arg0;
- (id)componentView;

@end
