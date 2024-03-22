//
//     Generated by private class-dump
//

@class NSString, AWEUserModel;

@interface AWEFriendNoticeNotificationModel : AWEBaseApiModel {
    NSString *_content;
    NSString *_schemaURL;
    AWEUserModel *_fromUser;
    long long _friendType;
}

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEUserModel *fromUser;
@property (nonatomic) long long friendType;

+ (id)fromUserJSONTransformer;
+ (id)typeJSONTranformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaURL;
- (void)setFromUser:(id)arg0;
- (void)setSchemaURL:(id)arg0;
- (void)setFriendType:(long long)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (id)fromUser;
- (long long)friendType;

@end
