//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@protocol AFDMentionListCacheModelProtocol

@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSArray *mentionList;
@property (nonatomic, copy) NSArray *recentMentionList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, retain) NSNumber *cursor;

- (id)mentionList;
- (void)setMentionList:(id)arg0;
- (id)recentMentionList;
- (void)setRecentMentionList:(id)arg0;
- (id)cursor;
- (double)timestamp;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTimestamp:(double)arg0;
- (void)setCursor:(id)arg0;

@end
