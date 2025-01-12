//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEQuickReplyModel : MTLModel <MTLJSONSerializing> {
    NSString *_replyText;
    unsigned long long _replyType;
    NSNumber *_replyID;
}

@property (copy, nonatomic) NSString *replyText;
@property (nonatomic) unsigned long long replyType;
@property (retain, nonatomic) NSNumber *replyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replyTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setReplyID:(id)arg0;
- (void).cxx_destruct;
- (id)replyID;
- (id)replyText;
- (void)setReplyText:(id)arg0;
- (unsigned long long)replyType;
- (void)setReplyType:(unsigned long long)arg0;

@end
