//
//     Generated by private class-dump
//

@class HTSLiveHighlightItem;

@interface AnswerHighlightResponse_Response : IESLivePBBaseMessage

@property (nonatomic) long long eventTime;
@property (retain, nonatomic) HTSLiveHighlightItem *item;
@property (nonatomic) BOOL hasItem;
@property (nonatomic) long long skipReview;

+ (id)descriptor;

@end
