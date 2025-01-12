//
//     Generated by private class-dump
//

@class NSString, AWEPOIEntryAnchorUtil;
@protocol AWEPOIEntryAnchorUtilProtocol, AWEPOIPlayInteractionVCManagerProtocol, AWEPOIEntryAnchorViewManagerDelegate, AWEPOIAnchorBubbleManagerProtocol;

@interface AWEPOIBaseEntryAnchorViewManager : NSObject <AWEPOIEntryAnchorViewManagerProtocol, AWEPOIEntryAnchorViewManagerOverrideProtocol> {
    BOOL useNewStyle;
    id<AWEPOIPlayInteractionVCManagerProtocol> _delegate;
    id<AWEPOIEntryAnchorViewManagerDelegate> _anchorDelegate;
    id<AWEPOIAnchorBubbleManagerProtocol> _bubbleDelegate;
    id<AWEPOIEntryAnchorUtilProtocol> _poiAnchorUtil;
    AWEPOIEntryAnchorUtil *_anchorUtil;
}

@property (retain, nonatomic) AWEPOIEntryAnchorUtil *anchorUtil;
@property (weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> delegate;
@property (weak, nonatomic) id<AWEPOIEntryAnchorViewManagerDelegate> anchorDelegate;
@property (weak, nonatomic) id<AWEPOIAnchorBubbleManagerProtocol> bubbleDelegate;
@property (retain, nonatomic) id<AWEPOIEntryAnchorUtilProtocol> poiAnchorUtil;
@property (nonatomic) BOOL useNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAnchorEvent:(long long)arg0 withContext:(id)arg1;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg0;
- (id)bubbleDelegate;
- (void)setBubbleDelegate:(id)arg0;
- (id)poiAnchorUtil;
- (void)setPoiAnchorUtil:(id)arg0;
- (BOOL)shouldShowPOIButtonWithContext:(id)arg0;
- (BOOL)shouldShowPOIDetailWithContext:(id)arg0;
- (void)updateUIWithModel:(id)arg0;
- (void)handleClickWithContext:(id)arg0;
- (void)handleExpandStartWithContext:(id)arg0;
- (void)handleSetDataWithContext:(id)arg0;
- (void)handleWillShowOnSuperViewWithContext:(id)arg0;
- (void)handleExpandAnimatingWithContext:(id)arg0;
- (void)handleExpandEndingWithContext:(id)arg0;
- (void)handleResetWithContext:(id)arg0;
- (void)handleTryingExpandWithContext:(id)arg0;
- (void)handleVCWillDisappearWithContext:(id)arg0;
- (void)handlePlayerPlayedPeriodChangedWithContext:(id)arg0;
- (void)handleVCDidAppearWithContext:(id)arg0;
- (void)handleUpdateAnchorViewWithContext:(id)arg0;
- (id)anchorUtil;
- (void)setAnchorUtil:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)anchorView;
- (id)anchorDelegate;
- (void)setAnchorDelegate:(id)arg0;

@end
