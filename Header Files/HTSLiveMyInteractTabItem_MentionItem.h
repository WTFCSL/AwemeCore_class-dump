//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface HTSLiveMyInteractTabItem_MentionItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *atUser;
@property (nonatomic) BOOL hasAtUser;
@property (retain, nonatomic) HTSLiveUser *anchor;
@property (nonatomic) BOOL hasAnchor;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long eventTime;

+ (id)descriptor;

@end
