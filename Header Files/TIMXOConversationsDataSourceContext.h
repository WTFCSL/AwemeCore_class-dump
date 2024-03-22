//
//     Generated by private class-dump
//

@class NSArray, TIMXOConversationsUnreadCountCalculatorInitConfig, TIMXSDKInstance;
@protocol TIMXOConversationsDataSourceDelegate;

@interface TIMXOConversationsDataSourceContext : NSObject {
    BOOL _includeEmpty;
    TIMXSDKInstance *_rootObject;
    id /* block */ _filterBlock;
    long long _firstPageLimit;
    NSArray *_arrInboxType;
    id<TIMXOConversationsDataSourceDelegate> _delegate;
    long long _boxType;
    TIMXOConversationsUnreadCountCalculatorInitConfig *_unreadConfig;
    long long _loadMoreLimit;
}

@property (retain, nonatomic) TIMXSDKInstance *rootObject;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL includeEmpty;
@property (nonatomic) long long firstPageLimit;
@property (copy, nonatomic) NSArray *arrInboxType;
@property (retain, nonatomic) id<TIMXOConversationsDataSourceDelegate> delegate;
@property (nonatomic) long long boxType;
@property (retain, nonatomic) TIMXOConversationsUnreadCountCalculatorInitConfig *unreadConfig;
@property (nonatomic) long long loadMoreLimit;

- (void)setIncludeEmpty:(BOOL)arg0;
- (void)setArrInboxType:(id)arg0;
- (void)setBoxType:(long long)arg0;
- (long long)boxType;
- (id)arrInboxType;
- (long long)firstPageLimit;
- (void)setFirstPageLimit:(long long)arg0;
- (void)setLoadMoreLimit:(long long)arg0;
- (void)setUnreadConfig:(id)arg0;
- (BOOL)includeEmpty;
- (id)unreadConfig;
- (long long)loadMoreLimit;
- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (id)delegate;
- (id)rootObject;
- (void)setDelegate:(id)arg0;
- (void)setRootObject:(id)arg0;
- (void)setFilterBlock:(id /* block */)arg0;

@end