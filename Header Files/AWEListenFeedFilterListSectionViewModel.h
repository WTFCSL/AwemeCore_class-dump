//
//     Generated by private class-dump
//

@class AWEListenFeedFilterListContext;

@interface AWEListenFeedFilterListSectionViewModel : AWEBaseListSectionViewModel {
    AWEListenFeedFilterListContext *_context;
}

@property (retain, nonatomic) AWEListenFeedFilterListContext *context;

- (void)fetchSectionData;
- (long long)modelsDiffType;
- (void)loadMoreSectionData;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
