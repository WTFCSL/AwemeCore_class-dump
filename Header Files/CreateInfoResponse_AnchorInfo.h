//
//     Generated by private class-dump
//

@class NSString, GPBInt64ObjectDictionary;

@interface CreateInfoResponse_AnchorInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *covers;
@property (readonly, nonatomic) unsigned long long covers_Count;
@property (copy, nonatomic) NSString *lastResolutionKey;
@property (nonatomic) long long hasGroupLivePermission;

+ (id)descriptor;

@end