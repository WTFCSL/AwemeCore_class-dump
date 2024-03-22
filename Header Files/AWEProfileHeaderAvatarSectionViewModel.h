//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderAvatarSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderAvatarSectionProtocol> {
    BOOL _isFirstTimeViewDidLoad;
    AWEProfileHeaderContext *_context;
    NSString *_avatarAccessibilityLabel;
    NSString *_liveHomePageRefer;
    double _footerHeight;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (readonly, copy, nonatomic) NSString *vsSchema;
@property (copy, nonatomic) NSString *avatarAccessibilityLabel;
@property (copy, nonatomic) NSString *liveHomePageRefer;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canEnterLiveRoomWithContext:(id)arg0;
+ (id)defaultAvatarBgColor;
+ (BOOL)canShowFormatBreathingViewWithContext:(id)arg0;
+ (BOOL)canEnterFormatRoomWithContext:(id)arg0;

- (void)configWithContext:(id)arg0;
- (BOOL)isFirstTimeViewDidLoad;
- (void)setIsFirstTimeViewDidLoad:(BOOL)arg0;
- (double)topPaddingWithUpperSection:(long long)arg0;
- (double)bottomPaddingWithLowerSection:(long long)arg0;
- (void)avatarDecorationDidShowAndTrackEvent;
- (void)avatarDecorationWillShowAndTrackEvent;
- (void)trackLivePreviewPlayEvent;
- (void)avatarLiveDidShowAndTrackEventWithAvatarView:(id)arg0;
- (void)trackClickProfileIconWithDecorationHidden:(BOOL)arg0 enterLive:(BOOL)arg1;
- (void)setLiveHomePageRefer:(id)arg0;
- (void)trackAdsAweme;
- (id)vsSchema;
- (id)tackStringForEpisodeType:(long long)arg0;
- (id)tackStringForEpisodeSubtype:(long long)arg0;
- (id)avatarAccessibilityLabel;
- (void)setAvatarAccessibilityLabel:(id)arg0;
- (id)liveHomePageRefer;
- (id)init;
- (void).cxx_destruct;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (id)context;
- (struct CGSize { double x0; double x1; })sectionSize;
- (double)footerHeight;

@end
