//
//     Generated by private class-dump
//

@class NSString, NSNumber, HTSLiveText;

@interface IESLiveNotifyEffectMessageScene : NSObject {
    BOOL _needAggregate;
    NSString *_sceneName;
    NSString *_subSceneName;
    NSString *_mixUserID;
    NSNumber *_aggregatedNum;
    HTSLiveText *_aggregatedText;
}

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (retain, nonatomic) NSString *mixUserID;
@property (nonatomic) BOOL needAggregate;
@property (retain, nonatomic) NSNumber *aggregatedNum;
@property (retain, nonatomic) HTSLiveText *aggregatedText;

- (id)subSceneName;
- (void)setSubSceneName:(id)arg0;
- (BOOL)needAggregate;
- (id)mixUserID;
- (void)setMixUserID:(id)arg0;
- (void)setNeedAggregate:(BOOL)arg0;
- (id)aggregatedNum;
- (void)setAggregatedNum:(id)arg0;
- (id)aggregatedText;
- (void)setAggregatedText:(id)arg0;
- (void).cxx_destruct;
- (id)sceneName;
- (void)setSceneName:(id)arg0;

@end
