//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface AWEEccsCreateSubConversationParamModel : IESLiveBridgeModel {
    NSString *_parentConversationShortID;
    NSString *_parentConversationID;
    NSNumber *_inbox;
    NSArray *_participantsObjects;
}

@property (copy, nonatomic) NSString *parentConversationShortID;
@property (copy, nonatomic) NSString *parentConversationID;
@property (retain, nonatomic) NSNumber *inbox;
@property (copy, nonatomic) NSArray *participantsObjects;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)parentConversationShortID;
- (void)setParentConversationShortID:(id)arg0;
- (id)parentConversationID;
- (void)setParentConversationID:(id)arg0;
- (id)participantsObjects;
- (void)setParticipantsObjects:(id)arg0;
- (void).cxx_destruct;
- (id)inbox;
- (void)setInbox:(id)arg0;

@end
