//
//     Generated by private class-dump
//

@class NSString;

@interface WCTSequence : NSObject <WCTTableCoding> {
    int _seq;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int seq;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (id)TableName;
+ (const void *)name;
+ (const void *)seq;

- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)description;
- (id)name;
- (void)setSeq:(int)arg0;
- (int)seq;

@end
