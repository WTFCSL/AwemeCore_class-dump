//
//     Generated by private class-dump
//

@interface BDParam : NSObject {
    BOOL _isSet;
    id _value;
}

@property (readonly, nonatomic) BOOL isSet;
@property (readonly, nonatomic) id value;

+ (id)paramWithValue:(id)arg0;
+ (id)paramWithData:(id)arg0 key:(id)arg1 defaultValue:(id)arg2;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)valueToString;
- (id)stringToValue:(id)arg0;
- (id)__initWithValue:(id)arg0 isSet:(BOOL)arg1;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isSet;

@end
