//
//     Generated by private class-dump
//

@protocol BDATC2STrackerDelegate;

@protocol BDATC2STracker <BDATThirdTracker>

@property (weak, nonatomic) id<BDATC2STrackerDelegate> delegate;

- (void)trackURLs:(id)arg0;
- (void)trackModel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end