//
//     Generated by private class-dump
//

@protocol AWEPOIEntryAnchorUtilProtocol, AWEPOIPlayInteractionVCManagerProtocol, AWEPOIEntryAnchorViewManagerDelegate, AWEPOIAnchorBubbleManagerProtocol;

@protocol AWEPOIEntryAnchorViewManagerProtocol <NSObject>

@property (nonatomic) BOOL useNewStyle;
@property (nonatomic, weak) id<AWEPOIEntryAnchorViewManagerDelegate> anchorDelegate;
@property (nonatomic, weak) id<AWEPOIAnchorBubbleManagerProtocol> bubbleDelegate;
@property (nonatomic, retain) id<AWEPOIEntryAnchorUtilProtocol> poiAnchorUtil;
@property (nonatomic, weak) id<AWEPOIPlayInteractionVCManagerProtocol> delegate;

- (void)handleAnchorEvent:(long long)arg0 withContext:(id)arg1;
- (void)handleAnchorEvent:(long long)arg0 withContext:(id)arg1;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg0;
- (id)bubbleDelegate;
- (void)setBubbleDelegate:(id)arg0;
- (id)poiAnchorUtil;
- (void)setPoiAnchorUtil:(id)arg0;
- (BOOL)shouldShowPOIButtonWithContext:(id)arg0;
- (BOOL)shouldShowPOIButtonWithContext:(id)arg0;
- (BOOL)shouldShowPOIDetailWithContext:(id)arg0;
- (BOOL)shouldShowPOIDetailWithContext:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)anchorView;
- (id)anchorDelegate;
- (void)setAnchorDelegate:(id)arg0;

@end
