//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelAudioTimePoint : NSObject {
    BOOL _isTitle;
    int _startPara;
    int _startParaOff;
    int _endPara;
    int _endParaOff;
    long long _startTime;
    long long _endTime;
    NSString *_contentMd5;
    long long _audioItemId;
    long long _novelItemId;
}

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isTitle;
@property (nonatomic) int startPara;
@property (nonatomic) int startParaOff;
@property (nonatomic) int endPara;
@property (nonatomic) int endParaOff;
@property (copy, nonatomic) NSString *contentMd5;
@property (nonatomic) long long audioItemId;
@property (nonatomic) long long novelItemId;

- (void)updateWithDict:(id)arg0;
- (void)setStartPara:(int)arg0;
- (void)setStartParaOff:(int)arg0;
- (void)setEndPara:(int)arg0;
- (void)setEndParaOff:(int)arg0;
- (int)startPara;
- (int)startParaOff;
- (int)endPara;
- (int)endParaOff;
- (id)contentMd5;
- (void)setContentMd5:(id)arg0;
- (long long)audioItemId;
- (void)setAudioItemId:(long long)arg0;
- (long long)novelItemId;
- (void)setNovelItemId:(long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)startTime;
- (void)setEndTime:(long long)arg0;
- (BOOL)isTitle;
- (void)setIsTitle:(BOOL)arg0;

@end