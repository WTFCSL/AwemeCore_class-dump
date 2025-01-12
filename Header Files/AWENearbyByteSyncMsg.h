//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWENearbyByteSyncMsg : NSObject <NSCoding> {
    BOOL _isFromLocalCache;
    BOOL _isFromPullMsg;
    NSDictionary *_data;
    id _msgData;
    NSString *_logId;
    double _ts;
    long long _tsDiff;
    double _serverSendTimeStamp;
    long long _fromSource;
    long long _noticeType;
    long long _bizType;
}

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id msgData;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) double ts;
@property (nonatomic) long long tsDiff;
@property (nonatomic) double serverSendTimeStamp;
@property (nonatomic) BOOL isFromLocalCache;
@property (nonatomic) BOOL isFromPullMsg;
@property (nonatomic) long long fromSource;
@property (readonly, copy, nonatomic) NSString *fromSourceStr;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long bizType;

- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (id)logId;
- (void)setLogId:(id)arg0;
- (void)setNoticeType:(long long)arg0;
- (long long)fromSource;
- (void)setFromSource:(long long)arg0;
- (id)msgData;
- (void)setMsgData:(id)arg0;
- (BOOL)isFromLocalCache;
- (void)setIsFromLocalCache:(BOOL)arg0;
- (long long)tsDiff;
- (double)serverSendTimeStamp;
- (id)fromSourceStr;
- (BOOL)isFromPullMsg;
- (void)setIsFromPullMsg:(BOOL)arg0;
- (void)setTsDiff:(long long)arg0;
- (void)setServerSendTimeStamp:(double)arg0;
- (double)ts;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setTs:(double)arg0;
- (long long)noticeType;

@end
