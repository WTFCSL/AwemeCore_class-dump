//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, AWENearbyPageContext, AWESharkContainerView, NSString;

@interface AWENearbyDiamondContainerView : UIView <AWESharkContainerLoadDelegate, AWENearbyLynxCardEventHandlerProtocol, AWENearbyDiamondContainerProtocol> {
    BOOL _needShowLifeEntranceGuide;
    AWESharkContainerView *_sharkView;
    NSMutableDictionary *_recentLifeServiceDiffHeightDictionary;
    NSDictionary *_trackParams;
    AWENearbyPageContext *_pageContext;
}

@property (retain, nonatomic) AWESharkContainerView *sharkView;
@property (retain, nonatomic) NSMutableDictionary *recentLifeServiceDiffHeightDictionary;
@property (nonatomic) BOOL needShowLifeEntranceGuide;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)findViewWithName:(id)arg0;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)initWithPageContext:(id)arg0;
- (void)onCardStartLoadWithCardUrl:(id)arg0;
- (void)onCardLoadFinished:(id)arg0 card:(id)arg1;
- (void)trackShowAnimated:(BOOL)arg0 params:(id)arg1;
- (void)trackSkylightHidden;
- (void)updateGloabalContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)sharkView;
- (id)lynxViewWithCardType:(long long)arg0;
- (void)updateRecentDiamondDiffHeight:(double)arg0 cardType:(long long)arg1;
- (void)handleLynxViewsShow:(id)arg0 params:(id)arg1;
- (void)handleLynxViewsHidden:(id)arg0 params:(id)arg1;
- (void)setNeedShowLifeEntranceGuide:(BOOL)arg0;
- (id)recentLifeServiceDiffHeightDictionary;
- (BOOL)needShowLifeEntranceGuide;
- (void)onContainerStartLoadWithSchema:(id)arg0;
- (void)onContainerLoadFinished:(id)arg0;
- (void)setSharkView:(id)arg0;
- (void)setRecentLifeServiceDiffHeightDictionary:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
