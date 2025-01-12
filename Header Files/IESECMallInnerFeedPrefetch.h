//
//     Generated by private class-dump
//

@class IESECMallInnerFeedRecommendResponse, IESECMallActivityResponse, IESECMallInnerFeedNode, NSError;

@interface IESECMallInnerFeedPrefetch : NSObject {
    BOOL _isLoading;
    IESECMallInnerFeedRecommendResponse *_firstScreenData;
    IESECMallActivityResponse *_activityData;
    NSError *_firstScreenError;
    id /* block */ _firstScreenBlock;
    id /* block */ _activityBlock;
    NSError *_activityError;
    IESECMallInnerFeedNode *_node;
}

@property (weak, nonatomic) IESECMallInnerFeedNode *node;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) IESECMallInnerFeedRecommendResponse *firstScreenData;
@property (retain, nonatomic) IESECMallActivityResponse *activityData;
@property (retain, nonatomic) NSError *firstScreenError;
@property (copy, nonatomic) id /* block */ firstScreenBlock;
@property (copy, nonatomic) id /* block */ activityBlock;
@property (retain, nonatomic) NSError *activityError;

- (void)dismissLoading;
- (void)setActivityError:(id)arg0;
- (id)activityError;
- (void)registerActivityCompletionBlock:(id /* block */)arg0;
- (id)firstScreenData;
- (id)firstScreenError;
- (void)registerFirstScreenCompletionBlock:(id /* block */)arg0;
- (void)fetchPreloadCardsWithCompletion:(id /* block */)arg0;
- (void)fetchFirstScreenWithCompletion:(id /* block */)arg0;
- (id /* block */)firstScreenBlock;
- (void)setFirstScreenData:(id)arg0;
- (void)setFirstScreenError:(id)arg0;
- (void)setFirstScreenBlock:(id /* block */)arg0;
- (void)fetchActivityIfNeeded;
- (id)node;
- (BOOL)isLoading;
- (void)setActivityBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (id /* block */)activityBlock;
- (void)setIsLoading:(BOOL)arg0;
- (void)setNode:(id)arg0;
- (id)activityData;
- (void)setActivityData:(id)arg0;
- (void)showLoading;

@end
