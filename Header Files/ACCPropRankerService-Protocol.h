//
//     Generated by private class-dump
//

@protocol ACCPropRankerService

- (void)propShow:(id)arg0;
- (void)startRank;
- (void)stopRank;
- (void)updatePropList:(id)arg0;
- (void)propSelected:(id)arg0;
- (void)propStay:(id)arg0 duration:(double)arg1;
- (void)updateHasRecord:(BOOL)arg0 withPropId:(id)arg1;
- (void)updateLastRecordDuration:(double)arg0 withPropId:(id)arg1;
- (void)updateIsFavorite:(BOOL)arg0 withPropId:(id)arg1;
- (void)setListener:(id)arg0;

@end
