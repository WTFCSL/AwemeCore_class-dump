//
//     Generated by private class-dump
//

@class AWEPlayInteractionSocialTagsView, AWEMarkView, UIView, AWEAwemeModel, AWEGradientView;
@protocol AWEPOIEntryAnchorViewManagerProtocol, AWEMultiAnchorExtendViewProtocol, AWEFeedRelationViewProtocol, AWEFeedAnchorViewBehaviorProtocol;

@interface AWENearbySkyLightAnchorContainerView : UIView {
    id /* block */ _clickPOIInfoBlock;
    id<AWEPOIEntryAnchorViewManagerProtocol> _poiAnchorManager;
    UIView<AWEMultiAnchorExtendViewProtocol, AWEFeedAnchorViewBehaviorProtocol> *_poiView;
    UIView<AWEFeedRelationViewProtocol> *_relationView;
    AWEMarkView *_distanceView;
    AWEPlayInteractionSocialTagsView *_socialTagsView;
    AWEAwemeModel *_model;
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) id<AWEPOIEntryAnchorViewManagerProtocol> poiAnchorManager;
@property (retain, nonatomic) UIView<AWEMultiAnchorExtendViewProtocol, AWEFeedAnchorViewBehaviorProtocol> *poiView;
@property (retain, nonatomic) UIView<AWEFeedRelationViewProtocol> *relationView;
@property (retain, nonatomic) AWEMarkView *distanceView;
@property (retain, nonatomic) AWEPlayInteractionSocialTagsView *socialTagsView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) id /* block */ clickPOIInfoBlock;

- (void)__setupUI;
- (id)poiView;
- (void)setPoiView:(id)arg0;
- (id)relationView;
- (void)setRelationView:(id)arg0;
- (void)setClickPOIInfoBlock:(id /* block */)arg0;
- (void)updatePOIInfoWithAwemeModel:(id)arg0;
- (void)updateAnchorContentLayoutWithScaleFeed:(BOOL)arg0;
- (void)trackShowNearbySkyLightAnchor;
- (id)poiAnchorManager;
- (void)__clickPOIInfoAction:(id)arg0;
- (void)distanceViewChangeInteraction;
- (id)socialTagsView;
- (double)__leftContainerWidth;
- (id)distanceView;
- (BOOL)__shouldShowPOIInfoWithModel:(id)arg0;
- (BOOL)__shouldShowSocialTagsWithModel:(id)arg0;
- (BOOL)__shouldShowRelationInfoWithModel:(id)arg0;
- (BOOL)__shouldShowDistanceInfoWithModel:(id)arg0;
- (long long)skylightAnchorType;
- (id /* block */)clickPOIInfoBlock;
- (void)setPoiAnchorManager:(id)arg0;
- (void)setDistanceView:(id)arg0;
- (void)setSocialTagsView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (id)gradientView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
