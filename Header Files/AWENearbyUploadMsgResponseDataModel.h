//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyUploadMsgResponseDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _result;
    NSString *_messageID;
    NSString *_message;
}

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMessage:(id)arg0;
- (id)messageID;
- (void)setResult:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)result;
- (id)message;
- (void)setMessageID:(id)arg0;

@end
