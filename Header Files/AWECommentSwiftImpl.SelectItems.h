//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentSwiftImpl.SelectItems : AWEBaseApiModel {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ selectState;
    void /* unknown type, empty encoding */ group;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) void /* unknown type, empty encoding */ selectState;
@property (nonatomic, copy) NSString *group;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)selectState;
- (void)setSelectState:(BOOL)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)value;
- (id)group;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (void)setValue:(id)arg0;
- (id)name;
- (void)setGroup:(id)arg0;

@end