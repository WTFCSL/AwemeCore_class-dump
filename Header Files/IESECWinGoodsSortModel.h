//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinGoodsSortModel : MTLModel <MTLJSONSerializing> {
    BOOL _isCurrentTab;
    BOOL _canReverse;
    unsigned long long _sortType;
    NSString *_name;
    long long _defaultSort;
}

@property (nonatomic) unsigned long long sortType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isCurrentTab;
@property (nonatomic) BOOL canReverse;
@property (nonatomic) long long defaultSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)defaultSort;
- (void)setDefaultSort:(long long)arg0;
- (BOOL)canReverse;
- (BOOL)isCurrentTab;
- (void)setIsCurrentTab:(BOOL)arg0;
- (void)setCanReverse:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg0;

@end
