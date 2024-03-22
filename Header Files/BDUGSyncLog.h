//
//     Generated by private class-dump
//

@class NSString, NSData, NSDictionary;

@interface BDUGSyncLog : NSObject {
    char _consumeType;
    char _status;
    BOOL _isFileStore;
    char _topicType;
    char _packetStatus;
    int _businessID;
    long long _syncID;
    NSString *_did;
    NSString *_uid;
    long long _syncCursor;
    NSData *_data;
    NSString *_md5;
    long long _ts;
    NSString *_reqID;
    NSDictionary *_extra;
}

@property (nonatomic) long long syncID;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long syncCursor;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) int businessID;
@property (nonatomic) char consumeType;
@property (nonatomic) char status;
@property (nonatomic) long long ts;
@property (nonatomic) BOOL isFileStore;
@property (nonatomic) char topicType;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) char packetStatus;

- (void)setExtra:(id)arg0;
- (id)did;
- (void)setDid:(id)arg0;
- (void)setConsumeType:(char)arg0;
- (void)setIsFileStore:(BOOL)arg0;
- (void)setReqID:(id)arg0;
- (BOOL)isFileStore;
- (void)setPacketStatus:(char)arg0;
- (char)packetStatus;
- (void)setTopicType:(char)arg0;
- (id)reqID;
- (long long)syncCursor;
- (void)setSyncCursor:(long long)arg0;
- (char)consumeType;
- (long long)ts;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)data;
- (void).cxx_destruct;
- (char)status;
- (void)setData:(id)arg0;
- (id)extra;
- (void)setStatus:(char)arg0;
- (int)businessID;
- (void)setTs:(long long)arg0;
- (void)setBusinessID:(int)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (long long)syncID;
- (void)setSyncID:(long long)arg0;
- (char)topicType;

@end