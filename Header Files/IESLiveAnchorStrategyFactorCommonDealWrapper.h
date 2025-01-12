//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAnchorStrategyFactorDealProtocol, IESLiveStrategyService, IESLiveAnchorFactorDealWrapperDelegate;

@interface IESLiveAnchorStrategyFactorCommonDealWrapper : NSObject <IESLiveStrategyEventDispatcherObserver> {
    BOOL _isUpdated;
    BOOL _isLastContrasted;
    id<IESLiveAnchorStrategyFactorDealProtocol> _model;
    id<IESLiveStrategyService> _service;
    id<IESLiveAnchorFactorDealWrapperDelegate> _delegate;
    id _lastValue;
    id _lastRealValue;
}

@property (retain, nonatomic) id<IESLiveAnchorStrategyFactorDealProtocol> model;
@property (weak, nonatomic) id<IESLiveStrategyService> service;
@property (weak, nonatomic) id<IESLiveAnchorFactorDealWrapperDelegate> delegate;
@property (retain, nonatomic) id lastValue;
@property (nonatomic) BOOL isUpdated;
@property (retain, nonatomic) id lastRealValue;
@property (nonatomic) BOOL isLastContrasted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventDispatcherWillDispatchValue:(id)arg0 withFactorKey:(id)arg1;
- (void)contrastedDispatchWithFactor:(id)arg0;
- (void)addObserverForService:(id)arg0;
- (id)lastRealValue;
- (BOOL)value:(id)arg0 isEqualTo:(id)arg1;
- (void)setIsLastContrasted:(BOOL)arg0;
- (void)setLastRealValue:(id)arg0;
- (BOOL)needUpdateWithValue:(id)arg0;
- (BOOL)isInvalidValue:(id)arg0;
- (BOOL)isLastContrasted;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)resetStatus;
- (void)setIsUpdated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (id)model;
- (void)removeObserver;
- (id)delegate;
- (id)lastValue;
- (BOOL)isUpdated;
- (void)setDelegate:(id)arg0;
- (id)service;
- (void)setLastValue:(id)arg0;

@end
