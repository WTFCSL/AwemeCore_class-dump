//
//     Generated by private class-dump
//

@class NSString;

@interface PTYSubPackage : NSObject {
    NSString *_name;
    NSString *_version;
    NSString *_modelGroup;
    unsigned long long _modelEngineType;
    NSString *_originModelPath;
    unsigned long long _engineType;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *modelGroup;
@property (nonatomic) unsigned long long engineType;
@property (copy, nonatomic) NSString *originModelPath;
@property (readonly, nonatomic) unsigned long long modelEngineType;

- (id)originModelPath;
- (id)initWithCoreSubPackage:(const void *)arg0;
- (void)setModelGroup:(id)arg0;
- (unsigned long long)modelEngineType;
- (void)setOriginModelPath:(id)arg0;
- (unsigned long long)engineType;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setName:(id)arg0;
- (void)setEngineType:(unsigned long long)arg0;
- (id)name;
- (id)modelGroup;
- (id)initWithModelInfo:(const void *)arg0;

@end