//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDECIMSendMessage : NSObject {
    BOOL _skipSend;
    BOOL _isSaveDB;
    NSDictionary *_content;
    long long _messageType;
    NSDictionary *_syncedExt;
    NSDictionary *_localExt;
}

@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSDictionary *localExt;
@property (nonatomic) BOOL skipSend;
@property (nonatomic) BOOL isSaveDB;

- (id)localExt;
- (id)syncedExt;
- (void)setSyncedExt:(id)arg0;
- (void)setLocalExt:(id)arg0;
- (BOOL)skipSend;
- (BOOL)isSaveDB;
- (void)setIsSaveDB:(BOOL)arg0;
- (void)setSkipSend:(BOOL)arg0;
- (long long)messageType;
- (id)init;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setMessageType:(long long)arg0;

@end
