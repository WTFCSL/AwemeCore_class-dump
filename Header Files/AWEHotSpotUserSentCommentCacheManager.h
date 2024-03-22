//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEHotSpotUserSentCommentCacheManager : NSObject {
    unsigned long long _offset;
    NSMutableArray *_commentsArray;
    NSString *_hotSpotWord;
}

@property (nonatomic) unsigned long long offset;
@property (retain, nonatomic) NSMutableArray *commentsArray;
@property (retain, nonatomic) NSString *hotSpotWord;

+ (id)hotSpotWord;
+ (id)createInstanceWithHotSpotWord:(id)arg0;
+ (void)onExitGeneralSearch;
+ (id)getCommentsFromHotSearchDiscussion;
+ (id)getCommentsFromGeneralSearchDiscussion;
+ (id)sharedInstance;
+ (void)addComment:(id)arg0;

- (id)hotSpotWord;
- (void)setHotSpotWord:(id)arg0;
- (id)commentsArray;
- (void)onExitGeneralSearch;
- (id)getCommentsFromHotSearchDiscussion;
- (id)getCommentsFromGeneralSearchDiscussion;
- (void)setCommentsArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setOffset:(unsigned long long)arg0;
- (unsigned long long)offset;
- (void)addComment:(id)arg0;

@end