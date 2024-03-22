//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;
@protocol AWEOpenAuthInfoOpenDataProtocol;

@protocol AWEOpenAuthInfoModelProtocol <NSObject>

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) id<AWEOpenAuthInfoOpenDataProtocol> openData;
@property (retain, nonatomic) NSString *requestID;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)openData;
- (void)setOpenData:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)requestID;

@end
