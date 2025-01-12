//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAnchorSearchHistoryViewModel : NSObject {
    NSArray *_historyList;
    long long _anchorType;
}

@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSArray *historyList;

- (void)saveSearchHistoryResultWithKeyword:(id)arg0;
- (id)initWithAnchorBusinessType:(long long)arg0;
- (id)historyList;
- (void)deleteHistoryItemWithKeyWord:(id)arg0;
- (void)setHistoryList:(id)arg0;
- (long long)anchorType;
- (void).cxx_destruct;
- (void)deleteAllHistory;
- (void)setAnchorType:(long long)arg0;

@end
