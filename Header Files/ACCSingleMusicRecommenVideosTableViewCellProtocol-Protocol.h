//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol ACCSingleMusicRecommenVideosTableViewCellDelegate;

@protocol ACCSingleMusicRecommenVideosTableViewCellProtocol <NSObject>

@property (weak, nonatomic) id<ACCSingleMusicRecommenVideosTableViewCellDelegate> delegate;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL showTopSeparatorLine;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ solveCloseGesture;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)stopVideoPlay;
- (void)setShowTopSeparatorLine:(BOOL)arg0;
- (id /* block */)solveCloseGesture;
- (void)updateWithModel:(id)arg0 offsetX:(double)arg1 lastPlayedIndex:(long long)arg2;
- (void)updateWithModel:(id)arg0 offsetX:(double)arg1;
- (struct CGPoint { double x0; double x1; })getListContentOffset;
- (void)clearVideoUseMusicButton;
- (void)removePlayerContainer;
- (void)updateWithModel:(id)arg0 playerContainer:(id)arg1 index:(long long)arg2 offsetX:(double)arg3;
- (BOOL)showTopSeparatorLine;
- (void)setSolveCloseGesture:(id /* block */)arg0;
- (void)setRank:(long long)arg0;
- (long long)rank;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end