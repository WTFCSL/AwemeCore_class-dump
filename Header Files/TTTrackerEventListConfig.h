//
//     Generated by private class-dump
//

@class NSSet, NSDictionary;

@interface TTTrackerEventListConfig : NSObject {
    BOOL _isBlockList;
    NSSet *_filterEvents;
    NSDictionary *_filterParams;
}

@property (nonatomic) BOOL isBlockList;
@property (copy) NSSet *filterEvents;
@property (copy) NSDictionary *filterParams;

- (BOOL)isBlockList;
- (void)setFilterParams:(id)arg0;
- (id)filterParams;
- (void)updateEventList:(id)arg0;
- (void)setIsBlockList:(BOOL)arg0;
- (void)setFilterEvents:(id)arg0;
- (id)filterEvents;
- (id)filterTrackWithEvent:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clearList;

@end
