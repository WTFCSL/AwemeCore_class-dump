//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFeedTagsPosPriorityAvoidElementProtocol;

@interface AWEFeedTagsPriorityManager : NSObject <AWEFeedTagsPriorityManagerProtocol> {
    id<AWEFeedTagsPosPriorityAvoidElementProtocol> _currentShownElement;
}

@property (weak, nonatomic) id<AWEFeedTagsPosPriorityAvoidElementProtocol> currentShownElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insertPriorityDict;
+ (id)staticPriorityDict;
+ (id)priorityDictForOriginLabels;
+ (long long)getPriorityWithBusinessStr:(id)arg0;

- (id)currentShownElement;
- (void)tagsPositionElementFilter:(id)arg0 awemeModel:(id)arg1;
- (void)setCurrentShownElement:(id)arg0;
- (id)currentShowElement;
- (BOOL)priorityCompare:(id)arg0 requestPriority:(long long)arg1;
- (BOOL)tryReplaceCurrentShownElement:(id)arg0;
- (BOOL)tryReplaceCurrentShownElementForTagElement:(id)arg0 businessStr:(id)arg1 didAppear:(BOOL)arg2;
- (void)forceReplaceCurrentShownElement:(id)arg0;
- (void).cxx_destruct;
- (void)reset;

@end