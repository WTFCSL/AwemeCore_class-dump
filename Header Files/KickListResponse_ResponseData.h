//
//     Generated by private class-dump
//

@class HTSLiveUser;

@interface KickListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) HTSLiveUser *opUser;
@property (nonatomic) BOOL hasOpUser;
@property (nonatomic) long long opTime;

+ (id)descriptor;

@end