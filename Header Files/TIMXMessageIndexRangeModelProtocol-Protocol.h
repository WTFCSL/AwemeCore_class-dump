//
//     Generated by private class-dump
//

@class NSString;

@protocol TIMXMessageIndexRangeModelProtocol <NSObject>

@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long maxIndex;
@property (nonatomic) long long minIndexV1;
@property (nonatomic) long long maxIndexV1;

- (void)setMaxIndex:(long long)arg0;
- (id)belongingConversationIdentifier;
- (void)setMinIndex:(long long)arg0;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (long long)minIndexV1;
- (long long)maxIndexV1;
- (void)setMinIndexV1:(long long)arg0;
- (void)setMaxIndexV1:(long long)arg0;
- (long long)minIndex;
- (long long)maxIndex;

@end
