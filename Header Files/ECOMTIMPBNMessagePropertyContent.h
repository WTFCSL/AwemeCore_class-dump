//
//     Generated by private class-dump
//

@class ECOMTIMPBNSyncContent, ECOMTIMPBNReactionContent;

@interface ECOMTIMPBNMessagePropertyContent : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) ECOMTIMPBNSyncContent *syncContent;
@property (nonatomic) BOOL hasSyncContent;
@property (retain, nonatomic) ECOMTIMPBNReactionContent *reactionContent;
@property (nonatomic) BOOL hasReactionContent;
@property (nonatomic) long long indexInMessage;
@property (nonatomic) BOOL hasIndexInMessage;

+ (id)descriptor;

@end
