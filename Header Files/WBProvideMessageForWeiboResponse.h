//
//     Generated by private class-dump
//

@class WBMessageObject;

@interface WBProvideMessageForWeiboResponse : WBBaseResponse {
    WBMessageObject *message;
}

@property (retain, nonatomic) WBMessageObject *message;

+ (id)responseWithMessage:(id)arg0;

- (void)storeToDictionary:(id)arg0;
- (BOOL)canBeReceived;
- (void)setMessage:(id)arg0;
- (id)validate;
- (void).cxx_destruct;
- (id)message;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)arg0;

@end
