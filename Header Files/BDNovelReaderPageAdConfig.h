//
//     Generated by private class-dump
//

@interface BDNovelReaderPageAdConfig : BDNovelReaderBaseAdConfig {
    BOOL _repeat;
    unsigned long long _gapTime;
}

@property (nonatomic) unsigned long long gapTime;
@property (nonatomic) BOOL repeat;

- (void)setGapTime:(unsigned long long)arg0;
- (unsigned long long)gapTime;
- (id)initWithDict:(id)arg0;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg0;

@end
