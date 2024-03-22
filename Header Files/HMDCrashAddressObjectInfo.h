//
//     Generated by private class-dump
//

@class NSString;

@interface HMDCrashAddressObjectInfo : HMDCrashModel {
    BOOL _isAligned;
    BOOL _is_tagpointer;
    BOOL _isClass;
    BOOL _isObject;
    unsigned long long _cf_typeID;
    NSString *_className;
    unsigned long long _isa_value;
    NSString *_content;
}

@property (nonatomic) unsigned long long cf_typeID;
@property (copy, nonatomic) NSString *className;
@property (nonatomic) BOOL isAligned;
@property (nonatomic) BOOL is_tagpointer;
@property (nonatomic) unsigned long long isa_value;
@property (nonatomic) BOOL isClass;
@property (nonatomic) BOOL isObject;
@property (copy, nonatomic) NSString *content;

- (BOOL)isClass;
- (BOOL)is_tagpointer;
- (unsigned long long)cf_typeID;
- (void)setCf_typeID:(unsigned long long)arg0;
- (void)setIsClass:(BOOL)arg0;
- (void)setIsa_value:(unsigned long long)arg0;
- (void)setIs_tagpointer:(BOOL)arg0;
- (unsigned long long)isa_value;
- (void)setClassName:(id)arg0;
- (id)className;
- (void)updateWithDictionary:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (BOOL)isObject;
- (void)setContent:(id)arg0;
- (void)setIsAligned:(BOOL)arg0;
- (BOOL)isAligned;
- (void)setIsObject:(BOOL)arg0;

@end
