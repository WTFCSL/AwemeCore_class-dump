//
//     Generated by private class-dump
//

@class EnterRecordVideoResponse_Extra, EnterRecordVideoResponse_ResponseData;

@interface EnterRecordVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EnterRecordVideoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) EnterRecordVideoResponse_Extra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
