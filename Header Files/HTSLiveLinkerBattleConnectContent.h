//
//     Generated by private class-dump
//

@class NSString, IESLiveMultiChannelInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLinkerBattleConnectContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *anchorUserListArray;
@property (readonly, nonatomic) unsigned long long anchorUserListArray_Count;

+ (id)descriptor;

@end
