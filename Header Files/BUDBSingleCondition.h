//
//     Generated by private class-dump
//

@class NSString;

@interface BUDBSingleCondition : BUDBCondition {
    NSString *_field;
    id _value;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *field;
@property (retain, nonatomic) id value;
@property (nonatomic) unsigned long long type;

- (id)conditionStringForGroup;
- (id)conditionString;
- (id)field;
- (id)_type;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setField:(id)arg0;
- (void)setValue:(id)arg0;

@end
