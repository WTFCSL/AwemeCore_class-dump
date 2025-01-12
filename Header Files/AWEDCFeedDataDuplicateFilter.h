//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AWEDCFeedPageContext;

@interface AWEDCFeedDataDuplicateFilter : NSObject <AWEDCFeedDataProcessorProtocol> {
    AWEDCFeedPageContext *_context;
    NSMutableSet *_filteredIDSet;
}

@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) NSMutableSet *filteredIDSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterDataArrayWithRequestType:(unsigned long long)arg0 dataArray:(id)arg1 args:(id)arg2;
- (id)duplicateFilterConfig;
- (id)filteredIDSet;
- (void)setFilteredIDSet:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setupWithContext:(id)arg0;

@end
