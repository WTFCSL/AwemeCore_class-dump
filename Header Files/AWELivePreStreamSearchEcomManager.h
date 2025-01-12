//
//     Generated by private class-dump
//

@class AWELivePreStreamContext, NSMutableArray;

@interface AWELivePreStreamSearchEcomManager : NSObject {
    BOOL _pitayaObservered;
    AWELivePreStreamContext *_context;
    NSMutableArray *_cacheSearchWords;
}

@property (nonatomic) BOOL pitayaObservered;
@property (retain, nonatomic) NSMutableArray *cacheSearchWords;
@property (retain, nonatomic) AWELivePreStreamContext *context;

+ (id)sharedManager;

- (void)setCacheSearchWords:(id)arg0;
- (void)setPitayaObservered:(BOOL)arg0;
- (void)dealPitayaCallback:(id)arg0;
- (void)trackPitayaQueryRequest:(id)arg0;
- (void)requestSearchEcom:(id)arg0;
- (id)cacheSearchWords;
- (id)buildCommonParams:(id)arg0 refer:(id)arg1;
- (id)buildCommonParamsWithResult:(id)arg0 wordIndex:(long long)arg1 needExtraParams:(BOOL)arg2;
- (BOOL)supportPitayaSearchEcomWord:(id)arg0;
- (long long)ecomSearchStyle;
- (void)addPitayaObserver;
- (void)removePitayaObserver;
- (id)searchLocalWordModelWithRoomID:(id)arg0;
- (void)trackWordClick:(id)arg0 refer:(id)arg1 wordIndex:(long long)arg2;
- (void)trackWordShow:(id)arg0 refer:(id)arg1 wordIndex:(long long)arg2;
- (void)trackWordInfo:(id)arg0 refer:(id)arg1 wordIndex:(long long)arg2;
- (void)trackWordsArrayShow:(id)arg0 refer:(id)arg1;
- (BOOL)pitayaObservered;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
