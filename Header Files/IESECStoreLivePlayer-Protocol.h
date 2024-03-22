//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECStoreLivePlayerDelegate;

@protocol IESECStoreLivePlayer <NSObject>

@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, copy, nonatomic) NSString *currentStreamData;
@property (weak, nonatomic) id<IESECStoreLivePlayerDelegate> delegate;

- (id)currentStreamData;
- (void)updateWithStreamData:(id)arg0;
- (void)updateWithStreamData:(id)arg0 placeholderURLArray:(id)arg1;
- (void)setMuted:(BOOL)arg0;
- (void)stop;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (BOOL)isMuted;

@end
