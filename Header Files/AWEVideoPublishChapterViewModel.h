//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEVideoPublishChapterViewModel : NSObject {
    BOOL _isIntelligentChapter;
    NSMutableArray *_chapterDetails;
    long long _chapterType;
    unsigned long long _chapterRecommendType;
    NSMutableArray *_chapterRecommendDetail;
}

@property (retain, nonatomic) NSMutableArray *chapterDetails;
@property (nonatomic) long long chapterType;
@property (nonatomic) BOOL isIntelligentChapter;
@property (nonatomic) unsigned long long chapterRecommendType;
@property (retain, nonatomic) NSMutableArray *chapterRecommendDetail;

- (id)chapterDetails;
- (void)setChapterDetails:(id)arg0;
- (BOOL)removeChapterPointTimestamp:(long long)arg0;
- (id)sortedChapterDetails;
- (id)findChapterPointWithTimestamp:(long long)arg0;
- (void)setIsIntelligentChapter:(BOOL)arg0;
- (BOOL)isIntelligentChapter;
- (unsigned long long)chapterRecommendType;
- (void)setChapterRecommendType:(unsigned long long)arg0;
- (id)addChapterPointTimestamp:(long long)arg0 desc:(id)arg1;
- (void)setChapterRecommendDetail:(id)arg0;
- (BOOL)canAddChapterPointTimestamp:(long long)arg0;
- (id)chapterRecommendDetail;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)chapterType;
- (void)setChapterType:(long long)arg0;

@end
