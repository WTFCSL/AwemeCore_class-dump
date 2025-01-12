//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol IESLivePaidStreamProvider, IESPlaybackVideoPaidDelegate;

@protocol IESPlaybackPaidStreamSearchProvider <NSObject>

@property (readonly, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (weak, nonatomic) id<IESPlaybackVideoPaidDelegate> delegate;
@property (readonly, nonatomic, getter=isInFreeTrialFinish) BOOL inFreeTrialFinish;
@property (copy, nonatomic) NSDictionary *logExtra;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)paidStream;
- (void)handleChannelMessage:(id)arg0;
- (id)updateWithEpisode:(id)arg0;
- (BOOL)isInFreeTrialFinish;
- (void)updateTimeInPlaybackForDistribute:(double)arg0;
- (void)startInPlaybackForDistribute;
- (void)finishInPlaybackForDistribute;
- (id)delegate;
- (void)uninstall;
- (void)setDelegate:(id)arg0;

@end
