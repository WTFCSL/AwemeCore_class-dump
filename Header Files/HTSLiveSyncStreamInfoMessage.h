//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveSyncStreamInfoMessage : IESLivePBBaseMessage

@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *info;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
