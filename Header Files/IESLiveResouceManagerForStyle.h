//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface IESLiveResouceManagerForStyle : IESLiveResouceManager {
    NSMutableDictionary *_allStyles;
    NSArray *_tables;
}

@property (retain, nonatomic) NSMutableDictionary *allStyles;
@property (retain, nonatomic) NSArray *tables;

+ (void)load;

- (id)initWithAssetBundle:(id)arg0 type:(id)arg1;
- (void)setAllStyles:(id)arg0;
- (id)parseFromContent:(id)arg0;
- (id)parseValueStr:(id)arg0;
- (id)tables;
- (void).cxx_destruct;
- (void)setTables:(id)arg0;
- (id)objectForKey:(id)arg0;
- (id)allStyles;

@end
