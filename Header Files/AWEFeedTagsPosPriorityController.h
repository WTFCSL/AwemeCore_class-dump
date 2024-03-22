//
//     Generated by private class-dump
//

@class AWEFeedTagsPriorityManager, NSPointerArray;

@interface AWEFeedTagsPosPriorityController : AWEPlayInteractionBaseController {
    AWEFeedTagsPriorityManager *_tagsPriorityManager;
    NSPointerArray *_tagsElements;
}

@property (retain, nonatomic) AWEFeedTagsPriorityManager *tagsPriorityManager;
@property (retain, nonatomic) NSPointerArray *tagsElements;

- (void)updateAllSubViews;
- (id)tagsPriorityManager;
- (void)setTagsPriorityManager:(id)arg0;
- (id)tagsElements;
- (void)setTagsElements:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end