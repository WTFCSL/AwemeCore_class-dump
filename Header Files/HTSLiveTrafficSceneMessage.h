//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveTrafficSceneMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long number;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isKeep;

+ (id)descriptor;

@end
