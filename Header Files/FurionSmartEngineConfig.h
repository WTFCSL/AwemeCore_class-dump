//
//     Generated by private class-dump
//

@class NSString;

@interface FurionSmartEngineConfig : NSObject {
    BOOL _disable;
    unsigned long long _engineType;
    unsigned long long _enginePrepareType;
    NSString *_resource;
    NSString *_modelName;
}

@property (nonatomic) unsigned long long engineType;
@property (nonatomic) unsigned long long enginePrepareType;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL disable;

- (void)setDisable:(BOOL)arg0;
- (unsigned long long)enginePrepareType;
- (void)setEnginePrepareType:(unsigned long long)arg0;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (void)setModelName:(id)arg0;
- (id)modelName;
- (BOOL)disable;
- (void)setEngineType:(unsigned long long)arg0;
- (void)setResource:(id)arg0;
- (id)resource;

@end
