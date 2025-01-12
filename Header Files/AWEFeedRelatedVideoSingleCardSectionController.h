//
//     Generated by private class-dump
//

@class NSString, AWEFeedRVSingleListCardPageContext, NSIndexPath, AWEFeedRelatedVideoSingleCardCell;

@interface AWEFeedRelatedVideoSingleCardSectionController : AWEBaseListSectionController <AWEUserMessage, AWEGuestModeMessage> {
    AWEFeedRVSingleListCardPageContext *_context;
    NSIndexPath *_scheduledPreloadIndexPath;
    AWEFeedRelatedVideoSingleCardCell *_preloadCell;
}

@property (retain, nonatomic) AWEFeedRVSingleListCardPageContext *context;
@property (retain, nonatomic) NSIndexPath *scheduledPreloadIndexPath;
@property (retain, nonatomic) AWEFeedRelatedVideoSingleCardCell *preloadCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (id)cellForItemAtIndex:(long long)arg0;
- (id)cellIdentifierForModel:(id)arg0 index:(long long)arg1;
- (double)interactionViewHeight;
- (double)authorInfoViewHeight;
- (void)setScheduledPreloadIndexPath:(id)arg0;
- (id)scheduledPreloadIndexPath;
- (void)guestDidFinishFollowUser:(id)arg0 isUnfollow:(BOOL)arg1;
- (id)preloadCell;
- (void)syncFollowStatus:(id)arg0 status:(long long)arg1;
- (double)getCardInfoHeight:(id)arg0 withDescriptionLimit:(BOOL)arg1;
- (double)getPlayerOriginYWithModel:(id)arg0;
- (void)setPreloadCell:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (Class)cellClass;
- (id)context;
- (void)dealloc;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
