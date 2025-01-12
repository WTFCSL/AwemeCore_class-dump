//
//     Generated by private class-dump
//

@interface NHAccountUserExtraValueConfig : NSObject {
    id /* block */ _validateBlock;
    id /* block */ _extraValueErrorParser;
    id /* block */ _customUserValueParser;
    id /* block */ _singleToMultiMigrationBlock;
    id /* block */ _multiToSingleMigrationBlock;
}

@property (copy, nonatomic) id /* block */ validateBlock;
@property (copy, nonatomic) id /* block */ extraValueErrorParser;
@property (copy, nonatomic) id /* block */ customUserValueParser;
@property (copy, nonatomic) id /* block */ singleToMultiMigrationBlock;
@property (copy, nonatomic) id /* block */ multiToSingleMigrationBlock;

- (id /* block */)validateBlock;
- (void)setValidateBlock:(id /* block */)arg0;
- (id /* block */)extraValueErrorParser;
- (void)setExtraValueErrorParser:(id /* block */)arg0;
- (id /* block */)customUserValueParser;
- (void)setCustomUserValueParser:(id /* block */)arg0;
- (id /* block */)singleToMultiMigrationBlock;
- (void)setSingleToMultiMigrationBlock:(id /* block */)arg0;
- (id /* block */)multiToSingleMigrationBlock;
- (void)setMultiToSingleMigrationBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end
