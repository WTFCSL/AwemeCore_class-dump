//
//     Generated by private class-dump
//

@class NSString, GPBInt32ObjectDictionary;

@interface HTSLiveShelfCardSupplementSyncData : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) long long cardId;
@property (retain, nonatomic) GPBInt32ObjectDictionary *supplementMap;
@property (readonly, nonatomic) unsigned long long supplementMap_Count;
@property (copy, nonatomic) NSString *supplementCardMapStr;

+ (id)descriptor;

@end
