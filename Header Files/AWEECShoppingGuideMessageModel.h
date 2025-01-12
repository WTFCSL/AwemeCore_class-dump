//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEECShoppingGuideMessageSyncModel, AWEECShoppingGuideMessageSourceModel, NSMutableArray;

@interface AWEECShoppingGuideMessageModel : MTLModel <MTLJSONSerializing, NSMutableCopying> {
    unsigned long long _role;
    NSMutableArray *_sections;
    NSString *_sessionID;
    unsigned long long _answerDuration;
    AWEECShoppingGuideMessageSourceModel *_sourceModel;
    AWEECShoppingGuideMessageSyncModel *_syncModel;
    NSString *_sender;
    long long _rowID;
    NSDictionary *_extraData;
}

@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) NSMutableArray *sections;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long answerDuration;
@property (retain, nonatomic) AWEECShoppingGuideMessageSourceModel *sourceModel;
@property (retain, nonatomic) AWEECShoppingGuideMessageSyncModel *syncModel;
@property (copy, nonatomic) NSString *sender;
@property (nonatomic) long long rowID;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (unsigned long long)answerDuration;
- (void)setAnswerDuration:(unsigned long long)arg0;
- (id)initWithText:(id)arg0 foldable:(BOOL)arg1 role:(unsigned long long)arg2;
- (id)initWithText:(id)arg0 role:(unsigned long long)arg1;
- (id)syncModel;
- (void)setSyncModel:(id)arg0;
- (id)sections;
- (void)setSender:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sender;
- (id)sessionID;
- (void)setRole:(unsigned long long)arg0;
- (long long)rowID;
- (unsigned long long)role;
- (void)setRowID:(long long)arg0;
- (void)setSections:(id)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)sourceModel;
- (void)setExtraData:(id)arg0;
- (id)extraData;
- (void)setSourceModel:(id)arg0;

@end
