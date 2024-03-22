//
//     Generated by private class-dump
//

@class AWEPOIAsyncUIResponse, AWEPOICollectObject, DitoPageContext, NSMutableDictionary, NSDictionary, AWERxObservable, AWERxReadonlyProperty, NSNumber;

@interface AWEPOIDetailStore : AWERxBaseStore {
    BOOL _hasAsyncUIRequestEnded;
    AWERxReadonlyProperty *_baseInfoRendered;
    AWERxReadonlyProperty *_topHeaderOffset;
    AWERxReadonlyProperty *_infoListHeight;
    AWERxReadonlyProperty *_constData;
    AWERxReadonlyProperty *_isViewAppear;
    AWERxReadonlyProperty *_isAwemeAppear;
    AWERxReadonlyProperty *_poiDetail;
    AWERxReadonlyProperty *_isFavorited;
    AWERxReadonlyProperty *_favoritedCount;
    AWERxReadonlyProperty *_contentYOffset;
    AWERxReadonlyProperty *_isShowFullScreenAwemeList;
    AWERxReadonlyProperty *_isShowStickyFooter;
    AWERxReadonlyProperty *_isShowLocationBottomBar;
    AWERxReadonlyProperty *_showSimilarRecommendPOI;
    AWEPOIAsyncUIResponse *_asyncUIResponse;
    AWERxObservable *_detailEvent;
    NSMutableDictionary *_cellHeights;
    NSDictionary *_lynxDatas;
    NSNumber *_borderRadius;
    DitoPageContext *_context;
    AWEPOICollectObject *_collectObject;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margin;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (retain, nonatomic) NSMutableDictionary *cellHeights;
@property (retain, nonatomic) NSDictionary *lynxDatas;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (readonly, nonatomic) AWERxReadonlyProperty *baseInfoRendered;
@property (readonly, nonatomic) AWERxReadonlyProperty *topHeaderOffset;
@property (readonly, nonatomic) AWERxReadonlyProperty *infoListHeight;
@property (readonly, nonatomic) AWERxReadonlyProperty *constData;
@property (readonly, nonatomic) AWERxReadonlyProperty *isViewAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *isAwemeAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *poiDetail;
@property (readonly, nonatomic) AWERxReadonlyProperty *isFavorited;
@property (readonly, nonatomic) AWERxReadonlyProperty *favoritedCount;
@property (readonly, nonatomic) AWERxReadonlyProperty *contentYOffset;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowFullScreenAwemeList;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowStickyFooter;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowLocationBottomBar;
@property (readonly, nonatomic) AWERxReadonlyProperty *showSimilarRecommendPOI;
@property (nonatomic) BOOL hasAsyncUIRequestEnded;
@property (retain, nonatomic) AWEPOIAsyncUIResponse *asyncUIResponse;
@property (readonly, nonatomic) AWERxObservable *detailEvent;
@property (readonly, nonatomic) BOOL liveScene;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSNumber *borderRadius;
@property (weak, nonatomic) DitoPageContext *context;

+ (id)p_sharedFavoritedStateOfPoiId:(id)arg0;

- (id)isViewAppear;
- (id)poiDetail;
- (BOOL)dispatchAction:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)setState:(id)arg0 withValue:(id)arg1 context:(id)arg2;
- (id)favoritedCount;
- (id)constData;
- (id)contentYOffset;
- (id)isShowFullScreenAwemeList;
- (void)setHasAsyncUIRequestEnded:(BOOL)arg0;
- (void)setAsyncUIResponse:(id)arg0;
- (id)asyncUIResponse;
- (id)baseInfoRendered;
- (id)detailEvent;
- (void)updateCellHeightsWithCellKey:(id)arg0 height:(double)arg1;
- (id)infoListHeight;
- (id)topHeaderOffset;
- (BOOL)liveScene;
- (id)showSimilarRecommendPOI;
- (id)collectObject;
- (void)setCollectObject:(id)arg0;
- (BOOL)hasAsyncUIRequestEnded;
- (id)initWithModule:(id)arg0 poiId:(id)arg1;
- (void)p_bindStateWithPoiId:(id)arg0;
- (void)handleOuterFavorateActionNotification:(id)arg0;
- (void)p_favoriteWithContext:(id)arg0;
- (void)showSimilarPOIWithContext:(id)arg0 completion:(id /* block */)arg1;
- (id)isShowStickyFooter;
- (id)isShowLocationBottomBar;
- (id)isAwemeAppear;
- (BOOL)showCollectGuideIfNeeded:(id)arg0;
- (id)lynxDatas;
- (void)setLynxDatas:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margin;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)context;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (id)initWithModule:(id)arg0;
- (id)borderRadius;
- (id)isFavorited;
- (id)cellHeights;
- (void)setCellHeights:(id)arg0;
- (void)setBorderRadius:(id)arg0;

@end