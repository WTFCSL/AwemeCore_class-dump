//
//     Generated by private class-dump
//

@class NSArray;

@interface AFDMentionAwemeListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _loadmoreHasMore;
    BOOL _loadPreviousHasPrevious;
    NSArray *_mentionAwemeList;
    NSArray *_userAwemeIDUniqueMarks;
    unsigned long long _topTimeStampCursor;
    unsigned long long _bottomTimeStampCursor;
}

@property (retain, nonatomic) NSArray *mentionAwemeList;
@property (retain, nonatomic) NSArray *userAwemeIDUniqueMarks;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL loadPreviousHasPrevious;
@property (nonatomic) unsigned long long topTimeStampCursor;
@property (nonatomic) unsigned long long bottomTimeStampCursor;

+ (id)mentionAwemeListJSONTransformer;
+ (id)userAwemeIDUniqueMarksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (void)setLoadPreviousHasPrevious:(BOOL)arg0;
- (BOOL)loadPreviousHasPrevious;
- (id)mentionAwemeList;
- (void)setMentionAwemeList:(id)arg0;
- (id)userAwemeIDUniqueMarks;
- (void)setUserAwemeIDUniqueMarks:(id)arg0;
- (unsigned long long)topTimeStampCursor;
- (void)setTopTimeStampCursor:(unsigned long long)arg0;
- (unsigned long long)bottomTimeStampCursor;
- (void)setBottomTimeStampCursor:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
