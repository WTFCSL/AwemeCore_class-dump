//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRegisterMessageLatchParamModel : IESLiveBridgeModel {
    NSString *_messageType;
    NSString *_definition;
    NSString *_messageMethod;
}

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *messageMethod;

+ (id)modelCustomPropertyMapper;

- (id)messageMethod;
- (void)setMessageMethod:(id)arg0;
- (id)messageType;
- (void).cxx_destruct;
- (id)definition;
- (void)setMessageType:(id)arg0;
- (void)setDefinition:(id)arg0;

@end