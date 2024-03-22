//
//     Generated by private class-dump
//

@class NSArray, AWEProfileHeaderContext, NSString;
@protocol AFDFollowRequestRemindManagerProtocol;

@interface AWEProfileHeaderProfileRecommendSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol> {
    BOOL _isRelationReasonTracked;
    BOOL _isPreviousAndServerRelationSame;
    AWEProfileHeaderContext *_context;
    id<AFDFollowRequestRemindManagerProtocol> _followRequestManager;
    NSArray *_mutiAvatarsEntry;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL isRelationReasonTracked;
@property (retain, nonatomic) NSArray *mutiAvatarsEntry;
@property (nonatomic) BOOL isPreviousAndServerRelationSame;
@property (retain, nonatomic) id<AFDFollowRequestRemindManagerProtocol> followRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowMoreMenueWithContext:(id)arg0;
+ (BOOL)showProfileRecommendViewWithContext:(id)arg0;

- (id)followRequestManager;
- (void)configWithContext:(id)arg0;
- (BOOL)shouldShowAvatar;
- (BOOL)isRelationReasonTracked;
- (void)setIsRelationReasonTracked:(BOOL)arg0;
- (double)topPaddingWithUpperSection:(long long)arg0;
- (double)bottomPaddingWithLowerSection:(long long)arg0;
- (void)trackForRelationReason;
- (id)recommendReasonShowText:(id)arg0 needTrack:(BOOL)arg1;
- (BOOL)shouldUseNewReason:(id)arg0;
- (id)commonMultiAvatars;
- (BOOL)shouldShowCommonPageEntry;
- (void)didTapProfileRecommendView;
- (void)setFollowRequestManager:(id)arg0;
- (void)__trackRecReasonComparison;
- (void)__trackRecommenReasonIfNeededWithContext:(id)arg0 withEventName:(id)arg1;
- (id)privacyMapContext:(id)arg0;
- (id)reasonStatus:(id)arg0;
- (id)reasonPrevious:(id)arg0;
- (id)reasonServer:(id)arg0;
- (void)__trackRecommenRreasonWithPrevious:(id)arg0 server:(id)arg1;
- (BOOL)shouldShowReasonStatus:(id)arg0;
- (void)filterCommonRelationAvatarsWithContext:(id)arg0;
- (void)setIsPreviousAndServerRelationSame:(BOOL)arg0;
- (void)setMutiAvatarsEntry:(id)arg0;
- (BOOL)isPreviousAndServerRelationSame;
- (BOOL)commonPageAvailabel;
- (BOOL)canShowMoreMenue;
- (BOOL)canHidePost;
- (void)__showProfileMenuWithMethod:(unsigned long long)arg0;
- (BOOL)canTapToCommonPage;
- (id)mutiAvatarsEntry;
- (void).cxx_destruct;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (id)context;
- (struct CGSize { double x0; double x1; })sectionSize;

@end