//
//     Generated by private class-dump
//

@interface IESLiveMIFullLinkChatDisplayDataModel : NSObject {
    long long _chatSendCount;
    long long _chatSendSuccessCount;
    long long _chatDisplayCount;
    double _chatTimeFromSendToSucceed;
    double _chatTimeFromSendToDisplay;
}

@property (nonatomic) long long chatSendCount;
@property (nonatomic) long long chatSendSuccessCount;
@property (nonatomic) long long chatDisplayCount;
@property (nonatomic) double chatTimeFromSendToSucceed;
@property (nonatomic) double chatTimeFromSendToDisplay;

- (long long)chatSendCount;
- (void)setChatSendCount:(long long)arg0;
- (long long)chatSendSuccessCount;
- (void)setChatSendSuccessCount:(long long)arg0;
- (long long)chatDisplayCount;
- (void)setChatDisplayCount:(long long)arg0;
- (double)chatTimeFromSendToDisplay;
- (void)setChatTimeFromSendToDisplay:(double)arg0;
- (double)chatTimeFromSendToSucceed;
- (void)setChatTimeFromSendToSucceed:(double)arg0;

@end