//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPostLayoutManager : NSObject <AWEPostLayoutManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowingToast;
+ (BOOL)didHighlightSettings;
+ (void)setDidHighlightSettings:(BOOL)arg0;
+ (void)setShouldShowToast:(BOOL)arg0;
+ (BOOL)enableWaterfallSwtich;
+ (id)storageKeyForCurrentUser:(id)arg0;
+ (void)trackLayoutChangeRequest:(id)arg0 error:(id)arg1;
+ (BOOL)enableSettings;
+ (unsigned long long)getLayoutStyle;
+ (void)updateLayoutStyle:(unsigned long long)arg0 completion:(id /* block */)arg1;
+ (BOOL)shouldShownToast;
+ (BOOL)shouldShowWaterfallBottomNotification;
+ (void)setShouldShowWaterfallBottomNotification:(BOOL)arg0;
+ (BOOL)hasShowWaterfallBottomNotification;
+ (void)setHasShowWaterfallBottomNotification:(BOOL)arg0;
+ (BOOL)shouldShowWaterfallBottomNotificationForNextDay;
+ (void)setShouldShowWaterfallBottomNotificationForNextDay:(BOOL)arg0 updateDate:(BOOL)arg1;
+ (BOOL)isInShowWaterfallBottomNotificationForNextDay;
+ (void)setInShowWaterfallBottomNotificationForNextDay:(BOOL)arg0;
+ (BOOL)shouldShowWaterfallLayoutSheet;
+ (void)setShouldShowWaterfallLayoutSheet:(BOOL)arg0;
+ (BOOL)hasShowWaterfallLayoutSheet;
+ (void)setHasShowWaterfallLayoutSheet:(BOOL)arg0;
+ (void)setLayoutStyle:(unsigned long long)arg0;
+ (void)setShowingToast:(BOOL)arg0;

@end
