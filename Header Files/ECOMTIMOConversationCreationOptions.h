//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface ECOMTIMOConversationCreationOptions : MTLModel {
    NSString *_idempotentIdentifier;
    NSDictionary *_bizExtension;
}

@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSDictionary *bizExtension;

- (void)setIdempotentIdentifier:(id)arg0;
- (id)idempotentIdentifier;
- (id)bizExtension;
- (void)setBizExtension:(id)arg0;
- (void).cxx_destruct;

@end