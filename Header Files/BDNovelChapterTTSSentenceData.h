//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary;

@interface BDNovelChapterTTSSentenceData : NSObject {
    BOOL _isValid;
    NSMutableArray *_sentenceDatas;
    NSMutableDictionary *_paraDatas;
}

@property (retain, nonatomic) NSMutableArray *sentenceDatas;
@property (retain, nonatomic) NSMutableDictionary *paraDatas;
@property (nonatomic) BOOL isValid;

- (void)updateWithDict:(id)arg0;
- (void)setSentenceDatas:(id)arg0;
- (id)sentenceDatas;
- (id)pointWithTime:(long long)arg0;
- (id)pointWithStartPara:(int)arg0 startOff:(int)arg1 endPara:(int)arg2 endOff:(int)arg3;
- (id)getNextPointWithPoint:(id)arg0;
- (id)paraDatas;
- (void)setParaDatas:(id)arg0;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end