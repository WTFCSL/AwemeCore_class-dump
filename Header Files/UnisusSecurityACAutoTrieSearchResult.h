//
//     Generated by private class-dump
//

@class NSString;

@interface UnisusSecurityACAutoTrieSearchResult : NSObject {
    int _tableId;
    int _startIdx;
    int _endIdx;
    NSString *_keyword;
}

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) int tableId;
@property (nonatomic) int startIdx;
@property (nonatomic) int endIdx;

- (void)setTableId:(int)arg0;
- (int)startIdx;
- (void)setStartIdx:(int)arg0;
- (int)endIdx;
- (void)setEndIdx:(int)arg0;
- (void).cxx_destruct;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (int)tableId;

@end