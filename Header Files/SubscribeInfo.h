//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface SubscribeInfo : IESLivePBBaseMessage

@property (nonatomic) long long subscribeCount;
@property (retain, nonatomic) NSMutableArray *subscribeUserAvatarArray;
@property (readonly, nonatomic) unsigned long long subscribeUserAvatarArray_Count;
@property (copy, nonatomic) NSString *subscribeCountStr;

+ (id)descriptor;

@end