//
//     Generated by private class-dump
//

@class NSError;

@interface BTMResult : NSObject {
    unsigned long long _resultType;
    id _value;
    NSError *_error;
}

@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;

+ (id)succeedWithValue:(id)arg0;
+ (id)failWithError:(id)arg0;

- (void)setResultType:(unsigned long long)arg0;
- (unsigned long long)resultType;
- (void).cxx_destruct;
- (id)value;
- (id)initPrivate;
- (void)setError:(id)arg0;
- (void)setValue:(id)arg0;
- (id)error;

@end
