//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLiveMessageProcesserProvider <IESLiveIMPreprocesserProviderAdapter>

@property (nonatomic) long long firstFetchHistoryMessageCount;
@property (copy, nonatomic) NSString *firstFetchCursor;
@property (nonatomic) BOOL noMoreHistoryMessage;

- (BOOL)noMoreHistoryMessage;
- (void)setNoMoreHistoryMessage:(BOOL)arg0;
- (long long)firstFetchHistoryMessageCount;
- (void)setFirstFetchHistoryMessageCount:(long long)arg0;
- (id)firstFetchCursor;
- (void)setFirstFetchCursor:(id)arg0;

@end
