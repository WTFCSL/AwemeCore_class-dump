//
//     Generated by private class-dump
//

@class AWEDetailVideoCutTemplateViewModel, NSString;

@interface AWEDetailVideoCutTemplateTracker : NSObject <AWEDetailTrackerService> {
    AWEDetailVideoCutTemplateViewModel *_viewModel;
}

@property (retain, nonatomic) AWEDetailVideoCutTemplateViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackActivityEntranceShowWithModel:(id)arg0;

- (void)trackEnterPersonalDetailWithModel:(id)arg0;
- (void)trackClickLinkWithModel:(id)arg0;
- (void)trackFeedEnterWithModel:(id)arg0;
- (void)trackDetailPageClientShowWithModel:(id)arg0;
- (void)trackClickedShootButton;
- (void)trackFavoriteIconShow;
- (void)trackFavoriteActionClickedWithActionType:(BOOL)arg0;
- (void)trackTemplateCollectStateWithTemplateID:(id)arg0 templateType:(long long)arg1 isCollectAction:(BOOL)arg2 Error:(id)arg3;
- (id)initWithStateContext:(id)arg0;
- (void)trackActionButtonClickWithType:(id)arg0;
- (void)trackEnterTemplateDetail;
- (void)trackVideocutDetailPageShow;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
