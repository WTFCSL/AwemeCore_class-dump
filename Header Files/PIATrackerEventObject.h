//
//     Generated by private class-dump
//

@class PIABiMapTable;

@interface PIATrackerEventObject : NSObject {
    PIABiMapTable *_categories;
    PIABiMapTable *_metrics;
}

@property (retain, nonatomic) PIABiMapTable *categories;
@property (retain, nonatomic) PIABiMapTable *metrics;

- (id)init;
- (id)categories;
- (id)metrics;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;

@end
