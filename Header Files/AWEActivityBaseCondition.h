//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEConditionDataSource, AWEConditionDelegate;

@interface AWEActivityBaseCondition : NSObject <AWEConditionProtocol, AWEActivityLifeCycleProtocol> {
    id<AWEConditionDelegate> conditionDelegate;
    id<AWEConditionDataSource> conditionDataSource;
    id _model;
    id _extraInfo;
}

@property (retain, nonatomic) id model;
@property (retain, nonatomic) id extraInfo;
@property (weak, nonatomic) id<AWEConditionDelegate> conditionDelegate;
@property (weak, nonatomic) id<AWEConditionDataSource> conditionDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraInfo:(id)arg0;
- (void)channelDidLoad;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (id)initWithData:(id)arg0 extraInfo:(id)arg1;
- (void)setData:(id)arg0 extraInfo:(id)arg1;
- (id)conditionDelegate;
- (BOOL)shouldActiveWithData:(id)arg0 extraInfo:(id)arg1;
- (unsigned long long)logicOperationType;
- (void)setConditionDelegate:(id)arg0;
- (id)conditionDataSource;
- (void)setConditionDataSource:(id)arg0;
- (void)checkStatus;
- (void)setModel:(id)arg0;
- (void)timing;
- (void).cxx_destruct;
- (id)model;
- (id)identifier;
- (id)taskIdentifier;
- (void)reset;
- (id)extraInfo;

@end