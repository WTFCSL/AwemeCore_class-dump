//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveKTVTabStruct : NSObject {
    BOOL _needShowCount;
    BOOL _needSort;
    BOOL _unReadShow;
    NSString *_name;
    long long _count;
    long long _type;
    NSArray *_sortArray;
    long long _selectedIndex;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) BOOL needShowCount;
@property (nonatomic) long long type;
@property (nonatomic) BOOL needSort;
@property (copy, nonatomic) NSArray *sortArray;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL unReadShow;

- (id)sortArray;
- (void)setSortArray:(id)arg0;
- (void)setNeedSort:(BOOL)arg0;
- (BOOL)needSort;
- (void)setUnReadShow:(BOOL)arg0;
- (BOOL)needShowCount;
- (BOOL)unReadShow;
- (void)setNeedShowCount:(BOOL)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (long long)count;
- (void)setName:(id)arg0;
- (id)name;
- (long long)selectedIndex;

@end
