//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDClassInfo : NSObject {
    BOOL _needUpdate;
    BOOL _isMeta;
    Class _cls;
    Class _superCls;
    Class _metaCls;
    NSString *_name;
    BDClassInfo *_superClassInfo;
    NSDictionary *_ivarInfos;
    NSDictionary *_methodInfos;
    NSDictionary *_propertyInfos;
}

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) Class superCls;
@property (readonly, nonatomic) Class metaCls;
@property (readonly, nonatomic) BOOL isMeta;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BDClassInfo *superClassInfo;
@property (readonly, nonatomic) NSDictionary *ivarInfos;
@property (readonly, nonatomic) NSDictionary *methodInfos;
@property (readonly, nonatomic) NSDictionary *propertyInfos;

+ (id)classInfoWithClassName:(id)arg0;
+ (id)classInfoWithClass:(Class)arg0;

- (BOOL)isMeta;
- (void)setNeedUpdate;
- (Class)metaCls;
- (id)ivarInfos;
- (id)methodInfos;
- (Class)superCls;
- (id)propertyInfos;
- (id)superClassInfo;
- (BOOL)needUpdate;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithClass:(Class)arg0;
- (id)name;
- (Class)cls;

@end
