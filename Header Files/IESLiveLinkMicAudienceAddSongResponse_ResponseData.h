//
//     Generated by private class-dump
//

@class NSString, GPBInt64Array;

@interface IESLiveLinkMicAudienceAddSongResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *promptWithEarphone;
@property (retain, nonatomic) GPBInt64Array *succeedSongIdListArray;
@property (readonly, nonatomic) unsigned long long succeedSongIdListArray_Count;
@property (nonatomic) BOOL inSongWaitingList;

+ (id)descriptor;

@end
