//
//     Generated by private class-dump
//

@interface BSTViewUtils : NSObject

+ (BOOL)bstEnableToTrackWithExposureScale:(double)arg0 ofView:(id)arg1;
+ (BOOL)bstDidDisplayedOfView:(id)arg0;
+ (void)clearCacheOfView:(id)arg0;
+ (BOOL)bstViewVisibleOfView:(id)arg0;
+ (BOOL)isInCurrentTopPageForView:(id)arg0;
+ (BOOL)bstIsInKeyWindowForView:(id)arg0 withImpressionScale:(double)arg1;
+ (BOOL)bstIsShadedByView:(id)arg0 impressionScale:(double)arg1 forOriginView:(id)arg2;
+ (BOOL)bstIsShadedByViews:(id)arg0 impressionScale:(double)arg1 forbiddenTraverse:(BOOL)arg2 forOriginView:(id)arg3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bstFrameOfView:(id)arg0;
+ (id)bstSubViewWithBtmIdOfView:(id)arg0;

@end