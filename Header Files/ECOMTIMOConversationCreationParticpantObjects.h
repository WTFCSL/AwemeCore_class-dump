//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMOConversationCreationParticpantObjects : MTLModel <ECOMTIMOConversationCreationParticpantObjectsProtocol> {
    NSString *bizRole;
    NSString *groupSymbol;
    NSString *userId;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *bizRole;
@property (copy, nonatomic) NSString *groupSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGroupSymbol:(id)arg0;
- (id)bizRole;
- (void)setBizRole:(id)arg0;
- (void).cxx_destruct;
- (id)userId;
- (void)setUserId:(id)arg0;
- (id)groupSymbol;

@end
