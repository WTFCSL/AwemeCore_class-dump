//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelComicRetainExitRecommend : NSObject {
    NSString *_title;
    long long _frequency;
    long long _currentNeedReadCount;
    long long _lastReadProgress;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long frequency;
@property (nonatomic) long long currentNeedReadCount;
@property (nonatomic) long long lastReadProgress;

- (void)updateWithDict:(id)arg0;
- (void)setCurrentNeedReadCount:(long long)arg0;
- (void)setLastReadProgress:(long long)arg0;
- (long long)currentNeedReadCount;
- (long long)lastReadProgress;
- (void).cxx_destruct;
- (id)title;
- (void)setFrequency:(long long)arg0;
- (long long)frequency;
- (void)setTitle:(id)arg0;

@end