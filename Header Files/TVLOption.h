//
//     Generated by private class-dump
//

@interface TVLOption : NSObject {
    id _identifier;
    id _value;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isAsync) BOOL async;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL shouldTakeEffectImmediately;
@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) id value;

+ (unsigned long long)valueTypeForIdentifier:(id)arg0;
+ (id)optionWithValue:(id)arg0 identifier:(id)arg1;
+ (unsigned long long)optionDomainForIdentifier:(id)arg0;
+ (void)initialize;
+ (long long)keyForIdentifier:(id)arg0;

- (BOOL)shouldTakeEffectImmediately;
- (long long)key;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)type;
- (BOOL)isValid;
- (id)identifier;
- (id)description;
- (BOOL)isAsync;
- (id)initWithValue:(id)arg0 identifier:(id)arg1;

@end
