//
//     Generated by private class-dump
//

@class NSString;

@interface BDClassIvarInfo : NSObject {
    struct objc_ivar { } *_ivar;
    NSString *_name;
    long long _offset;
    NSString *_typeEncoding;
    unsigned long long _type;
}

@property (readonly, nonatomic) struct objc_ivar { } *ivar;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) NSString *typeEncoding;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithIvar:(struct objc_ivar { } *)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (long long)offset;
- (id)name;
- (struct objc_ivar { } *)ivar;
- (id)typeEncoding;

@end
