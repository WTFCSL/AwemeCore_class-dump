//
//     Generated by private class-dump
//

@class NSArray, NSCache;

@interface IESLiveResouceManagerForString : IESLiveResouceManager {
    NSArray *_tables;
    NSCache *_stringCache;
}

@property (retain, nonatomic) NSArray *tables;
@property (retain, nonatomic) NSCache *stringCache;

+ (void)load;

- (id)initWithAssetBundle:(id)arg0 type:(id)arg1;
- (id)tables;
- (void).cxx_destruct;
- (void)setTables:(id)arg0;
- (void)setStringCache:(id)arg0;
- (id)objectForKey:(id)arg0;
- (id)stringCache;

@end
