//
//     Generated by private class-dump
//

@class GPBInt64Array, HTSLiveCommon;

@interface HTSLiveImDeleteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) GPBInt64Array *deleteMsgIdsArray;
@property (readonly, nonatomic) unsigned long long deleteMsgIdsArray_Count;

+ (id)descriptor;

@end
