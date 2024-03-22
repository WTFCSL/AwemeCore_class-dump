//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGSyncCursor : NSObject {
    char _topicType;
    char _bucket;
    NSString *_did;
    NSString *_uid;
    long long _syncID;
    long long _recvCursor;
    long long _deliverCursor;
    long long _reportCursor;
}

@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long syncID;
@property (nonatomic) char topicType;
@property (nonatomic) char bucket;
@property (nonatomic) long long recvCursor;
@property (nonatomic) long long deliverCursor;
@property (nonatomic) long long reportCursor;

- (id)did;
- (void)setDid:(id)arg0;
- (long long)recvCursor;
- (void)setRecvCursor:(long long)arg0;
- (long long)deliverCursor;
- (void)setDeliverCursor:(long long)arg0;
- (long long)reportCursor;
- (void)setReportCursor:(long long)arg0;
- (void)setTopicType:(char)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (char)bucket;
- (void).cxx_destruct;
- (void)setBucket:(char)arg0;
- (long long)syncID;
- (void)setSyncID:(long long)arg0;
- (char)topicType;

@end