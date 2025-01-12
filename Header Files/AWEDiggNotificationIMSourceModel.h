//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiggNotificationIMSourceModel : AWEBaseApiModel {
    long long _convType;
    NSString *_convId;
    long long _convShortId;
    long long _messageId;
}

@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long convShortId;
@property (nonatomic) long long messageId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)convId;
- (long long)convType;
- (void)setConvType:(long long)arg0;
- (long long)convShortId;
- (void)setConvShortId:(long long)arg0;
- (void)setConvId:(id)arg0;
- (void).cxx_destruct;
- (long long)messageId;
- (void)setMessageId:(long long)arg0;

@end
