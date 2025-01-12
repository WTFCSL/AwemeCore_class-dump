//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAggregateInnerFeedInjection : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnnerFeedDataSourceInjectionProtocol> {
    BOOL _isNeedReplaceURL;
    BOOL _hasReplaced;
    BOOL _isInnerFromDrawer;
    NSString *_enterFrom;
    NSString *_enterMethod;
    long long _type;
    NSString *_aggregateBannerId;
}

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isNeedReplaceURL;
@property (nonatomic) BOOL hasReplaced;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (retain, nonatomic) NSString *aggregateBannerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (BOOL)isInnerFromDrawer;
- (void)setIsInnerFromDrawer:(BOOL)arg0;
- (void)setIsNeedReplaceURL:(BOOL)arg0;
- (id)aggregateBannerId;
- (void)setAggregateBannerId:(id)arg0;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)arg0 datas:(id)arg1 hasMore:(BOOL)arg2 success:(BOOL)arg3;
- (BOOL)hasReplaced;
- (BOOL)isNeedReplaceURL;
- (void)setHasReplaced:(BOOL)arg0;
- (void)afterCompletionWithItems:(id)arg0;
- (void)willFetchWithURL:(id)arg0 withDataChangedType:(unsigned long long)arg1 parameters:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)didFetchWithResponse:(id)arg0 error:(id)arg1;
- (long long)injectionPriority;
- (id)initWithRoomAisle:(id)arg0 type:(long long)arg1;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;

@end
