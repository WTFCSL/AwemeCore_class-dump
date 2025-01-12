//
//     Generated by private class-dump
//

@class EndingPageJump, EndingPageTopic, EndingPageSubscribe, EndingPageReserveModule;

@interface EndingPageInteractive : IESLivePBBaseMessage

@property (nonatomic) long long interactiveType;
@property (retain, nonatomic) EndingPageSubscribe *subscribe;
@property (nonatomic) BOOL hasSubscribe;
@property (retain, nonatomic) EndingPageTopic *topic;
@property (nonatomic) BOOL hasTopic;
@property (retain, nonatomic) EndingPageJump *jump;
@property (nonatomic) BOOL hasJump;
@property (retain, nonatomic) EndingPageReserveModule *endingPageReserveModule;
@property (nonatomic) BOOL hasEndingPageReserveModule;

+ (id)descriptor;

@end
