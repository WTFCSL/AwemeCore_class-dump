//
//     Generated by private class-dump
//

@interface VeCoreMessageChannelStatistics : NSObject {
    long long _sendCount;
    long long _recvCount;
}

@property (nonatomic) long long sendCount;
@property (nonatomic) long long recvCount;

- (long long)recvCount;
- (void)setRecvCount:(long long)arg0;
- (id)init;
- (id)jsonString;
- (long long)sendCount;
- (void)setSendCount:(long long)arg0;

@end