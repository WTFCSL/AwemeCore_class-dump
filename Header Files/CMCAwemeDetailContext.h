//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSMutableArray, AWEUserModel;

@interface CMCAwemeDetailContext : CMCContext {
    BOOL _shouldRequestAd;
    BOOL _isFingureDragging;
    unsigned long long _index;
    NSMutableArray *_dataSource;
    NSArray *_itemIds;
    unsigned long long _requestSource;
    unsigned long long _lastAdShowGap;
    long long _initialIndex;
    long long _profileSessionID;
    AWEUserModel *_profileAdUser;
    id /* block */ _modelAtIndex;
    id /* block */ _deleteAwemeWithIDs;
    id /* block */ _playIfActivated;
    NSDictionary *_reportInfo;
    NSString *_actionType;
}

@property (nonatomic) BOOL shouldRequestAd;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSArray *itemIds;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) unsigned long long lastAdShowGap;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long profileSessionID;
@property (retain, nonatomic) AWEUserModel *profileAdUser;
@property (copy, nonatomic) id /* block */ modelAtIndex;
@property (copy, nonatomic) id /* block */ deleteAwemeWithIDs;
@property (copy, nonatomic) id /* block */ playIfActivated;
@property (copy, nonatomic) NSDictionary *reportInfo;
@property (nonatomic) BOOL isFingureDragging;
@property (retain, nonatomic) NSString *actionType;

- (id)reportInfo;
- (void)setReportInfo:(id)arg0;
- (id /* block */)modelAtIndex;
- (long long)profileSessionID;
- (id)profileAdUser;
- (BOOL)isFingureDragging;
- (unsigned long long)lastAdShowGap;
- (void)setLastAdShowGap:(unsigned long long)arg0;
- (BOOL)shouldRequestAd;
- (void)setShouldRequestAd:(BOOL)arg0;
- (void)setProfileSessionID:(long long)arg0;
- (void)setProfileAdUser:(id)arg0;
- (void)setModelAtIndex:(id /* block */)arg0;
- (id /* block */)deleteAwemeWithIDs;
- (void)setDeleteAwemeWithIDs:(id /* block */)arg0;
- (id /* block */)playIfActivated;
- (void)setPlayIfActivated:(id /* block */)arg0;
- (void)setIsFingureDragging:(BOOL)arg0;
- (void)setActionType:(id)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)actionType;
- (void).cxx_destruct;
- (void)setItemIds:(id)arg0;
- (unsigned long long)index;
- (void)setRequestSource:(unsigned long long)arg0;
- (unsigned long long)requestSource;
- (id)itemIds;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end
