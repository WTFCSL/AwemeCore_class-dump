//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSString;

@interface CMCAwemeDetailSceneController : CMCSceneController {
    BOOL _isAdRequesting;
    long long _adGap;
    long long _curRequestIndex;
    long long _nextRequestIndex;
    NSArray *_curItems;
    NSMutableArray *_dataSources;
    unsigned long long _requestSource;
    unsigned long long _lastAdShowGap;
    NSString *_preItemId;
}

@property (nonatomic) long long adGap;
@property (nonatomic) long long curRequestIndex;
@property (nonatomic) long long nextRequestIndex;
@property (nonatomic) BOOL isAdRequesting;
@property (copy, nonatomic) NSArray *curItems;
@property (weak, nonatomic) NSMutableArray *dataSources;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) unsigned long long lastAdShowGap;
@property (copy, nonatomic) NSString *preItemId;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;

- (void)setNextRequestIndex:(long long)arg0;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (void)willDisplayCellWithContext:(id)arg0 indexPath:(id)arg1;
- (void)didEndDisplayingCellWithContext:(id)arg0 indexPath:(id)arg1;
- (void)didDeleteCell:(id)arg0;
- (long long)adGap;
- (void)setAdGap:(long long)arg0;
- (long long)curRequestIndex;
- (void)setCurRequestIndex:(long long)arg0;
- (BOOL)isAdRequesting;
- (void)setIsAdRequesting:(BOOL)arg0;
- (id)curItems;
- (void)setCurItems:(id)arg0;
- (unsigned long long)lastAdShowGap;
- (void)setLastAdShowGap:(unsigned long long)arg0;
- (id)preItemId;
- (void)setPreItemId:(id)arg0;
- (id)dataSources;
- (void).cxx_destruct;
- (void)setRequestSource:(unsigned long long)arg0;
- (unsigned long long)requestSource;
- (void)setDataSources:(id)arg0;
- (long long)nextRequestIndex;
- (void)sceneDidLoad;

@end
