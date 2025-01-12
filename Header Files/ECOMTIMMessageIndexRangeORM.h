//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMMessageIndexRangeORM : ECOMTIMBaseORM <WCTTableCoding, ECOMTIMMessageIndexRangeModelProtocol> {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
    long long _identifier;
    NSString *_belongingConversationIdentifier;
    long long _minIndex;
    long long _maxIndex;
    long long _minIndexV1;
    long long _maxIndexV1;
}

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long maxIndex;
@property (nonatomic) long long minIndexV1;
@property (nonatomic) long long maxIndexV1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)belongingConversationIdentifier;
+ (const void *)minIndexV1;
+ (const void *)maxIndexV1;
+ (const void *)identifier;
+ (const void *)minIndex;
+ (const void *)maxIndex;

- (void)setMaxIndex:(long long)arg0;
- (void)setLastInsertedRowID:(long long)arg0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg0;
- (id)belongingConversationIdentifier;
- (void)setMinIndex:(long long)arg0;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (long long)minIndexV1;
- (long long)maxIndexV1;
- (void)setMinIndexV1:(long long)arg0;
- (void)setMaxIndexV1:(long long)arg0;
- (void).cxx_destruct;
- (long long)identifier;
- (long long)minIndex;
- (long long)lastInsertedRowID;
- (long long)maxIndex;
- (void)setIdentifier:(long long)arg0;

@end
