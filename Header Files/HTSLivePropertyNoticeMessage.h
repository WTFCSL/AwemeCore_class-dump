//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLivePropertyNoticeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long userId;
@property (nonatomic) long long propertyEventType;

+ (id)descriptor;

@end
