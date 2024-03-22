//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary;

@interface IESECJsonAssetManager : IESECAssetsManager {
    NSString *_assetsPath;
    NSArray *_fileTables;
    NSMutableDictionary *_contentTables;
}

@property (retain, nonatomic) NSString *assetsPath;
@property (retain, nonatomic) NSArray *fileTables;
@property (retain, nonatomic) NSMutableDictionary *contentTables;

- (id)initWithBundle:(id)arg0 type:(id)arg1;
- (id)genFileTables;
- (void)setFileTables:(id)arg0;
- (void)setContentTables:(id)arg0;
- (id)fileTables;
- (id)contentOfFileName:(id)arg0;
- (id)contentTables;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg0;
- (id)assetsPath;
- (void)setAssetsPath:(id)arg0;

@end
