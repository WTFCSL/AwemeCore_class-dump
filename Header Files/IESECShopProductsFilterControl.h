//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECShopProductsFilterControl : NSObject {
    NSString *_selectParams;
    unsigned long long _order;
    long long _sortType;
    NSNumber *_selectedPickType;
}

@property (copy, nonatomic) NSString *selectParams;
@property (nonatomic) unsigned long long order;
@property (nonatomic) long long sortType;
@property (copy, nonatomic) NSNumber *selectedPickType;

- (id)selectedPickType;
- (void)setSelectedPickType:(id)arg0;
- (id)selectParams;
- (void)setSelectParams:(id)arg0;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg0;
- (void).cxx_destruct;
- (long long)sortType;
- (void)setSortType:(long long)arg0;

@end
