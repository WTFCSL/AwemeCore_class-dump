//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol TIMXMessageModelProtocol;

@interface TIMXMessageSendResponse : TIMXPBNSendMessageResponseBody {
    BOOL _isChatRoom;
    NSString *_logID;
    NSArray *_requestToMonitorArray;
    NSArray *_processDurationMonitorArray;
    id<TIMXMessageModelProtocol> _message;
}

@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSArray *requestToMonitorArray;
@property (copy, nonatomic) NSArray *processDurationMonitorArray;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> message;
@property (nonatomic) BOOL isChatRoom;

- (id)requestToMonitorArray;
- (id)initWithPBBody:(id)arg0;
- (void)setProcessDurationMonitorArray:(id)arg0;
- (void)setRequestToMonitorArray:(id)arg0;
- (id)processDurationMonitorArray;
- (BOOL)isChatRoom;
- (void)setIsChatRoom:(BOOL)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)message;
- (id)logID;
- (void)setLogID:(id)arg0;

@end