//
//     Generated by private class-dump
//

@class NSMutableArray, IESLiveLinkMicAudienceMVTab;

@interface IESLiveLinkMicAudienceGetMVTabListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tabListArray;
@property (readonly, nonatomic) unsigned long long tabListArray_Count;
@property (retain, nonatomic) IESLiveLinkMicAudienceMVTab *defaultTab;
@property (nonatomic) BOOL hasDefaultTab;

+ (id)descriptor;

@end