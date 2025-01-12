//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHotSpotInterestPanelManager : NSObject <AWEHotSpotInterestPanelDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableShowInterestPanel;
+ (id)interestPanelContainer;
+ (void)trackForInterestPanelEvent:(id)arg0;
+ (void)checkToShowPanelWithCompletion:(id /* block */)arg0;
+ (void)markHasVisitHotSpotChannel;
+ (id)interestPanelTextModel;
+ (long long)minSelectInterestNumber;
+ (void)showInterestPanelIfNeeded:(id)arg0;
+ (void)dissmissInterestPanel;
+ (void)saveSelectionForInterestLabels:(id)arg0 completion:(id /* block */)arg1;
+ (double)maxHeightForInterestPanel;
+ (void)trackForInterestTagEvent:(id)arg0 withLabel:(id)arg1;

@end
