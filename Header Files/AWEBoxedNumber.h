//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEBoxedNumber : NSObject <WCTColumnCoding> {
    NSNumber *_value;
}

@property (readonly, nonatomic) NSNumber *value;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg0;
+ (id)boxedNumberWithValue:(id)arg0;

- (id)archivedWCTValue;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:(id)arg0;

@end