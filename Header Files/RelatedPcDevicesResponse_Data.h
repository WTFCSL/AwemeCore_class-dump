//
//     Generated by private class-dump
//

@class PushResInfo, NSMutableArray;

@interface RelatedPcDevicesResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long isOnlyOnePushed;
@property (retain, nonatomic) PushResInfo *pushRes;
@property (nonatomic) BOOL hasPushRes;
@property (retain, nonatomic) NSMutableArray *deviceListArray;
@property (readonly, nonatomic) unsigned long long deviceListArray_Count;

+ (id)descriptor;

@end
