//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AppointmentSubscribeListResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int typ;
@property (nonatomic) long long appointmentId;
@property (copy, nonatomic) NSString *appointmentIdStr;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (nonatomic) long long maxCursor;

+ (id)descriptor;

@end