//
//     Generated by private class-dump
//

@class NSString;

@interface BDRuleParameterBuilderModel : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
    id _value;
    NSString *_key;
    unsigned long long _origin;
    unsigned long long _type;
    id /* block */ _builder;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long origin;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ builder;
@property (retain, nonatomic) id value;

- (id)key;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (id /* block */)builder;
- (unsigned long long)type;
- (unsigned long long)origin;
- (void)setKey:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setOrigin:(unsigned long long)arg0;
- (void)setValue:(id)arg0;
- (void)setBuilder:(id /* block */)arg0;

@end
