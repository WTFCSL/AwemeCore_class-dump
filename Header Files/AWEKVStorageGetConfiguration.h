//
//     Generated by private class-dump
//

@interface AWEKVStorageGetConfiguration : AWEKVStorageConfiguration {
    BOOL _hasBackup;
    id _defaultValue;
    Class _clsType;
}

@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) Class clsType;
@property (nonatomic) BOOL hasBackup;

+ (id)configurationWithOptions:(id)arg0;

- (void)setClsType:(Class)arg0;
- (Class)clsType;
- (BOOL)hasBackup;
- (void)setHasBackup:(BOOL)arg0;
- (void)setDefaultValue:(id)arg0;
- (id)defaultValue;
- (id)init;
- (void).cxx_destruct;

@end
