//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveComponentsTraceBaseItem : NSObject {
    NSString *_index;
    unsigned long long _method;
    id /* block */ _complete;
    double _enterStart;
    NSMutableDictionary *_infos;
    NSMutableDictionary *_metricInfo;
    NSMutableDictionary *_categoryInfo;
    NSMutableDictionary *_extraInfo;
}

@property (nonatomic) double enterStart;
@property (retain, nonatomic) NSMutableDictionary *infos;
@property (retain, nonatomic) NSMutableDictionary *metricInfo;
@property (retain, nonatomic) NSMutableDictionary *categoryInfo;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (retain, nonatomic) NSString *index;
@property (nonatomic) unsigned long long method;
@property (copy, nonatomic) id /* block */ complete;

- (void)setExtraInfo:(id)arg0;
- (id)durationValid:(double)arg0;
- (id)keyWithStage:(unsigned long long)arg0;
- (double)enterStart;
- (void)setEnterStart:(double)arg0;
- (void)monitorIfNeedForState:(unsigned long long)arg0 isEnd:(BOOL)arg1;
- (id)sceneIdForState:(unsigned long long)arg0 isEnd:(BOOL)arg1;
- (id)metricWithInfo:(id)arg0;
- (void)traceEventWithMetric:(id)arg0 category:(id)arg1 extra:(id)arg2;
- (void)startStage:(unsigned long long)arg0;
- (void)endStage:(unsigned long long)arg0;
- (void)insertMetric:(id)arg0;
- (void)insertCategory:(id)arg0;
- (void)insertExtra:(id)arg0;
- (id)traceInfoWithStage:(unsigned long long)arg0;
- (void)setIndex:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)method;
- (void)setMethod:(unsigned long long)arg0;
- (void)report;
- (id /* block */)complete;
- (void)setMetricInfo:(id)arg0;
- (id)infos;
- (id)index;
- (id)metricInfo;
- (void)setComplete:(id /* block */)arg0;
- (BOOL)invalid;
- (id)categoryInfo;
- (void)setCategoryInfo:(id)arg0;
- (void)setInfos:(id)arg0;
- (id)extraInfo;

@end