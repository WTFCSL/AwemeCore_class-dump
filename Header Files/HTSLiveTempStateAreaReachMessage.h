//
//     Generated by private class-dump
//

@class HTSLiveTempStateAreaReachMessage_Resource, HTSLiveCommon;

@interface HTSLiveTempStateAreaReachMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long elemType;
@property (nonatomic) long long elemId;
@property (nonatomic) long long itemId;
@property (nonatomic) long long status;
@property (retain, nonatomic) HTSLiveTempStateAreaReachMessage_Resource *resource;
@property (nonatomic) BOOL hasResource;

+ (id)descriptor;

@end
