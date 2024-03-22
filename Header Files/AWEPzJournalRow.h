//
//     Generated by private class-dump
//

@class NSString, NSSet, NSDate;

@interface AWEPzJournalRow : NSObject <WCTTableCoding> {
    BOOL isAutoIncrement;
    BOOL _consume;
    int _identifier;
    long long lastInsertedRowID;
    NSString *_componentID;
    NSString *_secUid;
    NSString *_componentType;
    NSDate *_timeOfShow;
    NSDate *_timeOfHide;
    NSSet *_sTags;
    NSSet *_cTags;
}

@property (nonatomic) int identifier;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSDate *timeOfShow;
@property (retain, nonatomic) NSDate *timeOfHide;
@property (nonatomic) BOOL consume;
@property (copy, nonatomic) NSSet *sTags;
@property (copy, nonatomic) NSSet *cTags;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)secUid;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)timeOfShow;
+ (const void *)timeOfHide;
+ (const void *)identifier;
+ (const void *)consume;
+ (const void *)componentType;
+ (const void *)componentID;

- (id)secUid;
- (void)setSecUid:(id)arg0;
- (void)setLastInsertedRowID:(long long)arg0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg0;
- (void)setCTags:(id)arg0;
- (id)cTags;
- (void)setConsume:(BOOL)arg0;
- (id)sTags;
- (void)setSTags:(id)arg0;
- (id)timeOfShow;
- (id)timeOfHide;
- (id)initWithID:(id)arg0 type:(id)arg1 secUid:(id)arg2;
- (void)setTimeOfShow:(id)arg0;
- (void)setTimeOfHide:(id)arg0;
- (void).cxx_destruct;
- (int)identifier;
- (BOOL)consume;
- (long long)lastInsertedRowID;
- (id)componentType;
- (id)description;
- (void)setComponentType:(id)arg0;
- (void)setIdentifier:(int)arg0;
- (id)componentID;
- (void)setComponentID:(id)arg0;

@end
