//
//     Generated by private class-dump
//

@class IntercommunicateCloseResponse_Data, IntercommunicateCloseResponse_Extra;

@interface IntercommunicateCloseResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IntercommunicateCloseResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) IntercommunicateCloseResponse_Extra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end