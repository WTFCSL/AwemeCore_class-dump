//
//     Generated by private class-dump
//

@class NSArray;

@protocol IESLivePlaybackSeekRouter <NSObject>

@property (readonly, nonatomic) NSArray *signModels;

- (BOOL)isHiddenWatchNewBtn;
- (void)updateUIProgress:(double)arg0 withAction:(unsigned long long)arg1 isEndSeek:(BOOL)arg2;
- (unsigned long long)nextSignModelIndex;
- (void)coloringProgressWithModels:(id)arg0;
- (id)signModels;

@end
