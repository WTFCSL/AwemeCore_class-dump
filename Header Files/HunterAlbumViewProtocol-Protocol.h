//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@protocol HunterAlbumViewProtocol <NSObject>

@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;

- (id)referString;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)updateLogExtra:(id)arg0;
- (id)transitionContext;
- (void)stop;
- (void)play;
- (void)pause;
- (void)reset;
- (void)updateWithModel:(id)arg0;

@end
